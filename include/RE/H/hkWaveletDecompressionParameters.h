#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkWaveletDecompressionParameters
	{
	public:
		// members
		std::uint32_t       m_numD;         // 00?
		std::int32_t        m_blockSize;    // 04?
		std::uint8_t        m_preserved;    // 08?
		std::uint8_t        m_maxBitWidth;  // 09?
		std::uint16_t       pad0A;          // 0A
		const float*        m_offset;       // 0C?
		const float*        m_scale;        // 10?
		const std::uint8_t* m_bitWidth;     // 14?
		const std::uint8_t* m_encodedData;  // 18?
	};
}
