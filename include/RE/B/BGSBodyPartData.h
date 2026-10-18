#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BGSPreloadable.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class BGSBodyPart;
	class BGSRagdoll;
	class NiAVObject;
	class TESFile;

	class BGSBodyPartData :
		public TESForm,  // 00
		public TESModel,  // 18
		public BGSPreloadable  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSBodyPartData };
		static constexpr auto VTABLE{ VTABLE::BGSBodyPartData };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kBPTD_ID };

		// override (TESForm)
		virtual ~BGSBodyPartData() = default;         // 04
		virtual void ClearData() override;            // 05
		virtual bool ProcessBeforeSave() override;    // 06
		virtual bool Load(TESFile* apFile) override;  // 08
		virtual void InitItem() override;             // 22

		BGSBodyPartData* ctor()
		{
			using func_t = BGSBodyPartData*(__thiscall*)(BGSBodyPartData*);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::ctor };
			return func(this);
		}

		BGSBodyPart* GetBodyPart(BGSBodyPart_LIMB_ENUM aType)
		{
			using func_t = BGSBodyPart* (BGSBodyPartData::*)(BGSBodyPart_LIMB_ENUM);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::GetBodyPart };
			return func(this, aType);
		}

		BGSBodyPart* GetBodyPart(ActorValue_Index aeIndex)
		{
			using func_t = BGSBodyPart* (BGSBodyPartData::*)(ActorValue_Index);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::GetBodyPart_1 };
			return func(this, aeIndex);
		}

		void AddBodyPart(BGSBodyPart* apPart)
		{
			using func_t = decltype(&BGSBodyPartData::AddBodyPart);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::AddBodyPart };
			func(this, apPart);
		}

		static void GenerateDefaultBodyPartData()
		{
			using func_t = decltype(&BGSBodyPartData::GenerateDefaultBodyPartData);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::GenerateDefaultBodyPartData };
			func();
		}

		void HideChildLimbs(NiAVObject* apParentObj, NiAVObject* apRootObj, BGSBodyPart_LIMB_ENUM aeParent, NiAVObject* apObj)
		{
			using func_t = decltype(&BGSBodyPartData::HideChildLimbs);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::HideChildLimbs };
			func(this, apParentObj, apRootObj, aeParent, apObj);
		}

		void ShowChildLimbs(NiAVObject* apParentObj, NiAVObject* apRootObj, BGSBodyPart_LIMB_ENUM aeParent, NiAVObject* apObj)
		{
			using func_t = decltype(&BGSBodyPartData::ShowChildLimbs);
			static REL::Relocation<func_t> func{ Offsets::BGSBodyPartData::ShowChildLimbs };
			func(this, apParentObj, apRootObj, aeParent, apObj);
		}

	public:
		// members
		BGSBodyPart* pPartArray[15];  // 34
		BGSRagdoll*  pRagdollData;    // 70
	};
	static_assert(sizeof(BGSBodyPartData) == 0x74);
}
