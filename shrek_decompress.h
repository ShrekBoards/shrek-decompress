#ifndef SHREK_DECOMPRESS_H
#define SHREK_DECOMPRESS_H
#include <stdint.h>

__declspec(dllexport) unsigned int shrek_compress(uint8_t *compressed, size_t comp_size, uint8_t *decompressed, size_t decomp_size);
__declspec(dllexport) unsigned int shrek_decompress(uint8_t *decompressed, size_t decomp_size, uint8_t *compressed, size_t comp_size);

#endif