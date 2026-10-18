#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BIPED_MODEL.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/S/SEX.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelRDT.h"
#include "RE/T/TESModelTextureSwap.h"

namespace RE
{
	class BGSBipedModelList;
	class BipedAnim;
	class TESForm;
	class TESObjectREFR;

	class TESBipedModelForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESBipedModelForm };
		static constexpr auto VTABLE{ VTABLE::TESBipedModelForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESBipedModelForm* ctor()
		{
			using func_t = TESBipedModelForm*(__thiscall*)(TESBipedModelForm*);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESBipedModelForm*);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::dtor };
			func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESBipedModelForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESBipedModelForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::InitItem };
			func(this, apOwner);
		}

		bool FillsBipedSlot(BIPED_OBJECT aeBipedSlot, bool abHairTest, BGSBipedModelList* apBipedModelList)
		{
			using func_t = decltype(&TESBipedModelForm::FillsBipedSlot);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::FillsBipedSlot };
			return func(this, aeBipedSlot, abHairTest, apBipedModelList);
		}

		void AddToBiped(BipedAnim* apBiped, SEX aeSex, BIPED_OBJECT aeBipedObject)
		{
			using func_t = decltype(&TESBipedModelForm::AddToBiped);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::AddToBiped };
			func(this, apBiped, aeSex, aeBipedObject);
		}

		bool GetPlayable()
		{
			using func_t = decltype(&TESBipedModelForm::GetPlayable);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetPlayable };
			return func(this);
		}

		static TESBipedModelForm* GetFormAsBipedModel(TESForm* apForm)
		{
			using func_t = decltype(&TESBipedModelForm::GetFormAsBipedModel);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetFormAsBipedModel };
			return func(apForm);
		}

		static char const* GetWorldModel(TESForm* apObj, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESBipedModelForm::GetWorldModel);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetWorldModel };
			return func(apObj, apRef);
		}

		static char const* GetIcon(TESForm* apObj, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESBipedModelForm::GetIcon);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetIcon };
			return func(apObj, apRef);
		}

		static char const* GetMessageIcon(TESForm* apObj, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESBipedModelForm::GetMessageIcon);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetMessageIcon };
			return func(apObj, apRef);
		}

		static TESModelTextureSwap* GetWorldTESModel(TESForm* apObj, TESObjectREFR* apRef)
		{
			using func_t = TESModelTextureSwap*(__cdecl*)(TESForm*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetWorldTESModel };
			return func(apObj, apRef);
		}

		static TESModelTextureSwap* GetBipedTESModel(TESForm* apObj, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESBipedModelForm::GetBipedTESModel);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetBipedTESModel };
			return func(apObj, apRef);
		}

		TESModelTextureSwap* GetWorldTESModel(SEX aeSex)
		{
			using func_t = TESModelTextureSwap* (TESBipedModelForm::*)(SEX);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetWorldTESModel_1 };
			return func(this, aeSex);
		}

		char const* GetBipedModel(SEX aeSex)
		{
			using func_t = decltype(&TESBipedModelForm::GetBipedModel);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::GetBipedModel };
			return func(this, aeSex);
		}

		bool IsHeavy()
		{
			using func_t = decltype(&TESBipedModelForm::IsHeavy);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::IsHeavy };
			return func(this);
		}

		bool IsMedium()
		{
			using func_t = decltype(&TESBipedModelForm::IsMedium);
			static REL::Relocation<func_t> func{ Offsets::TESBipedModelForm::IsMedium };
			return func(this);
		}

	public:
		// members
		BIPED_MODEL         bipedModelData;      // 04
		TESModelTextureSwap bipedModel[2];       // 0C
		TESModelTextureSwap worldModel[2];       // 4C
		TESIcon             inventoryIcon[2];    // 8C
		BGSMessageIcon      messageIcon[2];      // A4
		TESModelRDT         ConstraintTemplate;  // C4
	};
}
