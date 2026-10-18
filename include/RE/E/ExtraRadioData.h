#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/R/RADIO_DATA.h"

namespace RE
{
	class ExtraRadioData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRadioData };
		static constexpr auto VTABLE{ VTABLE::ExtraRadioData };

		// override (BSExtraData)
		virtual ~ExtraRadioData() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraRadioData* ctor()
		{
			using func_t = ExtraRadioData*(__thiscall*)(ExtraRadioData*);
			static REL::Relocation<func_t> func{ Offsets::ExtraRadioData::ctor };
			return func(this);
		}

	public:
		// members
		RADIO_DATA Data;  // 0C
	};
	static_assert(sizeof(ExtraRadioData) == 0x1C);
}
