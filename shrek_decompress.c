#include <stdint.h>

#include "shrek_decompress.h"

unsigned int shrek_decompress(uint8_t *decompressed, uint8_t *compressed)
{
	uint32_t ebx, esi, edx, edi, ebp, distance;
	uint8_t length, local1, bl, dl, temp, *esi2;
	uint8_t *compressed_ptr = compressed, *decompressed_ptr = decompressed;

	while (1)
	{
		edx = *(compressed_ptr++);
		length = (edx & 7) + 1;
		distance = edx >> 3;

		if (distance == 0x1E)
			distance = *(compressed_ptr++) + 0x1E;
		else if (distance > 0x1E)
		{
			/* 410037 */
			edx = *compressed_ptr;
			distance += edx;
			edx = *(++compressed_ptr);
			edx <<= 8;
			distance = distance + edx + 0xFF;
			compressed_ptr++;
			if (distance == 0x1011D)
				length--;
		}
		/* 40FF75 */
		if (distance != 0)
		{
			/* 40FF79 */
			loc_40FF79:
			bl = *(compressed_ptr + 1);
			dl = *compressed_ptr;
			temp = bl;
			bl = *(compressed_ptr + 2);
			local1 = bl;
			bl = *(compressed_ptr + 3);
			if (distance >= 4)
			{
				/* 40FF91 */
				edi = distance;
				edi >>= 2;
				ebp = -edi;
				distance = distance + (ebp * 4);
				for (edi; edi > 0; edi--)
				{
					*decompressed_ptr = dl;
					dl = temp;
					*(decompressed_ptr + 1) = dl;
					dl = local1;
					compressed_ptr += 4;
					*(decompressed_ptr + 2) = dl;
					*(decompressed_ptr + 3) = bl;
					bl = *(compressed_ptr + 1);
					dl = *compressed_ptr;
					temp = bl;
					bl = *(compressed_ptr + 2);
					decompressed_ptr += 4;
					local1 = bl;
					bl = *(compressed_ptr + 3);
				}
			}
			/* 40FFCF */
			if ((int32_t)distance > 0)
			{
				/* 40FFD3 */
				compressed_ptr += distance;
				*(decompressed_ptr++) = dl;
				if ((int32_t)distance > 1)
				{
					/* 40FFDD */
					dl = temp;
					*(decompressed_ptr++) = dl;
					if ((int32_t)distance > 2)
					{
						/* 40FFE9 */
						dl = local1;
						*(decompressed_ptr++) = dl;
					}
				}
			}
		}

		for (length; length > 0; length--)
		{
			edx = *compressed_ptr;
			edi = edx & 7;
			compressed_ptr++;
			edx >>= 3; /* TODO: Should be SAR */
			if (edi == 0)
			{
				/* 410019 */
				edi = *(compressed_ptr++);
				if (edi == 0)
				{
					/* 4100DE */
					return (uintptr_t)decompressed_ptr -
						(uintptr_t)decompressed;
				}
				edi += 7;
			}
			/* 410028 */
			if (edx == 0x1E)
			{
				/* 41002F */
				edx = *compressed_ptr;
				edx += 0x1E;
				compressed_ptr++;
			}
			else if (edx > 0x1E)
			{
				esi = *compressed_ptr;
				edx += esi;
				esi = *(++compressed_ptr);
				esi <<= 8;
				edx = edx + esi + 0xFF;
				compressed_ptr++;
			}

			/* 410076 */
			esi2 = decompressed_ptr;
			esi2 -= edx;
			esi2--;
			if (edi >= 4)
			{
				/* 410080 */
				ebp = edi >> 2;
				edx = -ebp;
				edi = edi + (edx * 4);
				for (ebp; ebp > 0; ebp--)
				{
					/* 410090 */
					dl = *esi2;
					*decompressed_ptr = dl;
					dl = *(++esi2);
					*(++decompressed_ptr) = dl;
					dl = *(++esi2);
					*(++decompressed_ptr) = dl;
					dl = *(++esi2);
					*(++decompressed_ptr) = dl;
					decompressed_ptr++;
					esi2++;
				}
			}
			/* 4100AE */
			if ((int32_t)edi > 0)
			{
				/* 4100B2 */
				dl = *esi2;
				*(decompressed_ptr++) = dl;
				esi2++;
				if ((int32_t)edi > 1)
				{
					/* 4100BD */
					dl = *esi2;
					*(decompressed_ptr++) = dl;
					if ((int32_t)edi > 2)
					{
						dl = *(esi2 + 1);
						*(decompressed_ptr++) = dl;
					}
				}
			}
			/* 4100CD */
		}
	}
}

unsigned int shrek_compress(uint8_t *decompressed, uint8_t *compressed)
{
	return 0;
}