#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESDescription.h"
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

	class TESObjectIMOD :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public TESScriptableForm,  // 68
		public TESDescription,  // 74
		public TESValueForm,  // 7C
		public TESWeightForm,  // 84
		public BGSDestructibleObjectForm,  // 8C
		public BGSMessageIcon,  // 94
		public BGSPickupPutdownSounds  // A4
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectIMOD };
		static constexpr auto VTABLE{ VTABLE::TESObjectIMOD };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kIMOD_ID };

		// override (TESBoundObject)
		virtual ~TESObjectIMOD() = default;                                                   // 04
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

		TESObjectIMOD* ctor()
		{
			using func_t = TESObjectIMOD*(__thiscall*)(TESObjectIMOD*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectIMOD::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESObjectIMOD) == 0xB0);
}
