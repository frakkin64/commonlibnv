#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EnchantmentItemData.h"
#include "RE/M/MagicItemForm.h"

namespace RE
{
	class EffectSetting;
	class ExtraDataList;
	class TESBoundObject;
	class TESForm;

	class EnchantmentItem :
		public MagicItemForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::EnchantmentItem };
		static constexpr auto VTABLE{ VTABLE::EnchantmentItem };

		// override (MagicItemForm)
		virtual ~EnchantmentItem() = default;       // 04
		virtual void ClearData() override;          // 05
		virtual bool ProcessBeforeSave() override;  // 06

		bool IsValidEnchantForObject(TESForm* apOwner)
		{
			using func_t = decltype(&EnchantmentItem::IsValidEnchantForObject);
			static REL::Relocation<func_t> func{ Offsets::EnchantmentItem::IsValidEnchantForObject };
			return func(this, apOwner);
		}

		static bool IsValidEffectForEnchantment(TESBoundObject* apEnchantableItem, ExtraDataList* apExtra, EffectSetting* apEffectSetting, bool abFromMenus)
		{
			using func_t = decltype(&EnchantmentItem::IsValidEffectForEnchantment);
			static REL::Relocation<func_t> func{ Offsets::EnchantmentItem::IsValidEffectForEnchantment };
			return func(apEnchantableItem, apExtra, apEffectSetting, abFromMenus);
		}

	public:
		// members
		EnchantmentItemData data;  // 34
	};
	static_assert(sizeof(EnchantmentItem) == 0x44);
}
