#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraModdingItem :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraModdingItem };
		static constexpr auto VTABLE{ VTABLE::ExtraModdingItem };

		// override (BSExtraData)
		virtual ~ExtraModdingItem() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraModdingItem* ctor(bool bMod)
		{
			using func_t = ExtraModdingItem*(__thiscall*)(ExtraModdingItem*, bool);
			static REL::Relocation<func_t> func{ Offsets::ExtraModdingItem::ctor };
			return func(this, bMod);
		}

	public:
		// members
		bool         bIsModding;  // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
	static_assert(sizeof(ExtraModdingItem) == 0x10);
}
