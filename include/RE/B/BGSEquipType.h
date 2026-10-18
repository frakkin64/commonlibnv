#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;

	class BGSEquipType :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEquipType };
		static constexpr auto VTABLE{ VTABLE::BGSEquipType };

		enum class EQUIP_TYPE : std::int32_t
		{
			kET_NONE = -1,
			kET_BIG_GUN = 0x0,
			kET_ENERGY_WEAPON = 0x1,
			kET_SMALL_GUN = 0x2,
			kET_MELEE_WEAPON = 0x3,
			kET_UNARMED_WEAPON = 0x4,
			kET_THROWN_WEAPON = 0x5,
			kET_MINE = 0x6,
			kET_BODY_WEAR = 0x7,
			kET_HEAD_WEAR = 0x8,
			kET_HAND_WEAR = 0x9,
			kET_CHEMS = 0xA,
			kET_STIMPACK = 0xB,
			kET_FOOD = 0xC,
			kET_ALCOHOL = 0xD,
			kET_COUNT = 0xE,
		};

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSEquipType* ctor()
		{
			using func_t = BGSEquipType*(__thiscall*)(BGSEquipType*);
			static REL::Relocation<func_t> func{ Offsets::BGSEquipType::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&BGSEquipType::Save);
			static REL::Relocation<func_t> func{ Offsets::BGSEquipType::Save };
			func(this);
		}

		static BGSEquipType::EQUIP_TYPE GetEquipType(TESForm* apForm)
		{
			using func_t = decltype(&BGSEquipType::GetEquipType);
			static REL::Relocation<func_t> func{ Offsets::BGSEquipType::GetEquipType };
			return func(apForm);
		}

		static void GenerateDefaultMenuIcons()
		{
			using func_t = decltype(&BGSEquipType::GenerateDefaultMenuIcons);
			static REL::Relocation<func_t> func{ Offsets::BGSEquipType::GenerateDefaultMenuIcons };
			func();
		}

	public:
		// members
		BGSEquipType::EQUIP_TYPE eEquipType;  // 04
	};
}
