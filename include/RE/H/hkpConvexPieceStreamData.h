#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpConvexPieceStreamData :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexPieceStreamData };
		static constexpr auto VTABLE{ VTABLE::hkpConvexPieceStreamData };

		// override (hkReferencedObject)
		virtual ~hkpConvexPieceStreamData() = default;  // 00

		static void operator_delete(void* p)
		{
			using func_t = decltype(&hkpConvexPieceStreamData::operator_delete);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexPieceStreamData::operator_delete };
			func(p);
		}

	public:
		// members
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_convexPieceStream;           // 08?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_convexPieceOffsets;          // 14?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_convexPieceSingleTriangles;  // 20?
	};
}
