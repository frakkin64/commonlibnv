#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/L/LEV_CREA_MODIFIER.h"

namespace RE
{
	class ExtraLevCreaModifier :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLevCreaModifier };
		static constexpr auto VTABLE{ VTABLE::ExtraLevCreaModifier };

		// override (BSExtraData)
		virtual ~ExtraLevCreaModifier() = default;              // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraLevCreaModifier* ctor()
		{
			using func_t = ExtraLevCreaModifier*(__thiscall*)(ExtraLevCreaModifier*);
			static REL::Relocation<func_t> func{ Offsets::ExtraLevCreaModifier::ctor };
			return func(this);
		}

	public:
		// members
		LEV_CREA_MODIFIER eModifier;  // 0C
	};
	static_assert(sizeof(ExtraLevCreaModifier) == 0x10);
}
