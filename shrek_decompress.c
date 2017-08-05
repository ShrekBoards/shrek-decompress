#include <stdint.h>

#include "shrek_decompress.h"

unsigned int shrek_decompress(uint8_t *decompressed, uint8_t *compressed)
{
	uint32_t distance, length, i, j;
	uint8_t temp, *compressed_ptr = compressed,
		*decompressed_ptr = decompressed, *backwards_ptr = NULL;

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
			if (distance == 0x1011D)
				length--;
		}

		/* Copies 'distance bytes' from compressed to decompressed memory */
		if (distance != 0)
		{
			memcpy(decompressed_ptr, compressed_ptr, distance);
			decompressed_ptr += distance;
			compressed_ptr += distance;
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
			backwards_ptr = decompressed_ptr - distance - 1;
			for (j = length; j > 0; j--)
				*(decompressed_ptr++) = *(backwards_ptr++);
		}
	}
}

unsigned int shrek_compress(uint8_t *decompressed, uint8_t *compressed)
{
	return 0;
}