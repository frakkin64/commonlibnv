#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class RagDollData;

	class ExtraRagDollData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRagDollData };
		static constexpr auto VTABLE{ VTABLE::ExtraRagDollData };

		// override (BSExtraData)
		virtual ~ExtraRagDollData() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraRagDollData* ctor()
		{
			using func_t = ExtraRagDollData*(__thiscall*)(ExtraRagDollData*);
			static REL::Relocation<func_t> func{ Offsets::ExtraRagDollData::ctor };
			return func(this);
		}

	public:
		// members
		RagDollData* pRagDollData;  // 0C
	};
	static_assert(sizeof(ExtraRagDollData) == 0x10);
}
