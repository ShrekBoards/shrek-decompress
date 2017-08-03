#include "stdafx.h"
#include "CppUnitTest.h"

#include <cstdint>
#include <fstream>
#include <string>

extern "C"
{
#include "..\shrek_decompress.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace decompress_test
{		
	struct Test {
		std::wstring	decompressed;	// Path to the decompressed file
		std::wstring	compressed;	// Path to the compressed file
		unsigned int	decomp_size;	// Expected decompressed file size
		unsigned int	comp_size;	// Expected compressed file size
	};

	TEST_CLASS(UnitTest)
	{
		private:
			static const unsigned int TESTS = 7;
			const struct Test tests[TESTS] = {
				/* decompressed			compressed				decomp_size	comp_size */
				{ L"data\\colorbars.dds",	L"data\\colorbars.dds.compressed",	131200,		12288 },
				{ L"data\\havok.xml",		L"data\\havok.xml.compressed",		137261,		61440 },
				{ L"data\\level.db.bin",	L"data\\level.db.bin.compressed",	159616,		57344 },
				{ L"data\\songs.bin",		L"data\\songs.bin.compressed",		442060,		262144 },
				{ L"data\\track.bin",		L"data\\track.bin.compressed",		144124,		51200 },
				{ L"data\\track.ltimesh",	L"data\\track.ltimesh.compressed",	1645256,	1003520 },
				{ L"data\\track.texpack",	L"data\\track.texpack.compressed",	1576960,	1011712 },
			};
		public:
			TEST_METHOD(DecompressTest)
			{
				uint8_t *compressed, *decompressed, *decompressed_real;

				for (unsigned int i = 0; i < TESTS; i++)
				{
					// Open compressed file
					std::ifstream file(tests[i].compressed, std::ios::binary | std::ios::ate);
					if (!file)
					{
						std::wstring err = L"Failed to open compressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					std::streamsize size = file.tellg();
					file.seekg(std::ios::beg);
					compressed = new uint8_t[size];
					if (!file.read((char*)compressed, size))
					{
						std::wstring err = L"Failed to open compressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					file.close();

					// Open decompressed file
					file.open(tests[i].decompressed, std::ios::binary | std::ios::ate);
					if (!file)
					{
						std::wstring err = L"Failed to open compressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					size = file.tellg();
					file.seekg(std::ios::beg);
					decompressed_real = new uint8_t[size];
					if (!file.read((char*)decompressed_real, size))
					{
						std::wstring err = L"Failed to open decompressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					file.close();

					// Decompress the data
					decompressed = new uint8_t[5000000];
					Assert::AreEqual(tests[i].decomp_size, shrek_decompress(decompressed, compressed), L"Decompressed sizes differ");
					for (unsigned int j = 0; j < tests[i].decomp_size; j++)
						Assert::AreEqual(decompressed[j], decompressed_real[j], L"Decompressed files differ");

					delete[] compressed;
					delete[] decompressed;
					delete[] decompressed_real;
				}
			}

			BEGIN_TEST_METHOD_ATTRIBUTE(CompressTest)
				TEST_IGNORE()
			END_TEST_METHOD_ATTRIBUTE()
			TEST_METHOD(CompressTest)
			{
				uint8_t *compressed, *compressed_real, *decompressed;

				for (unsigned int i = 0; i < TESTS; i++)
				{
					// Open compressed file
					std::ifstream file(tests[i].compressed, std::ios::binary | std::ios::ate);
					if (!file)
					{
						std::wstring err = L"Failed to open compressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					std::streamsize size = file.tellg();
					file.seekg(std::ios::beg);
					compressed_real = new uint8_t[size];
					if (!file.read((char*)compressed_real, size))
					{
						std::wstring err = L"Failed to open compressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					file.close();

					// Open decompressed file
					file.open(tests[i].decompressed, std::ios::binary | std::ios::ate);
					if (!file)
					{
						std::wstring err = L"Failed to open compressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					size = file.tellg();
					file.seekg(std::ios::beg);
					decompressed = new uint8_t[size];
					if (!file.read((char*)decompressed, size))
					{
						std::wstring err = L"Failed to open decompressed file '" + tests[i].compressed + L"'";
						Assert::Fail(err.c_str());
					}
					file.close();

					// Compress the data
					decompressed = new uint8_t[5000000];
					Assert::AreEqual(tests[i].comp_size, shrek_compress(compressed, decompressed), L"Compressed sizes differ");
					for (unsigned int j = 0; j < tests[i].comp_size; j++)
						Assert::AreEqual(compressed[j], compressed_real[j], L"Compressed files differ");

					delete[] compressed;
					delete[] decompressed;
					delete[] compressed_real;
				}
			}
	};
}