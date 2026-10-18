#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class D3DXEffects_SType
	{
	public:
		// members
		std::uint32_t Type;            // 00?
		std::uint32_t Class;           // 04?
		std::uint32_t NameOffset;      // 08?
		std::uint32_t SemanticOffset;  // 0C?
		std::uint32_t Elements;        // 10?
		union
		{
			std::uint32_t Members;
			std::uint32_t Rows;
		} ___u5;  // 14?
		std::uint32_t Cols;            // 18?
	};
}
