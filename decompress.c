/* Decompressed data\loading\load5.dds */
/*const unsigned char *decomp = {
	0x44, 0x44, 0x53, 0x20, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x10, 0x08, 0x00, 0x20, 0x00, 0x00, 0x00,
	0x20, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
	0x04, 0x00, 0x00, 0x00, 0x44, 0x58, 0x54, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x90, 0x80, 0x88, 0xFF, 0xFF, 0xFF, 0xBF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x72, 0xE6, 0xAB, 0x60, 0x88, 0x55, 0x55, 0x55, 0x15,
	0x00, 0x55, 0xA1, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0x0B, 0xAF, 0x80, 0x88, 0xF5, 0x29, 0xA2, 0xA8,
	0x00, 0x00, 0x1B, 0x00, 0xCF, 0x02, 0xEF, 0x02, 0x07, 0x9D, 0x60, 0x88, 0x55, 0x54, 0x58, 0x78,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0xAF, 0xC4, 0x60, 0x88, 0x55, 0x55, 0x55, 0x35,
	0x00, 0x30, 0x00, 0xD2, 0x50, 0xFD, 0xFD, 0xFF, 0xF6, 0xD6, 0x61, 0x88, 0x55, 0x95, 0x0D, 0x80,
	0xDB, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x76, 0xDF, 0x25, 0x52, 0x9D, 0x60, 0xEA, 0xEF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x94, 0xE2, 0x41, 0xF8, 0xFC, 0xF3, 0x41,
	0xFF, 0x0B, 0xFF, 0x09, 0xFF, 0x0A, 0xFF, 0x02, 0x27, 0x95, 0xA0, 0x80, 0x60, 0x70, 0x7A, 0x5B,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFD, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x84, 0x99, 0x60, 0x88, 0x55, 0x55, 0x55, 0x15,
	0x10, 0xFB, 0x70, 0xFF, 0xE4, 0xFF, 0xFC, 0xFF, 0x57, 0xD7, 0xC1, 0x90, 0x25, 0x09, 0x83, 0xA2,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9C, 0xFF, 0x53, 0xCE, 0xE5, 0x49, 0xF8, 0xF8, 0xDC, 0x56,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x28, 0x63, 0x81, 0x18, 0x80, 0x62, 0x58, 0x55,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x88, 0xC6, 0x03, 0x29, 0x0D, 0x25, 0x55, 0x55,
	0xFF, 0x04, 0xFF, 0x08, 0xFF, 0x2D, 0xFF, 0xCF, 0x8A, 0xA5, 0x82, 0x68, 0x7B, 0x6B, 0xC3, 0x83,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x40, 0x90, 0x80, 0x88, 0xFF, 0xFF, 0xFC, 0xF9,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x70, 0x00, 0x91, 0x00, 0xD5, 0x00, 0xF4, 0x08, 0x96, 0x60, 0x88, 0xD5, 0x95, 0x35, 0xB5,
	0xFF, 0xEF, 0xFF, 0xAF, 0xFF, 0x5E, 0xFF, 0x4E, 0x2E, 0xB7, 0x24, 0x82, 0xAA, 0xE8, 0x6A, 0x7F,
	0x44, 0xFF, 0x50, 0xFF, 0x40, 0xFF, 0x10, 0xFE, 0xB4, 0xB6, 0x40, 0x78, 0x8F, 0x0D, 0x8D, 0xF5,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x90, 0xB5, 0xC4, 0x39, 0x5F, 0x0A, 0x2E, 0xD5,
	0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xEF, 0xFF, 0xFF, 0xD5, 0xE6, 0x84, 0x39, 0x55, 0xFA, 0x00, 0x0A,
	0xFF, 0xFF, 0xE4, 0xFF, 0x20, 0xFC, 0x5A, 0x31, 0xCC, 0x95, 0x22, 0x79, 0x2B, 0xBD, 0xB5, 0x5C,
	0x08, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x60, 0x88, 0x56, 0x54, 0x54, 0x55,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x88, 0x81, 0x69, 0x40, 0x00, 0x00, 0x00,
	0xFF, 0x2A, 0x74, 0x02, 0x00, 0x00, 0x00, 0x00, 0x60, 0x88, 0x03, 0x5B, 0x35, 0x2A, 0x00, 0x00,
	0x00, 0xFD, 0x30, 0xFF, 0x90, 0xFF, 0xE1, 0xFF, 0x78, 0xD7, 0x20, 0x78, 0xF5, 0x0D, 0x09, 0x01,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBC, 0xEF, 0x42, 0x31, 0xFF, 0x00, 0xA0, 0x56,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9B, 0xEF, 0x81, 0x41, 0x0B, 0xE0, 0xD7, 0x55,
	0x9F, 0x00, 0x4F, 0x00, 0x1C, 0x00, 0x08, 0x00, 0x60, 0x88, 0xCD, 0x74, 0x09, 0x03, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFD, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x21, 0x00, 0xB8, 0x00, 0xFA, 0x60, 0x88, 0x43, 0x31, 0x00, 0x00, 0xE0, 0x70,
	0xB2, 0xDD, 0x30, 0xEC, 0xE9, 0xFF, 0xFF, 0xAE, 0x11, 0xC6, 0x01, 0x51, 0x89, 0xF5, 0x5D, 0x55,
	0xFF, 0x8F, 0xFF, 0x0D, 0xEF, 0x04, 0x37, 0x10, 0x60, 0x90, 0xE1, 0x28, 0xD5, 0x35, 0x25, 0x0B,
	0xD6, 0xFF, 0xB0, 0xBF, 0xE3, 0x9F, 0xFA, 0x9F, 0x80, 0x98, 0x42, 0x39, 0x56, 0xDC, 0xD6, 0xD7,
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x80, 0x80, 0xA9, 0xAA, 0xAA, 0xAA,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0xF7, 0x00, 0xF6, 0x00, 0xD5, 0x00, 0xB2, 0x60, 0x88, 0x23, 0x29, 0x60, 0x60, 0xE0, 0xC0,
	0xAE, 0x02, 0x07, 0x00, 0x03, 0x00, 0x03, 0x00, 0x80, 0x88, 0x81, 0x18, 0x0D, 0x02, 0x00, 0x00,
	0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x80, 0x80, 0x60, 0xAA, 0xAA, 0xAA,
	0xFE, 0xEF, 0x62, 0xDA, 0x00, 0x10, 0x00, 0x00, 0x60, 0x88, 0x84, 0x49, 0x55, 0x78, 0x00, 0x00,
	0x27, 0x01, 0xAE, 0x05, 0x54, 0x01, 0x00, 0x00, 0x60, 0x88, 0xA4, 0x61, 0x0B, 0x25, 0x0A, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x80, 0x78, 0x4A, 0xAA, 0xAA, 0xAA,
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x80, 0x80, 0xA9, 0xAA, 0xAA, 0xAA,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x90, 0x60, 0x88, 0xFF, 0xFF, 0xFF, 0xFF
};*/

/* Compressed data\loading\load5.dds */
/*const unsigned char *comp = {
	0x01, 0x0B, 0x04, 0x24, 0x00, 0x2B, 0xF4, 0x1D, 0xF4, 0x1C, 0x20, 0x44, 0x58, 0x54, 0x33, 0xF0,
	0x0E, 0x02, 0x08, 0x10, 0xF0, 0x13, 0x1D, 0x29, 0x80, 0x90, 0x60, 0x88, 0xFF, 0x03, 0x78, 0x11,
	0x18, 0x40, 0x90, 0x80, 0x7C, 0x08, 0xBF, 0x6E, 0x38, 0x10, 0x72, 0xE6, 0xAB, 0x60, 0x88, 0x55,
	0x02, 0x30, 0x15, 0x00, 0x55, 0xA1, 0xFF, 0xFA, 0xC3, 0x40, 0x0B, 0xAF, 0x80, 0x88, 0xF5, 0x29,
	0xA2, 0xA8, 0xDA, 0x40, 0x1B, 0x00, 0xCF, 0x02, 0xEF, 0x02, 0x07, 0x9D, 0xF3, 0x01, 0x19, 0x54,
	0x58, 0x78, 0xF0, 0x21, 0x41, 0x78, 0x08, 0x18, 0x92, 0xAF, 0xC4, 0xF5, 0x41, 0x60, 0x35, 0x00,
	0x30, 0x00, 0xD2, 0x50, 0xFD, 0xFD, 0xFF, 0xF6, 0xD6, 0x61, 0x7A, 0x29, 0x95, 0x0D, 0x80, 0xDB,
	0xFE, 0xF4, 0x07, 0x02, 0x41, 0x76, 0xDF, 0x25, 0x52, 0x9D, 0x60, 0xEA, 0xEF, 0x6E, 0x02, 0xC0,
	0xE7, 0x94, 0xE2, 0x41, 0xF8, 0xFC, 0xF3, 0x41, 0xFF, 0x0B, 0xFF, 0x09, 0xFF, 0x0A, 0xFF, 0x02,
	0x27, 0x95, 0xA0, 0x80, 0x60, 0x70, 0x7A, 0x5B, 0xF0, 0x05, 0x41, 0x08, 0xFD, 0xF0, 0x13, 0x51,
	0x18, 0x20, 0x84, 0x99, 0xF6, 0xB1, 0x80, 0x10, 0xFB, 0x70, 0xFF, 0xE4, 0xFF, 0xFC, 0xFF, 0x57,
	0xD7, 0xC1, 0x90, 0x25, 0x09, 0x83, 0xA2, 0xF6, 0x3F, 0x51, 0x9C, 0xFF, 0x53, 0xCE, 0xE5, 0x49,
	0xF8, 0xF8, 0xDC, 0x56, 0x7E, 0x02, 0x41, 0x28, 0x63, 0x81, 0x18, 0x80, 0x62, 0x58, 0x55, 0x77,
	0x01, 0x38, 0x88, 0xC6, 0x03, 0x29, 0x0D, 0x25, 0x55, 0x7A, 0x78, 0x04, 0xFF, 0x08, 0xFF, 0x2D,
	0xFF, 0xCF, 0x8A, 0xA5, 0x82, 0x68, 0x7B, 0x6B, 0xC3, 0x83, 0xF6, 0x40, 0x28, 0x01, 0x00, 0x40,
	0x90, 0x80, 0xF3, 0x51, 0x10, 0xFC, 0xF9, 0xF0, 0x0A, 0x61, 0x49, 0x70, 0x00, 0x91, 0x00, 0xD5,
	0x00, 0xF4, 0x08, 0x96, 0x7A, 0x31, 0xF1, 0x05, 0x95, 0x35, 0xB5, 0xFF, 0xEF, 0xFF, 0xAF, 0xFF,
	0x5E, 0xFF, 0x4E, 0x2E, 0xB7, 0x24, 0x82, 0xAA, 0xE8, 0x6A, 0x7F, 0x44, 0xFF, 0x50, 0xFF, 0x40,
	0xFF, 0x10, 0xFE, 0xB4, 0xB6, 0x40, 0x78, 0x8F, 0x0D, 0x8D, 0xF5, 0xF7, 0x50, 0x01, 0x40, 0x90,
	0xB5, 0xC4, 0x39, 0x5F, 0x0A, 0x2E, 0xD5, 0x53, 0x0A, 0xCF, 0xF3, 0x15, 0x01, 0x41, 0x38, 0xE6,
	0x84, 0x39, 0x55, 0xFA, 0x00, 0x0A, 0x4A, 0x91, 0xE4, 0xFF, 0x20, 0xFC, 0x5A, 0x31, 0xCC, 0x95,
	0x22, 0x79, 0x2B, 0xBD, 0xB5, 0x5C, 0x08, 0x00, 0x0C, 0x00, 0x1A, 0x02, 0x43, 0x48, 0x8B, 0x60,
	0x88, 0x56, 0x54, 0x54, 0x55, 0xF0, 0x0A, 0x61, 0x41, 0x7E, 0x6A, 0x19, 0x81, 0x69, 0x40, 0x3B,
	0x81, 0x18, 0x2A, 0x74, 0x02, 0x7E, 0x20, 0x03, 0x5B, 0x35, 0x2A, 0x43, 0x79, 0xFD, 0x30, 0xFF,
	0x90, 0xFF, 0xE1, 0xFF, 0x78, 0xD7, 0x20, 0x78, 0xF5, 0x0D, 0x09, 0x01, 0xF7, 0x60, 0x01, 0x38,
	0xBC, 0xEF, 0x42, 0x31, 0xFF, 0x00, 0xA0, 0xF0, 0x02, 0xF1, 0x68, 0x9B, 0xEF, 0x81, 0x41, 0x0B,
	0xE0, 0xD7, 0x55, 0x9F, 0x00, 0x4F, 0x00, 0x1C, 0xF3, 0x53, 0x39, 0x60, 0x88, 0xCD, 0x74, 0x09,
	0x03, 0x02, 0xF5, 0x2D, 0xF0, 0x01, 0x51, 0x0A, 0xFD, 0xF4, 0x51, 0xF0, 0x09, 0x61, 0x78, 0x0B,
	0x28, 0x21, 0x00, 0xB8, 0x00, 0xFA, 0x6A, 0x10, 0x43, 0x31, 0x52, 0x38, 0xE0, 0x70, 0xB2, 0xDD,
	0x30, 0xEC, 0xE9, 0xB2, 0xF0, 0x0C, 0xAE, 0x11, 0xC6, 0x01, 0x51, 0x89, 0xF5, 0x5D, 0x55, 0xFF,
	0x8F, 0xFF, 0x0D, 0xEF, 0x04, 0x37, 0x10, 0x60, 0x90, 0xE1, 0x28, 0xD5, 0x35, 0x25, 0x0B, 0xD6,
	0xFF, 0xB0, 0xBF, 0xE3, 0x9F, 0xFA, 0x9F, 0x80, 0x98, 0x42, 0x39, 0x56, 0xDC, 0xD6, 0xD7, 0x03,
	0xF7, 0x31, 0x32, 0x60, 0x90, 0x80, 0x80, 0xA9, 0xAA, 0x02, 0xF0, 0x1C, 0x51, 0x78, 0x07, 0x38,
	0xF7, 0x00, 0xF6, 0x00, 0xD5, 0x00, 0xB2, 0x6A, 0x58, 0x23, 0x29, 0x60, 0x60, 0xE0, 0xC0, 0xAE,
	0x02, 0x07, 0x00, 0x03, 0x0B, 0x28, 0x80, 0x88, 0x81, 0x18, 0x0D, 0xF4, 0xAF, 0x0A, 0x30, 0xF0,
	0x03, 0x41, 0x19, 0xF3, 0x41, 0x30, 0xFE, 0xEF, 0x62, 0xDA, 0x00, 0x10, 0x7B, 0x28, 0x88, 0x84,
	0x49, 0x55, 0x78, 0x3A, 0x30, 0x27, 0x01, 0xAE, 0x05, 0x54, 0x01, 0x7C, 0x2A, 0xA4, 0x61, 0x0B,
	0x25, 0x0A, 0xF7, 0x3F, 0xF0, 0x24, 0x61, 0xF0, 0x03, 0x41, 0x14, 0x78, 0x4A, 0xF3, 0x41, 0xF4,
	0x54, 0xF0, 0x36, 0xB1, 0x78, 0x18, 0x00, 0x00, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42,
	0x53, 0x48, 0x41, 0x42, 0x53, 0x48, 0x41, 0x42
};*/

void decompress(unsigned char *decompressed, unsigned char *compressed)
{
	unsigned int ebx, esi, edx, edi, ebp;
	unsigned int local0, local1;

	/* some loop */
	{
		/* 40FF50 */
		edx = (unsigned int)*compressed;
		esi = edx & 7;
		compressed++;
		esi >>= 3;
		edx++;
		local0 = edx;
		if (esi < 0x1E)
		{
			goto loc_40FF75;
		}
		/* 40FF68 */
		else if (esi == 0x1E)
		{
			/* 40FF6E */
			esi = (unsigned int)*compressed;
			esi += 0x1E;
			compressed++;
			goto loc_40FF75;
		}
		else
		{
			/* 410037 */
			edx = (unsigned int)*compressed;
			esi += edx;
			edx = (unsigned int)*(++compressed);
			edx <<= 8;
			esi = (esi + edx + 0xFF);
			compressed++;
			if (esi == 0x1011D)
			{
				/* 410058 */
				local0--;
				goto loc_40FF79;
			}
			else
			{
				/* 40FF75 */
				loc_40FF75:
				if (esi != 0)
				{
					/* 40FF79 */
					loc_40FF79:
					ebx = ((unsigned int)*(compressed + 1) & 0xFF);
					edx = ((unsigned int)*(compressed) & 0xFF);
					/* mov byte ptr [compressed], bl */
					ebx = (unsigned int)*(compressed + 2);
					local1 = ebx;
					ebx = (unsigned int)*(compressed + 3);
					if (edi > 4)
					{
						/* 40FF91 */
						edi = esi;
						edi >>= 2;
						ebp = edi;
						ebp = !ebp;
						esi = (esi + (ebp * 4));
						while (edi != 0)
						{
							*decompressed = edx;
							/* mov dl, byte ptr [esp+18h+arg_4] */
							*(decompressed + 1) = edx;
							/* mov dl, byte ptr [esp+18h+arg_5] */
							compressed += 4;
							*(decompressed + 2) = edx;
							*(decompressed + 3) = edx;
							ebx = (*(compressed + 1) & 0xFF);
							edx = (*compressed & 0xFF);
							/* mov byte ptr [esp+18h+arg_4], bl */
							ebx = (*(compressed + 2) & 0xFF);
							decompressed += 4;
							edi--;
							/* mov [esp+18h+var_5], bl */
							ebx = (*(compressed + 3) & 0xFF);
						}
						goto loc_40FFCF;
					}
					else
					{
						/* 40FFCF */
						loc_40FFCF:
						if ((signed int)esi <= 0)
						{
							goto loc_40FFF0;
						}
						else
						{
							/* 40FFD3 */
							compressed += esi;
							*decompressed = edx;
							decompressed++;
							if (esi > 1)
							{
								/* 40FFDD */
							}
							else
							{
								goto loc_40FFF0;
							}
						}
					}
				}
				else
				{
					/* 40FFF0 */
					loc_40FFF0:
					;
				}
			}
		}
	}
}

int main()
{
	return 0;
}