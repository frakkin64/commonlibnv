#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/C/CARAVANCARDDATA.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESTexture.h"
#include "RE/T/TESValueForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESCaravanCard :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public BGSMessageIcon,  // 68
		public TESValueForm,  // 78
		public TESScriptableForm,  // 80
		public BGSPickupPutdownSounds  // 8C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCaravanCard };
		static constexpr auto VTABLE{ VTABLE::TESCaravanCard };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCCRD_ID };

		// override (TESBoundObject)
		virtual ~TESCaravanCard() = default;                                                  // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool ProcessBeforeSave() override;                                            // 06
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

		TESTexture* GetFaceTexture()
		{
			using func_t = decltype(&TESCaravanCard::GetFaceTexture);
			static REL::Relocation<func_t> func{ Offsets::TESCaravanCard::GetFaceTexture };
			return func(this);
		}

		TESCaravanCard* ctor()
		{
			using func_t = TESCaravanCard*(__thiscall*)(TESCaravanCard*);
			static REL::Relocation<func_t> func{ Offsets::TESCaravanCard::ctor };
			return func(this);
		}

	public:
		// members
		bool            bIsActive;    // 98
		std::uint8_t    pad99[0x3];   // 99
		TESTexture      faceTexture;  // 9C
		TESTexture      backTexture;  // A8
		CARAVANCARDDATA data;         // B4
	};
	static_assert(sizeof(TESCaravanCard) == 0xBC);
}
