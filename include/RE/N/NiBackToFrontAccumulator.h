#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAccumulator.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class NiGeometry;

	class NiBackToFrontAccumulator :
		public NiAccumulator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBackToFrontAccumulator };
		static constexpr auto VTABLE{ VTABLE::NiBackToFrontAccumulator };

		// add
		virtual void Unk_29();  // 29

		// members
		NiTPointerList<NiGeometry*>  m_kItems;                 // 0C
		NiTPointerList<NiGeometry*>* m_kItemsToSortAndRender;  // 18
		std::int32_t                 m_iNumItems;              // 1C
		std::int32_t                 m_iMaxItems;              // 20
		NiGeometry**                 m_ppkItems;               // 24
		float*                       m_pfDepths;               // 28
		std::int32_t                 m_iCurrItem;              // 2C
	};
}
