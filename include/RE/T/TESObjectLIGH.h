#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/O/OBJ_LIGH.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESValueForm.h"
#include "RE/T/TESWeightForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class ExtraTimeLeft;
	class NiAVObject;
	class NiLight;
	class NiNode;
	class REFR_LIGHT;
	class TESBoundObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESSound;

	class TESObjectLIGH :
		public TESBoundAnimObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public BGSMessageIcon,  // 68
		public TESScriptableForm,  // 78
		public TESWeightForm,  // 84
		public TESValueForm,  // 8C
		public BGSDestructibleObjectForm  // 94
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectLIGH };
		static constexpr auto VTABLE{ VTABLE::TESObjectLIGH };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLIGH_ID };

		// override (TESBoundAnimObject)
		virtual ~TESObjectLIGH() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                               // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                           // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                             // 18
		virtual void InitItem() override;                                                                                                                                // 22
		virtual NiColor* GetEmittanceColor() override;                                                                                                                   // 30
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual void UnClone3D(TESObjectREFR* apRequester) override;                                                                                                     // 54
		virtual NiAVObject* LoadGraphics(TESObjectREFR* apRef) override;                                                                                                 // 5D
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;                                                                                              // 5E

		TESSound* GetSound()
		{
			using func_t = decltype(&TESObjectLIGH::GetSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::GetSound };
			return func(this);
		}

		bool GetCanCarry()
		{
			using func_t = decltype(&TESObjectLIGH::GetCanCarry);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::GetCanCarry };
			return func(this);
		}

		TESObjectLIGH* ctor()
		{
			using func_t = TESObjectLIGH*(__thiscall*)(TESObjectLIGH*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::ctor };
			return func(this);
		}

		static void StopParticlesRecursive(NiNode* pNode)
		{
			using func_t = decltype(&TESObjectLIGH::StopParticlesRecursive);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::StopParticlesRecursive };
			func(pNode);
		}

		NiLight* GenDynamic(TESObjectREFR* pRequester, NiAVObject* pModel, bool abForceDynamic)
		{
			using func_t = decltype(&TESObjectLIGH::GenDynamic);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::GenDynamic };
			return func(this, pRequester, pModel, abForceDynamic);
		}

		bool Update(REFR_LIGHT* apLight, ExtraTimeLeft* apExtra)
		{
			using func_t = bool (TESObjectLIGH::*)(REFR_LIGHT*, ExtraTimeLeft*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::Update };
			return func(this, apLight, apExtra);
		}

		bool Update(NiPointer<NiLight> aspLight, float* apWantDimmer, ExtraTimeLeft* apExtra)
		{
			using func_t = bool (TESObjectLIGH::*)(NiPointer<NiLight>, float*, ExtraTimeLeft*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLIGH::Update_1 };
			return func(this, aspLight, apWantDimmer, apExtra);
		}

	public:
		// members
		OBJ_LIGH  data;            // 9C
		float     fFade;           // B4
		TESSound* m_pSound;        // B8
		NiColor   EmittanceColor;  // BC
	};
	static_assert(sizeof(TESObjectLIGH) == 0xC8);
}
