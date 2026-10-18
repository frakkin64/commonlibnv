#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSNote;
	class BGSQuestObjective;
	class TESChallenge;
	class TESForm;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESQuest;
	class TESQuestTarget;
	class TESWorldSpace;
	class TeleportPath;
	class Tile;

	class MapMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MapMenu };
		static constexpr auto VTABLE{ VTABLE::MapMenu };

		// override (Menu)
		virtual ~MapMenu() = default;                                           // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoDownClick(std::int32_t aiID, Tile* apTarget) override;   // 02
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;   // 0A
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E
		virtual void DoControllerSwitch(bool abHas360Controller) override;      // 11

		MapMenu* ctor()
		{
			using func_t = MapMenu*(__thiscall*)(MapMenu*);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&MapMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::Create };
			return func();
		}

		static void ClearAudioLogSubtites()
		{
			using func_t = decltype(&MapMenu::ClearAudioLogSubtites);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ClearAudioLogSubtites };
			func();
		}

		static void UpdateMenu()
		{
			using func_t = decltype(&MapMenu::UpdateMenu);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateMenu };
			func();
		}

		static void SetKnobPosition(bool abPlaySounds)
		{
			using func_t = decltype(&MapMenu::SetKnobPosition);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::SetKnobPosition };
			func(abPlaySounds);
		}

		static void SetPlayerMarker()
		{
			using func_t = decltype(&MapMenu::SetPlayerMarker);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::SetPlayerMarker };
			func();
		}

		static void ClearMapMemory()
		{
			using func_t = decltype(&MapMenu::ClearMapMemory);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ClearMapMemory };
			func();
		}

		static void ClearWorldMapTexture()
		{
			using func_t = decltype(&MapMenu::ClearWorldMapTexture);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ClearWorldMapTexture };
			func();
		}

		static bool ShouldRenderLocalMap()
		{
			using func_t = decltype(&MapMenu::ShouldRenderLocalMap);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ShouldRenderLocalMap };
			return func();
		}

	protected:
		TESWorldSpace* CalculatePlayerMarkerSpace(NiPoint3 aWorldPos)
		{
			using func_t = decltype(&MapMenu::CalculatePlayerMarkerSpace);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::CalculatePlayerMarkerSpace };
			return func(this, aWorldPos);
		}

		static void FastTravelCallback()
		{
			using func_t = decltype(&MapMenu::FastTravelCallback);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::FastTravelCallback };
			func();
		}

		static void SetPlayerMarkerCallback()
		{
			using func_t = decltype(&MapMenu::SetPlayerMarkerCallback);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::SetPlayerMarkerCallback };
			func();
		}

		void StopNoteSound()
		{
			using func_t = decltype(&MapMenu::StopNoteSound);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::StopNoteSound };
			func(this);
		}

		void LoadChallenge(TESChallenge* apChallenge)
		{
			using func_t = decltype(&MapMenu::LoadChallenge);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::LoadChallenge };
			func(this, apChallenge);
		}

		void LoadNote(BGSNote* apNote)
		{
			using func_t = decltype(&MapMenu::LoadNote);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::LoadNote };
			func(this, apNote);
		}

		void HighlightCenterMarker()
		{
			using func_t = decltype(&MapMenu::HighlightCenterMarker);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::HighlightCenterMarker };
			func(this);
		}

		void UpdatePlayingSounds()
		{
			using func_t = decltype(&MapMenu::UpdatePlayingSounds);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdatePlayingSounds };
			func(this);
		}

		void UpdateCurrentPage()
		{
			using func_t = decltype(&MapMenu::UpdateCurrentPage);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateCurrentPage };
			func(this);
		}

		void UpdateNotes()
		{
			using func_t = decltype(&MapMenu::UpdateNotes);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateNotes };
			func(this);
		}

		void ToggleNotesChallengeMode(bool bChange)
		{
			using func_t = decltype(&MapMenu::ToggleNotesChallengeMode);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ToggleNotesChallengeMode };
			func(this, bChange);
		}

		void UpdateChallenges()
		{
			using func_t = decltype(&MapMenu::UpdateChallenges);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateChallenges };
			func(this);
		}

		void UpdateQuests()
		{
			using func_t = decltype(&MapMenu::UpdateQuests);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateQuests };
			func(this);
		}

		static std::int32_t QuestObjectiveSortFunc(ListBoxItem<BGSQuestObjective*>* apItem1, ListBoxItem<BGSQuestObjective*>* apItem2)
		{
			using func_t = decltype(&MapMenu::QuestObjectiveSortFunc);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::QuestObjectiveSortFunc };
			return func(apItem1, apItem2);
		}

		static std::int32_t RadioSortFunc(ListBoxItem<TESObjectREFR*>* apItem1, ListBoxItem<TESObjectREFR*>* apItem2)
		{
			using func_t = decltype(&MapMenu::RadioSortFunc);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::RadioSortFunc };
			return func(apItem1, apItem2);
		}

		static bool RadioFilterFunc(TESObjectREFR* pcurrStation)
		{
			using func_t = decltype(&MapMenu::RadioFilterFunc);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::RadioFilterFunc };
			return func(pcurrStation);
		}

		void UpdateRadioList()
		{
			using func_t = decltype(&MapMenu::UpdateRadioList);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateRadioList };
			func(this);
		}

		void ResetWaveform()
		{
			using func_t = decltype(&MapMenu::ResetWaveform);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ResetWaveform };
			func(this);
		}

		void UpdateWaveform()
		{
			using func_t = decltype(&MapMenu::UpdateWaveform);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateWaveform };
			func(this);
		}

		NiPoint3 WorldToMapCoord(NiPoint3 result, TESWorldSpace* apWorldspace)
		{
			using func_t = decltype(&MapMenu::WorldToMapCoord);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::WorldToMapCoord };
			return func(this, result, apWorldspace);
		}

		void ZoomMap(bool abZoomIn, float afZoomDelta)
		{
			using func_t = decltype(&MapMenu::ZoomMap);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::ZoomMap };
			func(this, abZoomIn, afZoomDelta);
		}

		void UpdateWorldMap()
		{
			using func_t = decltype(&MapMenu::UpdateWorldMap);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateWorldMap };
			func(this);
		}

		void UpdateLocalMap()
		{
			using func_t = decltype(&MapMenu::UpdateLocalMap);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::UpdateLocalMap };
			func(this);
		}

		void AddMapIcons()
		{
			using func_t = decltype(&MapMenu::AddMapIcons);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::AddMapIcons };
			func(this);
		}

		void AddQuestMarkers()
		{
			using func_t = decltype(&MapMenu::AddQuestMarkers);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::AddQuestMarkers };
			func(this);
		}

		void CreatePlayerMarker()
		{
			using func_t = decltype(&MapMenu::CreatePlayerMarker);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::CreatePlayerMarker };
			func(this);
		}

		void DeletePlayerMarker()
		{
			using func_t = decltype(&MapMenu::DeletePlayerMarker);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::DeletePlayerMarker };
			func(this);
		}

		TESObjectREFR* GetWorldMapTrackingRef(TESObjectREFR* apRef, TeleportPath* apPathToRef)
		{
			using func_t = decltype(&MapMenu::GetWorldMapTrackingRef);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::GetWorldMapTrackingRef };
			return func(this, apRef, apPathToRef);
		}

		void CreateWaypointPath(TESObjectREFR* apStartRef, TESObjectREFR* apTargetRef, TeleportPath* apPathToTarget, std::int32_t aiID)
		{
			using func_t = decltype(&MapMenu::CreateWaypointPath);
			static REL::Relocation<func_t> func{ Offsets::MapMenu::CreateWaypointPath };
			func(this, apStartRef, apTargetRef, apPathToTarget, aiID);
		}

	public:
		// members
		Tile*                                pTiles[22];                   // 28
		std::int32_t                         iCurrentPage;                 // 80
		Tile*                                pMapTile;                     // 84
		float                                fWaveformAnimationStartTime;  // 88
		bool                                 bShowingAllNotes;             // 8C
		std::uint8_t                         pad8D[0x3];                   // 8D
		BGSNote*                             pSelectedNote;                // 90
		std::uint32_t                        uiNoteEnterStartTime;         // 94
		BSSimpleList<BSSoundHandle>          SoundsToPlay;                 // 98
		BSSimpleArray<BSStringT<char>, 1024> SubtitlesToShow;              // A8
		BSSimpleList<BSSoundHandle>*         pCurrentSound;                // B8
		bool                                 bSoundsLoading;               // BC
		std::uint8_t                         padBD[0x3];                   // BD
		float                                fSoundDurationMillis;         // C0
		std::int32_t                         iSoundPlayStartTime;          // C4
		float                                fOldPipboyRadioVolume;        // C8
		TESQuest*                            pDisplayedQuest;              // CC
		TESQuestTarget*                      pDisplayedQuestTarget;        // D0
		Tile*                                pHighlightedMapMarker;        // D4
		BSSimpleList<TESObjectREFR*>         WorldMapMarkerList;           // D8
		BSSimpleList<TESObjectREFR*>         LocalMapMarkerList;           // E0
		NiPoint2                             MapNWCorner;                  // E8
		NiPoint2                             MapSECorner;                  // F0
		TESForm*                             PlayerMarkerSpace;            // F8
		NiPoint3                             PlayerMarkerPos;              // FC
		TESForm*                             pMapSpace;                    // 108
		TESWorldSpace*                       pRootMapSpace;                // 10C
		bool                                 bRootSpaceChanged;            // 110
		std::uint8_t                         pad111[0x3];                  // 111
		TESObjectREFR*                       pMapPlayerRef;                // 114
		TESObjectREFR*                       pFastTravelMarker;            // 118
		TESObjectCELL*                       pAdjustNorthRotationCell;     // 11C
		NiPoint2                             WorldMapDragStart;            // 120
		std::uint32_t                        uiNextLocalMapGrid;           // 128
		bool                                 bFogOfWarEnabled;             // 12C
		std::uint8_t                         pad12D[0x3];                  // 12D
		ListBox<TESQuest*>                   lbQuestsList;                 // 130
		ListBox<BGSNote*>                    lbNotesList;                  // 160
		ListBox<TESObjectREFR*>              lbRadioStationsList;          // 190
		ListBox<BGSQuestObjective*>          lbQuestObjectivesList;        // 1C0
		ListBox<TESChallenge*>               lbChallengeList;              // 1F0
		BSSimpleArray<Tile*, 1024>           debugWaypoints;               // 220
	};
	static_assert(sizeof(MapMenu) == 0x230);
}
