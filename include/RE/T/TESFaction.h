#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/F/FACTION_DATA.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESReactionForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class RANK_DATA;
	class TESFile;
	class TESReputation;

	class TESFaction :
		public TESForm,  // 00
		public TESFullName,  // 18
		public TESReactionForm  // 24
	{
	public:
		static constexpr auto RTTI{ RTTI::TESFaction };
		static constexpr auto VTABLE{ VTABLE::TESFaction };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kFACT_ID };

		// override (TESForm)
		virtual ~TESFaction() = default;                                                      // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool ProcessBeforeSave() override;                                            // 06
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;              // 19
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;  // 1A
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                    // 1C
		virtual void InitItem() override;                                                     // 22
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43

		bool GetEvil()
		{
			using func_t = decltype(&TESFaction::GetEvil);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::GetEvil };
			return func(this);
		}

		void SetPCAnEnemy(bool abVal)
		{
			using func_t = decltype(&TESFaction::SetPCAnEnemy);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::SetPCAnEnemy };
			func(this, abVal);
		}

		void SetPCMurder(bool abVal)
		{
			using func_t = decltype(&TESFaction::SetPCMurder);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::SetPCMurder };
			func(this, abVal);
		}

		void SetPCAttack(bool abVal)
		{
			using func_t = decltype(&TESFaction::SetPCAttack);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::SetPCAttack };
			func(this, abVal);
		}

		bool GetPCAnEnemy()
		{
			using func_t = decltype(&TESFaction::GetPCAnEnemy);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::GetPCAnEnemy };
			return func(this);
		}

		TESFaction* ctor()
		{
			using func_t = TESFaction*(__thiscall*)(TESFaction*);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::ctor };
			return func(this);
		}

		void SetFactionFightReaction(TESFaction* apFaction, std::int32_t aiFightReaction)
		{
			using func_t = decltype(&TESFaction::SetFactionFightReaction);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::SetFactionFightReaction };
			func(this, apFaction, aiFightReaction);
		}

		static void CheckFactionReactions()
		{
			using func_t = decltype(&TESFaction::CheckFactionReactions);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::CheckFactionReactions };
			func();
		}

		bool GetTrackCrime()
		{
			using func_t = decltype(&TESFaction::GetTrackCrime);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::GetTrackCrime };
			return func(this);
		}

	protected:
		void SetFlag(std::uint32_t aiFlag, bool abVal)
		{
			using func_t = decltype(&TESFaction::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::TESFaction::SetFlag };
			func(this, aiFlag, abVal);
		}

	public:
		// members
		FACTION_DATA             data;            // 34
		TESReputation*           pReputation;     // 38
		BSSimpleList<RANK_DATA*> m_rankDataList;  // 3C
		std::int32_t             iMajorCrime;     // 44
		std::int32_t             iMinorCrime;     // 48
	};
	static_assert(sizeof(TESFaction) == 0x4C);
}
