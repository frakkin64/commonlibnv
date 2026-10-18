#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraPatrolRefInUseData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPatrolRefInUseData };
		static constexpr auto VTABLE{ VTABLE::ExtraPatrolRefInUseData };

		// override (BSExtraData)
		virtual ~ExtraPatrolRefInUseData() = default;           // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraPatrolRefInUseData* ctor(TESObjectREFR* apUser)
		{
			using func_t = ExtraPatrolRefInUseData*(__thiscall*)(ExtraPatrolRefInUseData*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraPatrolRefInUseData::ctor };
			return func(this, apUser);
		}

		bool GetCanBeUsedBy(TESObjectREFR const* apPotentialUser)
		{
			using func_t = decltype(&ExtraPatrolRefInUseData::GetCanBeUsedBy);
			static REL::Relocation<func_t> func{ Offsets::ExtraPatrolRefInUseData::GetCanBeUsedBy };
			return func(this, apPotentialUser);
		}

	public:
		// members
		std::uint32_t User;  // 0C
	};
	static_assert(sizeof(ExtraPatrolRefInUseData) == 0x10);
}
