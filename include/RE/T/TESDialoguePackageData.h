#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PDIAL_TRIGGER_TYPE.h"
#include "RE/T/TESPackageData.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PackageLocation;
	class TESForm;
	class TESTopic;

	class TESDialoguePackageData :
		public TESPackageData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESDialoguePackageData };
		static constexpr auto VTABLE{ VTABLE::TESDialoguePackageData };

		// override (TESPackageData)
		virtual ~TESDialoguePackageData() = default;                      // 00
		virtual void Copy(TESPackageData* __formal) override;             // 01
		virtual bool Compare(TESPackageData* __formal) override;          // 02
		virtual void Save() override;                                     // 03
		virtual void InitItem(TESForm* __formal) override;                // 04
		virtual void SaveGame(BGSSaveFormBuffer* __formal) override;      // 05
		virtual void LoadGame(BGSLoadFormBuffer* __formal) override;      // 06
		virtual void InitLoadGame(BGSLoadFormBuffer* __formal) override;  // 07

		TESDialoguePackageData* ctor()
		{
			using func_t = TESDialoguePackageData*(__thiscall*)(TESDialoguePackageData*);
			static REL::Relocation<func_t> func{ Offsets::TESDialoguePackageData::ctor };
			return func(this);
		}

	public:
		// members
		float              fFov;                   // 04
		TESTopic*          ptopic;                 // 08
		PackageLocation*   pTargetLocation;        // 0C
		bool               bNOHeadtracking;        // 10
		bool               bDoNotControlTarget;    // 11
		bool               bSpeakerMoveTalk;       // 12
		std::uint8_t       pad13;                  // 13
		float              fDistanceStartTalking;  // 14
		bool               bSayTo;                 // 18
		std::uint8_t       pad19[0x3];             // 19
		PDIAL_TRIGGER_TYPE eTriggerType;           // 1C
	};
	static_assert(sizeof(TESDialoguePackageData) == 0x20);
}
