#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/T/TESBoundObject.h"
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
	class TESSound;

	class TESObjectMISC :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public TESScriptableForm,  // 68
		public TESValueForm,  // 74
		public TESWeightForm,  // 7C
		public BGSDestructibleObjectForm,  // 84
		public BGSMessageIcon,  // 8C
		public BGSPickupPutdownSounds  // 9C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectMISC };
		static constexpr auto VTABLE{ VTABLE::TESObjectMISC };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kMISC_ID };

		// override (TESBoundObject)
		virtual ~TESObjectMISC() = default;                                                   // 04
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

		TESObjectMISC* ctor()
		{
			using func_t = TESObjectMISC*(__thiscall*)(TESObjectMISC*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectMISC::ctor };
			return func(this);
		}

		TESSound* GetLoopingSound()
		{
			using func_t = decltype(&TESObjectMISC::GetLoopingSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectMISC::GetLoopingSound };
			return func(this);
		}

	public:
		// members
		TESSound* pLoopingSound;  // A8
	};
	static_assert(sizeof(TESObjectMISC) == 0xAC);
}
