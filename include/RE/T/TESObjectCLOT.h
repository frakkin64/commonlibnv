#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEquipType.h"
#include "RE/T/TESBipedModelForm.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESEnchantableForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESValueForm.h"
#include "RE/T/TESWeightForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;
	class TESForm;

	class TESObjectCLOT :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESScriptableForm,  // 3C
		public TESEnchantableForm,  // 48
		public TESValueForm,  // 58
		public TESWeightForm,  // 60
		public TESBipedModelForm,  // 68
		public BGSDestructibleObjectForm,  // 144
		public BGSEquipType  // 14C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectCLOT };
		static constexpr auto VTABLE{ VTABLE::TESObjectCLOT };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCLOT_ID };

		// override (TESBoundObject)
		virtual ~TESObjectCLOT() = default;                                                   // 04
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

		TESObjectCLOT* ctor()
		{
			using func_t = TESObjectCLOT*(__thiscall*)(TESObjectCLOT*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectCLOT::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESObjectCLOT) == 0x154);
}
