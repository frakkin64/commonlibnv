#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEquipType.h"
#include "RE/I/IngredientItemData.h"
#include "RE/M/MagicItemObject.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESWeightForm.h"

namespace RE
{
	class TESWaterForm;

	class IngredientItem :
		public MagicItemObject,  // 00
		public TESModelTextureSwap,  // 4C
		public TESIcon,  // 6C
		public TESScriptableForm,  // 78
		public TESWeightForm,  // 84
		public BGSEquipType,  // 8C
		public BGSDestructibleObjectForm  // 94
	{
	public:
		static constexpr auto RTTI{ RTTI::IngredientItem };
		static constexpr auto VTABLE{ VTABLE::IngredientItem };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kINGR_ID };

		// override (MagicItemObject)
		virtual ~IngredientItem() = default;            // 04
		virtual void ClearData() override;              // 05
		virtual bool ProcessBeforeSave() override;      // 06
		virtual void InitItem() override;               // 22
		virtual TESWaterForm* GetWaterType() override;  // 50
		virtual bool IsAutoCalc() override;             // 51

		IngredientItem* ctor()
		{
			using func_t = IngredientItem*(__thiscall*)(IngredientItem*);
			static REL::Relocation<func_t> func{ Offsets::IngredientItem::ctor };
			return func(this);
		}

	public:
		// members
		IngredientItemData data;  // 9C
	};
	static_assert(sizeof(IngredientItem) == 0xA4);
}
