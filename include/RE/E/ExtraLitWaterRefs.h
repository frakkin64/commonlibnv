#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESForm;
	class TESObjectREFR;

	class ExtraLitWaterRefs :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLitWaterRefs };
		static constexpr auto VTABLE{ VTABLE::ExtraLitWaterRefs };

		// override (BSExtraData)
		virtual ~ExtraLitWaterRefs() = default;                 // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraLitWaterRefs* ctor()
		{
			using func_t = ExtraLitWaterRefs*(__thiscall*)(ExtraLitWaterRefs*);
			static REL::Relocation<func_t> func{ Offsets::ExtraLitWaterRefs::ctor };
			return func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ExtraLitWaterRefs::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ExtraLitWaterRefs::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		BSSimpleList<TESObjectREFR*> RefList;  // 0C
	};
	static_assert(sizeof(ExtraLitWaterRefs) == 0x14);
}
