#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "shrek_decompress.h"

#define MAX_DISTANCE 0x1011D

unsigned int shrek_decompress(uint8_t *decompressed, size_t decomp_size, uint8_t *compressed, size_t comp_size)
{
	uint32_t distance, length, i, j;
	uint8_t temp, *compressed_ptr = compressed,
		*decompressed_ptr = decompressed, *backwards_ptr = NULL;
	size_t bytes_written = 0;

	while (1)
	{
		temp = *(compressed_ptr++);
		length = (temp & 7) + 1;
		distance = temp >> 3;

		if (distance == 0x1E)
			distance = *(compressed_ptr++) + 0x1E;
		else if (distance > 0x1E)
		{
			distance += *compressed_ptr;
			distance += (*(++compressed_ptr) << 8) + 0xFF;
			compressed_ptr++;
			if (distance == MAX_DISTANCE)
				length--;
		}

		/* Copies 'distance bytes' from compressed to decompressed memory */
		if (distance != 0)
		{
			if ((bytes_written + distance) > decomp_size)
				return 0;
			memcpy(decompressed_ptr, compressed_ptr, distance);
			decompressed_ptr += distance;
			compressed_ptr += distance;
			bytes_written += distance;
		}

		for (i = length; i > 0; i--)
		{
			temp = *(compressed_ptr++);
			length = temp & 7;
			distance = temp >> 3;

			if (length == 0)
			{
				length = *(compressed_ptr++);
				if (length == 0)
				{
					return (uintptr_t)decompressed_ptr -
						(uintptr_t)decompressed;
				}
				length += 7;
			}

			if (distance == 0x1E)
				distance = *(compressed_ptr++) + 0x1E;
			else if (distance > 0x1E)
			{
				distance += *compressed_ptr;
				distance += (*(++compressed_ptr) << 8) + 0xFF;
				compressed_ptr++;
			}

			/*
			 * Each of the next 'length' characters is equal to the
			 * characters exactly 'distance' characters behind it in
			 * the uncompressed stream
			 */
			if ((bytes_written + length) > decomp_size)
				return 0;
			backwards_ptr = decompressed_ptr - distance - 1;
			for (j = length; j > 0; j--)
				*(decompressed_ptr++) = *(backwards_ptr++);
			bytes_written += length;
		}
	}
}

unsigned int shrek_compress(uint8_t *compressed, size_t comp_size, uint8_t *decompressed, size_t decomp_size)
{
	/*
	 * Adapated from code provided by zed0
	 * <https://reverseengineering.stackexchange.com/questions/16021/>
	 */
	uint16_t header;
	uint8_t *compressed_ptr = compressed, *decompressed_ptr = decompressed;
	size_t bytes_written = 0, remaining;

	/* Repeat as many max-length blocks as we can */
	while ((decomp_size - bytes_written) > MAX_DISTANCE)
	{
		if ((bytes_written + 3 + MAX_DISTANCE) > comp_size)
			return 0;
		*(compressed_ptr++) = 0xF8;
		*(compressed_ptr++) = 0xFF;
		*(compressed_ptr++) = 0xFF;
		memcpy(compressed_ptr, decompressed_ptr, MAX_DISTANCE);
		compressed_ptr += MAX_DISTANCE;
		decompressed_ptr += MAX_DISTANCE;
		bytes_written += 3 + MAX_DISTANCE;
	}

	/* Add a final block with the remaining data */
	remaining = (decomp_size - (size_t)(decompressed_ptr - decompressed));
	if (remaining > 0x11D)
	{
		if ((bytes_written + remaining + 3) > comp_size)
			return 0;
		*(compressed_ptr++) = 0xF8;
		header = (uint16_t)(remaining - 0x11E);
		*(compressed_ptr++) = (uint8_t)(header & 0xFF);
		*(compressed_ptr++) = (uint8_t)(header >> 8);
		memcpy(compressed_ptr, decompressed_ptr, remaining);
		compressed_ptr += remaining;
		bytes_written += remaining + 3;
	}
	else if (remaining > 0x1D)
	{
		if ((bytes_written + remaining + 2) > comp_size)
			return 0;
		*(compressed_ptr++) = 0xF0;
		*(compressed_ptr++) = (uint8_t)(remaining - 0x1E);
		memcpy(compressed_ptr, decompressed_ptr, remaining);
		compressed_ptr += remaining;
		bytes_written += remaining + 2;
	}
	else
	{
		if ((bytes_written + remaining + 1) > comp_size)
			return 0;
		*(compressed_ptr++) = (uint8_t)(remaining << 3);
		memcpy(compressed_ptr, decompressed_ptr, remaining);
		compressed_ptr += remaining;
		bytes_written += remaining + 1;
	}

	/* Add a special case 0 length back reference to end the stream */
	if ((bytes_written + 2) > comp_size)
		return 0;
	*(compressed_ptr++) = 0x00;
	*(compressed_ptr++) = 0x00;
	bytes_written += 2;

	return bytes_written;
}