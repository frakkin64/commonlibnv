#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/O/OBJ_BOOK.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESEnchantableForm.h"
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
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class TESObjectBOOK :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public TESScriptableForm,  // 68
		public TESEnchantableForm,  // 74
		public TESValueForm,  // 84
		public TESWeightForm,  // 8C
		public TESDescription,  // 94
		public BGSDestructibleObjectForm,  // 9C
		public BGSMessageIcon,  // A4
		public BGSPickupPutdownSounds  // B4
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectBOOK };
		static constexpr auto VTABLE{ VTABLE::TESObjectBOOK };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kBOOK_ID };

		// override (TESBoundObject)
		virtual ~TESObjectBOOK() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                               // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                           // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                             // 18
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		bool GetScroll()
		{
			using func_t = decltype(&TESObjectBOOK::GetScroll);
			static REL::Relocation<func_t> func{ Offsets::TESObjectBOOK::GetScroll };
			return func(this);
		}

		TESObjectBOOK* ctor()
		{
			using func_t = TESObjectBOOK*(__thiscall*)(TESObjectBOOK*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectBOOK::ctor };
			return func(this);
		}

		ActorValue_Index GetTeaches()
		{
			using func_t = decltype(&TESObjectBOOK::GetTeaches);
			static REL::Relocation<func_t> func{ Offsets::TESObjectBOOK::GetTeaches };
			return func(this);
		}

		bool Read(TESObjectREFR* apActionRef)
		{
			using func_t = decltype(&TESObjectBOOK::Read);
			static REL::Relocation<func_t> func{ Offsets::TESObjectBOOK::Read };
			return func(this, apActionRef);
		}

	public:
		// members
		OBJ_BOOK      Data;   // C0
		std::uint16_t padC2;  // C2
	};
	static_assert(sizeof(TESObjectBOOK) == 0xC4);
}
