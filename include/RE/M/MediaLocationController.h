#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/F/FIGHT_REACTION.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class MediaSet;
	class TESFaction;
	class TESFile;
	class TESObjectREFR;

	class MediaLocationController :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::MediaLocationController };
		static constexpr auto VTABLE{ VTABLE::MediaLocationController };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kALOC_ID };

		// override (TESForm)
		virtual ~MediaLocationController() = default;    // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		MediaLocationController* ctor()
		{
			using func_t = MediaLocationController*(__thiscall*)(MediaLocationController*);
			static REL::Relocation<func_t> func{ Offsets::MediaLocationController::ctor };
			return func(this);
		}

		bool Update(bool abInCombat)
		{
			using func_t = decltype(&MediaLocationController::Update);
			static REL::Relocation<func_t> func{ Offsets::MediaLocationController::Update };
			return func(this, abInCombat);
		}

		bool GetDayNight()
		{
			using func_t = decltype(&MediaLocationController::GetDayNight);
			static REL::Relocation<func_t> func{ Offsets::MediaLocationController::GetDayNight };
			return func(this);
		}

		void InitItemList(BSSimpleList<MediaSet*>* plist)
		{
			using func_t = decltype(&MediaLocationController::InitItemList);
			static REL::Relocation<func_t> func{ Offsets::MediaLocationController::InitItemList };
			func(this, plist);
		}

	private:
		MediaSet* GetRandomListItem(BSSimpleList<MediaSet*>* list)
		{
			using func_t = decltype(&MediaLocationController::GetRandomListItem);
			static REL::Relocation<func_t> func{ Offsets::MediaLocationController::GetRandomListItem };
			return func(this, list);
		}

	public:
		// members
		std::uint32_t           uiLocationDelay;              // 24
		std::uint32_t           uiLayerTime;                  // 28
		std::uint32_t           uiLoopTime;                   // 2C
		std::uint32_t           uiMediaStartTime;             // 30
		bool                    bIsActive;                    // 34
		bool                    bInTension;                   // 35
		bool                    bInCombat;                    // 36
		bool                    bIsDay;                       // 37
		bool                    bIsConditional;               // 38
		std::uint8_t            pad39[0x3];                   // 39
		float                   fCurrentPlayerRadius;         // 3C
		std::uint32_t           uiFoundHostileActors;         // 40
		std::uint32_t           uiFoundFactionActors;         // 44
		FIGHT_REACTION          eCurrentFactionReaction;      // 48
		char                    cCurrentLayer;                // 4C
		std::uint8_t            pad4D[0x3];                   // 4D
		MediaSet*               pCurrentMediaSet;             // 50
		TESFullName             MediaLocationControllerName;  // 54
		TESFaction*             pFaction;                     // 60
		FIGHT_REACTION          rFactionConditional;          // 64
		TESObjectREFR*          pAudioMarker;                 // 68
		std::int32_t            iFlags;                       // 6C
		float                   fLayerTwoPercent;             // 70
		float                   fLayerThreePercent;           // 74
		float                   fRetriggerDelay;              // 78
		float                   fLocationDelay;               // 7C
		std::uint32_t           uiDayStart;                   // 80
		std::uint32_t           uiNightStart;                 // 84
		BSSimpleList<MediaSet*> lConditionalNeutralList;      // 88
		BSSimpleList<MediaSet*> lConditionalAllyList;         // 90
		BSSimpleList<MediaSet*> lConditionalFriendList;       // 98
		BSSimpleList<MediaSet*> lConditionalEnemyList;        // A0
		BSSimpleList<MediaSet*> lLocationList;                // A8
		BSSimpleList<MediaSet*> lBattleList;                  // B0
	};
	static_assert(sizeof(MediaLocationController) == 0xB8);
}
