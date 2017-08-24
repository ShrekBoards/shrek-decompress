#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../shrek_decompress.h"

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
	decompressed_size = shrek_decompress(decompressed, 5000000, compressed, compressed_size);

	/* Write the decompressed output to a new file */
	if ((fp = fopen("decompressed", "wb")) == 0)
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
