#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBreakableConstraintData.h"

namespace RE
{
	class hkpConstraintData;

	class ahkpBreakableConstraintData :
		public hkpBreakableConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ahkpBreakableConstraintData };
		static constexpr auto VTABLE{ VTABLE::ahkpBreakableConstraintData };

		void SetChild(hkpConstraintData* apData)
		{
			using func_t = decltype(&ahkpBreakableConstraintData::SetChild);
			static REL::Relocation<func_t> func{ Offsets::ahkpBreakableConstraintData::SetChild };
			func(this, apData);
		}
	};
}
