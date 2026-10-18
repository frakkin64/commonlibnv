#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraWaterLightRefs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraWaterLightRefs };
		static constexpr auto VTABLE{ VTABLE::ExtraWaterLightRefs };

		// override (BSExtraData)
		virtual ~ExtraWaterLightRefs() = default;               // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraWaterLightRefs* ctor()
		{
			using func_t = ExtraWaterLightRefs*(__thiscall*)(ExtraWaterLightRefs*);
			static REL::Relocation<func_t> func{ Offsets::ExtraWaterLightRefs::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleList<TESObjectREFR*> RefList;  // 0C
	};
	static_assert(sizeof(ExtraWaterLightRefs) == 0x14);
}
