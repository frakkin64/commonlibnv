#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBipedModelList.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEquipType.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/B/BGSRepairItemList.h"
#include "RE/B/BSSimpleList.h"
#include "RE/O/OBJ_ARMO.h"
#include "RE/T/TESBipedModelForm.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESEnchantableForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESHealthForm.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESValueForm.h"
#include "RE/T/TESWeightForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class FOLEY_SOUND;
	class TESFile;
	class TESForm;

	class TESObjectARMO :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESScriptableForm,  // 3C
		public TESEnchantableForm,  // 48
		public TESValueForm,  // 58
		public TESWeightForm,  // 60
		public TESHealthForm,  // 68
		public TESBipedModelForm,  // 70
		public BGSDestructibleObjectForm,  // 14C
		public BGSEquipType,  // 154
		public BGSRepairItemList,  // 15C
		public BGSBipedModelList,  // 164
		public BGSPickupPutdownSounds  // 16C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectARMO };
		static constexpr auto VTABLE{ VTABLE::TESObjectARMO };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kARMO_ID };

		// override (TESBoundObject)
		virtual ~TESObjectARMO() = default;                                                   // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitItem() override;                                                     // 22
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43

		float GetArmorRating()
		{
			using func_t = decltype(&TESObjectARMO::GetArmorRating);
			static REL::Relocation<func_t> func{ Offsets::TESObjectARMO::GetArmorRating };
			return func(this);
		}

		float GetDamageThreshold()
		{
			using func_t = decltype(&TESObjectARMO::GetDamageThreshold);
			static REL::Relocation<func_t> func{ Offsets::TESObjectARMO::GetDamageThreshold };
			return func(this);
		}

		TESObjectARMO* ctor()
		{
			using func_t = TESObjectARMO*(__thiscall*)(TESObjectARMO*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectARMO::ctor };
			return func(this);
		}

		std::uint8_t GetArmorWeight()
		{
			using func_t = decltype(&TESObjectARMO::GetArmorWeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectARMO::GetArmorWeight };
			return func(this);
		}

	public:
		// members
		OBJ_ARMO      data;          // 178
		std::uint32_t flags;         // 184
		union
		{
			BSSimpleList<FOLEY_SOUND*>* pFoleySoundList;
			TESObjectARMO* pFoleyTemplate;
		} ___u15;  // 188
		bool          bIsFoleyBase;  // 18C
		std::uint8_t  pad18D[0x3];   // 18D
	};
	static_assert(sizeof(TESObjectARMO) == 0x190);
}
