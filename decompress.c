#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int decompress(uint8_t *decompressed, uint8_t *compressed)
{
	uint32_t ebx, esi, edx, edi, ebp;
	uint8_t local0, local1, bl, dl, *esi2;
	uint8_t *compressed_ptr = compressed, *decompressed_ptr = decompressed;

	while (1)
	{
		/* 40FF50 */
		edx = *compressed_ptr;
		esi = edx;
		edx &= 7;
		compressed_ptr++;
		esi >>= 3;
		edx++;
		local0 = edx;
		if (esi >= 0x1E)
		{
			/* 40FF68 */
			if (esi == 0x1E)
			{
				/* 40FF6E */
				esi = *compressed_ptr;
				esi += 0x1E;
				compressed_ptr++;
			}
			else
			{
				/* 410037 */
				edx = *compressed_ptr;
				esi += edx;
				edx = *(++compressed_ptr);
				edx <<= 8;
				esi = (int8_t)esi + (int8_t)edx + 0xFF;
				compressed_ptr++;
				if (esi == 0x1011D)
				{
					/* 410058 */
					local0--;
					goto loc_40FF79;
				}
			}
		}
		/* 40FF75 */
		if (esi != 0)
		{
			/* 40FF79 */
			loc_40FF79:
			bl = *(compressed_ptr + 1);
			dl = *compressed_ptr;
			*compressed = bl;
			bl = *(compressed_ptr + 2);
			local1 = bl;
			bl = *(compressed_ptr + 3);
			if (esi >= 4)
			{
				/* 40FF91 */
				edi = esi;
				edi >>= 2;
				ebp = -edi;
				esi = (int8_t)esi + ((int8_t)ebp * 4);
				for (edi; edi > 0; edi--)
				{
					*decompressed_ptr = dl;
					dl = *compressed;
					*(decompressed_ptr + 1) = dl;
					dl = local1;
					compressed_ptr += 4;
					*(decompressed_ptr + 2) = dl;
					*(decompressed_ptr + 3) = bl;
					bl = *(compressed_ptr + 1);
					dl = *compressed_ptr;
					*compressed = bl;
					bl = *(compressed_ptr + 2);
					decompressed_ptr += 4;
					local1 = bl;
					bl = *(compressed_ptr + 3);
				}
			}
			/* 40FFCF */
			if ((int32_t)esi > 0)
			{
				/* 40FFD3 */
				compressed_ptr += esi;
				*(decompressed_ptr++) = dl;
				if (esi > 1)
				{
					/* 40FFDD */
					dl = *compressed;
					*(decompressed_ptr++) = dl;
					if (esi > 2)
					{
						/* 40FFE9 */
						dl = local1;
						*(decompressed_ptr++) = dl;
					}
				}
			}
		}
		/* 40FFF0 */
		edx = local0;
		if (local0 == 0)
			continue;

		for (local0; local0 > 0; local0--)
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
			if (edx >= 0x1E)
			{
				/* 41002D */
				if (edx == 0x1E)
				{
					/* 41002F */
					edx = *compressed_ptr;
					edx += 0x1E;
				}
				else
				{
					esi = *compressed_ptr;
					edx += esi;
					esi = *(++compressed_ptr);
					esi <<= 8;
					edx = (int8_t)edx + (int8_t)esi + 0xFF;
				}
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

int main(int argc, char **argv)
{
	FILE *fp;
	uint8_t *compressed, *decompressed;
	long int compressed_size, decompressed_size;

	if (argc != 2)
	{
		fprintf(stderr, "Please supply a file to decompress\n");
		return 1;
	}

	if ((fp = fopen(argv[1], "rb")) == 0)
	{
		fprintf(stderr, "Error opening file '%s': %s\n", argv[1],
			strerror(errno));
		return 1;
	}

	/* Get the size of the compressed data */
	fseek(fp, 0, SEEK_END);
	compressed_size = ftell(fp);
	rewind(fp);
	compressed = (uint8_t*)malloc(compressed_size);
	fread(compressed, 1, compressed_size, fp);
	fclose(fp);

	/* Decompress the file */
	decompressed = (uint8_t*)malloc(5000000);
	decompressed_size = decompress(decompressed, compressed);

	/* Write the decompressed output to a new file */
	if((fp = fopen("decompressed", "wb")) == 0)
	{
		fprintf(stderr, "Error opening file 'decompressed': %s\n",
			strerror(errno));
		return 1;
	}
	fwrite(decompressed, decompressed_size, 1, fp); 
	fclose(fp);

	free(compressed);
	free(decompressed);	
	return 0;
}
