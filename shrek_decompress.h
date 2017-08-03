#ifndef SHREK_DECOMPRESS_H
#define SHREK_DECOMPRESS_H
#include <stdint.h>

__declspec(dllexport) unsigned int shrek_decompress(uint8_t *decompressed, uint8_t *compressed);

#endif