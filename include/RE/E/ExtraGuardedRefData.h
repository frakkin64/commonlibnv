#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class ExtraGuardedRefData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraGuardedRefData };
		static constexpr auto VTABLE{ VTABLE::ExtraGuardedRefData };

		// override (BSExtraData)
		virtual ~ExtraGuardedRefData() = default;               // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraGuardedRefData* ctor()
		{
			using func_t = ExtraGuardedRefData*(__thiscall*)(ExtraGuardedRefData*);
			static REL::Relocation<func_t> func{ Offsets::ExtraGuardedRefData::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleArray<std::uint32_t, 1024> Guards;  // 0C
	};
	static_assert(sizeof(ExtraGuardedRefData) == 0x1C);
}
