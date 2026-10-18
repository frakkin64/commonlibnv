#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/B/BSStringT.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESValueForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESCasinoChips :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public BGSMessageIcon,  // 68
		public TESValueForm,  // 78
		public BGSDestructibleObjectForm,  // 80
		public BGSPickupPutdownSounds  // 88
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCasinoChips };
		static constexpr auto VTABLE{ VTABLE::TESCasinoChips };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCHIP_ID };

		// override (TESBoundObject)
		virtual ~TESCasinoChips() = default;                                                  // 04
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

		TESCasinoChips* ctor()
		{
			using func_t = TESCasinoChips*(__thiscall*)(TESCasinoChips*);
			static REL::Relocation<func_t> func{ Offsets::TESCasinoChips::ctor };
			return func(this);
		}

	public:
		// members
		BSStringT<char> cDesc;  // 94
	};
	static_assert(sizeof(TESCasinoChips) == 0x9C);
}
