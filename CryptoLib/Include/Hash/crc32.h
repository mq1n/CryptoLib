#pragma once

namespace CryptoLib {
class Hash_CRC32 {
public:
	static STRX Generate(STRX dat);
	static STRX GenerateFile(STRX filename);

protected:
	static UINT32 table[];
	static uint32_t GetCRC(uint32_t crcinit, uint8_t * bs, uint32_t bssize);
};
}