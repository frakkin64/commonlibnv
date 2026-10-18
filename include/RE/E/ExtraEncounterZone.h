#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class BGSEncounterZone;

	class ExtraEncounterZone :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraEncounterZone };
		static constexpr auto VTABLE{ VTABLE::ExtraEncounterZone };

		// override (BSExtraData)
		virtual ~ExtraEncounterZone() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraEncounterZone* ctor()
		{
			using func_t = ExtraEncounterZone*(__thiscall*)(ExtraEncounterZone*);
			static REL::Relocation<func_t> func{ Offsets::ExtraEncounterZone::ctor };
			return func(this);
		}

	public:
		// members
		BGSEncounterZone* pZone;  // 0C
	};
	static_assert(sizeof(ExtraEncounterZone) == 0x10);
}
