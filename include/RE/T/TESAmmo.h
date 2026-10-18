#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AMMO_DATA.h"
#include "RE/A/AMMO_DATA_NV.h"
#include "RE/B/BGSClipRoundsForm.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESValueForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class TESAmmoEffect;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESAmmo :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public BGSMessageIcon,  // 68
		public TESValueForm,  // 78
		public BGSClipRoundsForm,  // 80
		public BGSDestructibleObjectForm,  // 88
		public BGSPickupPutdownSounds,  // 90
		public TESScriptableForm  // 9C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESAmmo };
		static constexpr auto VTABLE{ VTABLE::TESAmmo };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kAMMO_ID };

		// override (TESBoundObject)
		virtual ~TESAmmo() = default;                                                         // 04
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
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy) override;       // 53

		bool GetIsPlayable()
		{
			using func_t = decltype(&TESAmmo::GetIsPlayable);
			static REL::Relocation<func_t> func{ Offsets::TESAmmo::GetIsPlayable };
			return func(this);
		}

		TESAmmo* ctor()
		{
			using func_t = TESAmmo*(__thiscall*)(TESAmmo*);
			static REL::Relocation<func_t> func{ Offsets::TESAmmo::ctor };
			return func(this);
		}

		void BuildMenuString(char* astrResult, std::uint32_t auiResultLen)
		{
			using func_t = decltype(&TESAmmo::BuildMenuString);
			static REL::Relocation<func_t> func{ Offsets::TESAmmo::BuildMenuString };
			func(this, astrResult, auiResultLen);
		}

		BSSimpleList<TESAmmoEffect*>* GetAmmoEffectList()
		{
			using func_t = decltype(&TESAmmo::GetAmmoEffectList);
			static REL::Relocation<func_t> func{ Offsets::TESAmmo::GetAmmoEffectList };
			return func(this);
		}

	public:
		// members
		AMMO_DATA                    data;             // A8
		AMMO_DATA_NV                 NVdata;           // B0
		BSStringT<char>              cDesc;            // C4
		BSStringT<char>              cAbbrev;          // CC
		BSSimpleList<TESAmmoEffect*> pAmmoEffectList;  // D4
	};
	static_assert(sizeof(TESAmmo) == 0xDC);
}
