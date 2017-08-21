#ifndef SHREK_DECOMPRESS_H
#define SHREK_DECOMPRESS_H
#include <stddef.h>
#include <stdint.h>

#ifdef _WIN32
__declspec(dllexport) unsigned int shrek_compress(uint8_t *compressed, size_t comp_size, uint8_t *decompressed, size_t decomp_size);
__declspec(dllexport) unsigned int shrek_decompress(uint8_t *decompressed, size_t decomp_size, uint8_t *compressed, size_t comp_size);
#else
unsigned int shrek_compress(uint8_t *compressed, size_t comp_size, uint8_t *decompressed, size_t decomp_size);
unsigned int shrek_decompress(uint8_t *decompressed, size_t decomp_size, uint8_t *compressed, size_t comp_size);
#endif

#endif