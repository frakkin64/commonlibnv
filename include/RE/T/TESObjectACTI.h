#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSOpenCloseForm.h"
#include "RE/B/BSStringT.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESMagicTargetForm.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BGSTalkingActivator;
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESSound;
	class TESWaterForm;

	class TESObjectACTI :
		public TESBoundAnimObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESScriptableForm,  // 5C
		public BGSDestructibleObjectForm,  // 68
		public BGSOpenCloseForm  // 70
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectACTI };
		static constexpr auto VTABLE{ VTABLE::TESObjectACTI };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kACTI_ID };

		// override (TESBoundAnimObject)
		virtual ~TESObjectACTI() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual TESWaterForm* GetWaterType() override;                                                                                                                   // 50

		TESObjectACTI* ctor()
		{
			using func_t = TESObjectACTI*(__thiscall*)(TESObjectACTI*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectACTI::ctor };
			return func(this);
		}

		void SetActivationString(BSStringT<char> ActivateTextOverrideInput)
		{
			using func_t = decltype(&TESObjectACTI::SetActivationString);
			static REL::Relocation<func_t> func{ Offsets::TESObjectACTI::SetActivationString };
			func(this, ActivateTextOverrideInput);
		}

		BSStringT<char> GetActivationString()
		{
			using func_t = decltype(&TESObjectACTI::GetActivationString);
			static REL::Relocation<func_t> func{ Offsets::TESObjectACTI::GetActivationString };
			return func(this);
		}

	public:
		// members
		TESSound*            pSoundLoop;            // 74
		TESSound*            pSoundActivate;        // 78
		TESSound*            pRadioTemplate;        // 7C
		TESWaterForm*        pWaterForm;            // 80
		BGSTalkingActivator* pRadioStation;         // 84
		BSStringT<char>      ActivateTextOverride;  // 88
	};
	static_assert(sizeof(TESObjectACTI) == 0x90);
}
