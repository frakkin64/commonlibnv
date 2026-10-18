#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/ENCOUNTER_ZONE_DATA.h"
#include "RE/E/ENCOUNTER_ZONE_GAME_DATA.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;

	class BGSEncounterZone :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSEncounterZone };
		static constexpr auto VTABLE{ VTABLE::BGSEncounterZone };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kECZN_ID };

		// override (TESForm)
		virtual ~BGSEncounterZone() = default;                                // 04
		virtual void ClearData() override;                                    // 05
		virtual bool Load(TESFile* apFile) override;                          // 08
		virtual void Save() override;                                         // 0B
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 17
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 1C
		virtual void InitItem() override;                                     // 22
		virtual void Copy(TESForm* apCopy) override;                          // 42
		virtual bool Compare(TESForm* apCopy) override;                       // 43

		BGSEncounterZone* ctor()
		{
			using func_t = BGSEncounterZone*(__thiscall*)(BGSEncounterZone*);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::ctor };
			return func(this);
		}

		std::uint16_t GetCalcedZoneLevel()
		{
			using func_t = decltype(&BGSEncounterZone::GetCalcedZoneLevel);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::GetCalcedZoneLevel };
			return func(this);
		}

		void DetermineLevel()
		{
			using func_t = decltype(&BGSEncounterZone::DetermineLevel);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::DetermineLevel };
			func(this);
		}

		bool ShouldReset()
		{
			using func_t = decltype(&BGSEncounterZone::ShouldReset);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::ShouldReset };
			return func(this);
		}

		bool QNeverReset()
		{
			using func_t = decltype(&BGSEncounterZone::QNeverReset);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::QNeverReset };
			return func(this);
		}

		static void CreateNoZone()
		{
			using func_t = decltype(&BGSEncounterZone::CreateNoZone);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::CreateNoZone };
			func();
		}

		static BGSEncounterZone* GetNoZone()
		{
			using func_t = decltype(&BGSEncounterZone::GetNoZone);
			static REL::Relocation<func_t> func{ Offsets::BGSEncounterZone::GetNoZone };
			return func();
		}

	public:
		// members
		ENCOUNTER_ZONE_DATA      Data;      // 18
		ENCOUNTER_ZONE_GAME_DATA GameData;  // 20
	};
	static_assert(sizeof(BGSEncounterZone) == 0x30);
}
