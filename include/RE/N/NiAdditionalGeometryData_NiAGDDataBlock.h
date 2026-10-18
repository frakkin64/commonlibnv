#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) NiAdditionalGeometryData_NiAGDDataBlock
	{
	public:
		virtual ~NiAdditionalGeometryData_NiAGDDataBlock() = default;  // 00

		// members
		std::uint32_t m_uiDataBlockSize;  // 04?
		std::uint8_t* m_pucDataBlock;     // 08?
		bool          m_bOwnData;         // 0C?
		bool          m_bBSHeap;          // 0D?
		std::uint16_t pad0E;              // 0E
	};
}
