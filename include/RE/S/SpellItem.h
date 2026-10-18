#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicItemForm.h"
#include "RE/S/SpellItemData.h"

namespace RE
{
	class SpellItem :
		public MagicItemForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SpellItem };
		static constexpr auto VTABLE{ VTABLE::SpellItem };

		enum class SpellFlag : std::int32_t
		{
			kCOST_OVERRIDE = 0x1,
			kALWAYS_SUCCEEDS = 0x2,
			kPC_STARTSPELL = 0x4,
			kIMMUNE_TO_SILENCE = 0x8,
			kIGNORE_LOS_CHECK = 0x10,
			kIGNORE_RESISTANCE = 0x20,
			kNO_ABSORB_REFLECT = 0x40,
			kFORCE_TOUCH_EXPLODE = 0x80,
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSPEL_ID };

		// override (MagicItemForm)
		virtual ~SpellItem() = default;             // 04
		virtual void ClearData() override;          // 05
		virtual bool ProcessBeforeSave() override;  // 06

		SpellItem* ctor()
		{
			using func_t = SpellItem*(__thiscall*)(SpellItem*);
			static REL::Relocation<func_t> func{ Offsets::SpellItem::ctor };
			return func(this);
		}

		bool IsFlagSet(SpellItem::SpellFlag aiFlag)
		{
			using func_t = decltype(&SpellItem::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::SpellItem::IsFlagSet };
			return func(this, aiFlag);
		}

	public:
		// members
		SpellItemData data;  // 34
	};
	static_assert(sizeof(SpellItem) == 0x44);
}
