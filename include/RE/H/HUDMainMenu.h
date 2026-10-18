#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSTimer.h"
#include "RE/H/HotKeysWheel.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class ActorsNearPlayerData;
	class NiCamera;
	class NiControllerSequence;
	class TESModel;
	class TESObjectREFR;
	class TESQuest;
	class TESQuestTarget;
	class TESRegion;
	class Tile;

	class HUDMainMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HUDMainMenu };
		static constexpr auto VTABLE{ VTABLE::HUDMainMenu };

		class HUDRegionData;
		class HUDTravelLocData;
		class MessageData;
		class QuestObjective;
		class RadiationUpdate;
		class SubtitleData;
		class XPUpdate;

		enum class HUD_BRIGHTNESS : std::int32_t
		{
			kHB_HUD_TEXT = 0x0,
			kHB_HUD_BRACKETS = 0x1,
			kHB_HUD_BRACKETS_GLOW = 0x2,
			kHB_HUD_METERS = 0x3,
			kHB_HUD_METER_BACKGROUND = 0x4,
			kHB_HUD_METERS_GHOST = 0x5,
			kHB_HUD_ICONS = 0x6,
			kHB_HUD_DEFAULT = 0x7,
		};

		enum class HUD_JUSTIFY : std::int32_t
		{
			kHJ_LEFT = 0x0,
			kHJ_RIGHT = 0x1,
			kHJ_CENTER = 0x2,
		};

		enum class HUD_MENU_MODE : std::int32_t
		{
			kHMM_NONE = 0x0,
			kHMM_CHANGED = 0x1,
			kHMM_RUN_AND_GUN = 0x2,
			kHMM_PIPBOY = 0x3,
			kHMM_START = 0x4,
			kHMM_LOAD = 0x5,
			kHMM_DIALOGUE = 0x6,
			kHMM_VATS = 0x7,
			kHMM_VATS_PLAYBACK = 0x8,
			kHMM_CONTAINER = 0x9,
			kHMM_SIT_SLEEP_ANIM = 0xA,
			kHMM_SIT_SLEEP = 0xB,
			kHMM_MOVEMENT_DISABLED = 0xC,
			kHMM_PIPBOY_DISABLED = 0xD,
			kHMM_CHARGEN_MENU = 0xE,
			kHMM_HACKING = 0xF,
			kHMM_TERMINAL = 0x10,
			kHMM_MESSAGE_MENU = 0x11,
			kHMM_SPECIAL_BOOK = 0x12,
			kHMM_LOVE_TESTER = 0x13,
			kHMM_VANITY = 0x14,
			kHMM_AUTO_VANITY = 0x15,
			kHMM_IRON_SIGHTS = 0x16,
			kHMM_SNIPER_RIFLE = 0x17,
			kHMM_MOVIE = 0x18,
			kHMM_CASINO_GAME = 0x19,
		};

		enum class HUD_MESSAGE_EMOTION : std::int32_t
		{
			kHME_NEUTRAL = 0x0,
			kHME_HAPPY = 0x1,
			kHME_SAD = 0x2,
			kHME_PAIN = 0x3,
		};

		class HUDRegionData
		{
		public:
			// members
			TESRegion*   pRegion;              // 00?
			char         strDisplayText[260];  // 04?
			bool         bUpdateLastRegion;    // 108?
			std::uint8_t pad109[0x3];          // 109
		};

		class HUDTravelLocData
		{
		public:
			// members
			TESObjectREFR* pMarker;             // 00?
			bool           bInRange;            // 04?
			bool           bForceLastLocation;  // 05?
			std::uint16_t  pad06;               // 06
		};

		class MessageData
		{
		public:
			// members
			char  strText[260];       // 00?
			char  IconFilename[260];  // 104?
			char  SoundName[260];     // 208?
			float fDurationSecs;      // 30C?
		};

		class QuestObjective
		{
		public:
			// members
			char ObjectiveName[260];  // 00?
			bool bCompleted;          // 104?
			bool bReminder;           // 105?
		};

		class RadiationUpdate
		{
		public:
			// members
			std::int32_t iPlayerRads;  // 00?
			float        fRadsAdded;   // 04?
		};

		class SubtitleData
		{
		public:
			// members
			char          strText[260];         // 00?
			std::uint32_t uiSubtitleStartTime;  // 104?
			float         fDurationSecs;        // 108?
			NiPoint3      SpeakerLoc;           // 10C?
			std::int32_t  iPriority;            // 118?
		};

		class XPUpdate
		{
		public:
			// members
			std::int32_t iPlayerLevel;  // 00?
			std::int32_t iPlayerXP;     // 04?
			std::int32_t iAddedXP;      // 08?
		};

		// override (Menu)
		virtual ~HUDMainMenu() = default;                                       // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D

		static HUDMainMenu::HUD_MENU_MODE GetMenuMode()
		{
			using func_t = decltype(&HUDMainMenu::GetMenuMode);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::GetMenuMode };
			return func();
		}

		static void ForceObjectiveReminders(bool abOn)
		{
			using func_t = decltype(&HUDMainMenu::ForceObjectiveReminders);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ForceObjectiveReminders };
			func(abOn);
		}

		HUDMainMenu* ctor()
		{
			using func_t = HUDMainMenu*(__thiscall*)(HUDMainMenu*);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&HUDMainMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::Create };
			return func();
		}

		void UpdateActorValue(ActorValue_Index aeActorValue)
		{
			using func_t = decltype(&HUDMainMenu::UpdateActorValue);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateActorValue };
			func(this, aeActorValue);
		}

		static void SetMenuMode(HUDMainMenu::HUD_MENU_MODE aeMenuMode)
		{
			using func_t = decltype(&HUDMainMenu::SetMenuMode);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetMenuMode };
			func(aeMenuMode);
		}

		void UpdateWeaponStatus()
		{
			using func_t = decltype(&HUDMainMenu::UpdateWeaponStatus);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateWeaponStatus };
			func(this);
		}

		static float HeadingBetweenLocations(NiPoint3 const& aStart, NiPoint3 const& aDest)
		{
			using func_t = decltype(&HUDMainMenu::HeadingBetweenLocations);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::HeadingBetweenLocations };
			return func(aStart, aDest);
		}

		static void SetRegionText(HUDMainMenu::HUDRegionData const& aRegionData)
		{
			using func_t = decltype(&HUDMainMenu::SetRegionText);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetRegionText };
			func(aRegionData);
		}

		static void SetLocationText(HUDMainMenu::HUDTravelLocData const& aLocationData)
		{
			using func_t = decltype(&HUDMainMenu::SetLocationText);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetLocationText };
			func(aLocationData);
		}

		static void SetWorldspaceText(char const* apWorldspaceName)
		{
			using func_t = decltype(&HUDMainMenu::SetWorldspaceText);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetWorldspaceText };
			func(apWorldspaceName);
		}

		static void SetTargetType(TESObjectREFR* apObject, bool bLongDistanceCheck)
		{
			using func_t = decltype(&HUDMainMenu::SetTargetType);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetTargetType };
			func(apObject, bLongDistanceCheck);
		}

		static void Revert()
		{
			using func_t = decltype(&HUDMainMenu::Revert);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::Revert };
			func();
		}

		static void SetEnemyActor(Actor* apActor)
		{
			using func_t = decltype(&HUDMainMenu::SetEnemyActor);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetEnemyActor };
			func(apActor);
		}

		void UpdateSneak()
		{
			using func_t = decltype(&HUDMainMenu::UpdateSneak);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateSneak };
			func(this);
		}

		static void DisplayQuestReminder(TESQuest* apQuest)
		{
			using func_t = decltype(&HUDMainMenu::DisplayQuestReminder);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::DisplayQuestReminder };
			func(apQuest);
		}

		static void SetRadiationLevel(float afDrinkinRads, float afStandinRads)
		{
			using func_t = decltype(&HUDMainMenu::SetRadiationLevel);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetRadiationLevel };
			func(afDrinkinRads, afStandinRads);
		}

		void UpdateStatusModeUI(bool abIsHardcore)
		{
			using func_t = decltype(&HUDMainMenu::UpdateStatusModeUI);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateStatusModeUI };
			func(this, abIsHardcore);
		}

		void StatusModeTileEffects(Tile* apTile, float a_arg2, bool a_arg3)
		{
			using func_t = decltype(&HUDMainMenu::StatusModeTileEffects);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::StatusModeTileEffects };
			func(this, apTile, a_arg2, a_arg3);
		}

		static void SetBrightness(Tile* apTile, HUDMainMenu::HUD_BRIGHTNESS aeBrightness)
		{
			using func_t = decltype(&HUDMainMenu::SetBrightness);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetBrightness };
			func(apTile, aeBrightness);
		}

		static void UpdateMeter(Tile* apTile, float a_arg2, HUDMainMenu::HUD_JUSTIFY a_arg3, std::int32_t aeJustify, std::int32_t aiMinTicks)
		{
			using func_t = void(__cdecl*)(Tile*, float, HUDMainMenu::HUD_JUSTIFY, std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateMeter };
			func(apTile, a_arg2, a_arg3, aeJustify, aiMinTicks);
		}

		static void UpdateMeter(Tile* apMeterTile, Tile* apGhostMeterTile, float afMeterPercent, float a_arg4, HUDMainMenu::HUD_JUSTIFY a_arg5, std::int32_t aeJustify)
		{
			using func_t = void(__cdecl*)(Tile*, Tile*, float, float, HUDMainMenu::HUD_JUSTIFY, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateMeter_1 };
			func(apMeterTile, apGhostMeterTile, afMeterPercent, a_arg4, a_arg5, aeJustify);
		}

		bool ShowSubtitle(char const* apString, BSSoundHandle aSpeakerLoc, NiPoint3 apTarget, TESObjectREFR* abForceShow, bool a_arg5)
		{
			using func_t = decltype(&HUDMainMenu::ShowSubtitle);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowSubtitle };
			return func(this, apString, aSpeakerLoc, apTarget, abForceShow, a_arg5);
		}

		HUDMainMenu::SubtitleData* GetNextSubtitle()
		{
			using func_t = decltype(&HUDMainMenu::GetNextSubtitle);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::GetNextSubtitle };
			return func(this);
		}

		bool ShowMessage(char const* apString, HUDMainMenu::HUD_MESSAGE_EMOTION aeEmotion, char const* apIconFilename, char const* apSoundName, float a_arg5, bool a_arg6)
		{
			using func_t = decltype(&HUDMainMenu::ShowMessage);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowMessage };
			return func(this, apString, aeEmotion, apIconFilename, apSoundName, a_arg5, a_arg6);
		}

		void HideSubtitle()
		{
			using func_t = decltype(&HUDMainMenu::HideSubtitle);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::HideSubtitle };
			func(this);
		}

		void HideMessage()
		{
			using func_t = decltype(&HUDMainMenu::HideMessage);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::HideMessage };
			func(this);
		}

		void ClearAllSubtitlesAndMessages()
		{
			using func_t = decltype(&HUDMainMenu::ClearAllSubtitlesAndMessages);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ClearAllSubtitlesAndMessages };
			func(this);
		}

		static bool SetInfoForRef(TESObjectREFR* apObject, bool abTelekinesis, bool abSameOkay)
		{
			using func_t = decltype(&HUDMainMenu::SetInfoForRef);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetInfoForRef };
			return func(apObject, abTelekinesis, abSameOkay);
		}

		static void RefreshInfoForRef()
		{
			using func_t = decltype(&HUDMainMenu::RefreshInfoForRef);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::RefreshInfoForRef };
			func();
		}

		static void UpdateCompass(Tile* apCompass, Tile* apGeneralIcons, Tile* apMarkerIcons, Tile* apNPCIcons)
		{
			using func_t = decltype(&HUDMainMenu::UpdateCompass);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateCompass };
			func(apCompass, apGeneralIcons, apMarkerIcons, apNPCIcons);
		}

		static void ShowQuestName(TESQuest* apQuest)
		{
			using func_t = decltype(&HUDMainMenu::ShowQuestName);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowQuestName };
			func(apQuest);
		}

		static void ShowQuestObjective(char const* apObjectiveName, bool abCompleted, bool abReminder)
		{
			using func_t = decltype(&HUDMainMenu::ShowQuestObjective);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowQuestObjective };
			func(apObjectiveName, abCompleted, abReminder);
		}

		void UpdateHotkeysWheel()
		{
			using func_t = decltype(&HUDMainMenu::UpdateHotkeysWheel);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateHotkeysWheel };
			func(this);
		}

		static void ResetHUDOpacity(float afHUDOpacity)
		{
			using func_t = decltype(&HUDMainMenu::ResetHUDOpacity);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ResetHUDOpacity };
			func(afHUDOpacity);
		}

		void UpdateBreathMeter()
		{
			using func_t = decltype(&HUDMainMenu::UpdateBreathMeter);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateBreathMeter };
			func(this);
		}

		void UpdateExplosiveIndicator()
		{
			using func_t = decltype(&HUDMainMenu::UpdateExplosiveIndicator);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateExplosiveIndicator };
			func(this);
		}

		void ShowCrippledGuy()
		{
			using func_t = decltype(&HUDMainMenu::ShowCrippledGuy);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowCrippledGuy };
			func(this);
		}

		NiCamera* Create3DCamera()
		{
			using func_t = decltype(&HUDMainMenu::Create3DCamera);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::Create3DCamera };
			return func(this);
		}

		static void Draw3DElements()
		{
			using func_t = decltype(&HUDMainMenu::Draw3DElements);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::Draw3DElements };
			func();
		}

		static void ClearGunScope()
		{
			using func_t = decltype(&HUDMainMenu::ClearGunScope);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ClearGunScope };
			func();
		}

		static void InitGunScope(TESModel* apModelFilename)
		{
			using func_t = decltype(&HUDMainMenu::InitGunScope);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::InitGunScope };
			func(apModelFilename);
		}

		static void SetGunScopeVisible(bool abVisibleFlag)
		{
			using func_t = decltype(&HUDMainMenu::SetGunScopeVisible);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SetGunScopeVisible };
			func(abVisibleFlag);
		}

		static void ShowDDTIcon(bool abArmorPiercing)
		{
			using func_t = decltype(&HUDMainMenu::ShowDDTIcon);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowDDTIcon };
			func(abArmorPiercing);
		}

		static void ShowEnemyDDTIcon(bool abArmorPiercing)
		{
			using func_t = decltype(&HUDMainMenu::ShowEnemyDDTIcon);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShowEnemyDDTIcon };
			func(abArmorPiercing);
		}

		void UpdateShake()
		{
			using func_t = decltype(&HUDMainMenu::UpdateShake);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateShake };
			func(this);
		}

		void ShiftConditionTileOver(std::int32_t aishift)
		{
			using func_t = decltype(&HUDMainMenu::ShiftConditionTileOver);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::ShiftConditionTileOver };
			func(this, aishift);
		}

	protected:
		void UpdateEnemyHealth(Actor* apActor)
		{
			using func_t = decltype(&HUDMainMenu::UpdateEnemyHealth);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateEnemyHealth };
			func(this, apActor);
		}

		bool IsQuestNameShowing()
		{
			using func_t = decltype(&HUDMainMenu::IsQuestNameShowing);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::IsQuestNameShowing };
			return func(this);
		}

		bool AreObjectivesShowing()
		{
			using func_t = decltype(&HUDMainMenu::AreObjectivesShowing);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::AreObjectivesShowing };
			return func(this);
		}

		void UpdateRadiationMeterConditions(float afDrinkinRads, float afStandinRads)
		{
			using func_t = decltype(&HUDMainMenu::UpdateRadiationMeterConditions);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateRadiationMeterConditions };
			func(this, afDrinkinRads, afStandinRads);
		}

		void UpdateRadiationMeter()
		{
			using func_t = decltype(&HUDMainMenu::UpdateRadiationMeter);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateRadiationMeter };
			func(this);
		}

		static void DisplayWaterRadiation(std::int32_t aiRadiationAmount, std::int32_t aiInfoLabel, std::int32_t aiInfoValue)
		{
			using func_t = decltype(&HUDMainMenu::DisplayWaterRadiation);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::DisplayWaterRadiation };
			func(aiRadiationAmount, aiInfoLabel, aiInfoValue);
		}

		static void DisplayWaterHealth(std::int32_t aiHealth, std::int32_t aiInfoLabel, std::int32_t aiInfoValue)
		{
			using func_t = decltype(&HUDMainMenu::DisplayWaterHealth);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::DisplayWaterHealth };
			func(aiHealth, aiInfoLabel, aiInfoValue);
		}

		static float GetCompassAngle(NiPoint3 apPlayerLoc, NiPoint3 a_arg2)
		{
			using func_t = decltype(&HUDMainMenu::GetCompassAngle);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::GetCompassAngle };
			return func(apPlayerLoc, a_arg2);
		}

		void UpdateQuestText()
		{
			using func_t = decltype(&HUDMainMenu::UpdateQuestText);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateQuestText };
			func(this);
		}

		static std::int32_t SortNPCTicks(ActorsNearPlayerData* apFirst, ActorsNearPlayerData* apSecond)
		{
			using func_t = decltype(&HUDMainMenu::SortNPCTicks);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::SortNPCTicks };
			return func(apFirst, apSecond);
		}

		void HandleReminderFade(Tile* apTile)
		{
			using func_t = decltype(&HUDMainMenu::HandleReminderFade);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::HandleReminderFade };
			func(this, apTile);
		}

		void HandleCinematicFade(Tile* apTile)
		{
			using func_t = decltype(&HUDMainMenu::HandleCinematicFade);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::HandleCinematicFade };
			func(this, apTile);
		}

		void UpdateXPMeter()
		{
			using func_t = decltype(&HUDMainMenu::UpdateXPMeter);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::UpdateXPMeter };
			func(this);
		}

		void KillQuestName()
		{
			using func_t = decltype(&HUDMainMenu::KillQuestName);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::KillQuestName };
			func(this);
		}

		void KillQuestObjectives()
		{
			using func_t = decltype(&HUDMainMenu::KillQuestObjectives);
			static REL::Relocation<func_t> func{ Offsets::HUDMainMenu::KillQuestObjectives };
			func(this);
		}

	public:
		// members
		Tile*                                           pTiles[87];                   // 28
		Tile*                                           pActive;                      // 184
		float                                           fSeenLevel;                   // 188
		BSSimpleList<HUDMainMenu::MessageData*>         xMessages;                    // 18C
		std::uint32_t                                   uiMessageStartTime;           // 194
		BSSimpleArray<HUDMainMenu::SubtitleData*, 1024> xSubtitles;                   // 198
		HUDMainMenu::SubtitleData*                      pCurrSubtitle;                // 1A8
		BSSoundHandle                                   GeigerSound;                  // 1AC
		TESObjectREFR*                                  pLastObject;                  // 1B8
		std::int32_t                                    iHUDVisibilityMenuModeFlags;  // 1BC
		std::int32_t                                    iHUDVisibilityUserSettings;   // 1C0
		HUDMainMenu::HUD_MENU_MODE                      eMenuMode;                    // 1C4
		HotKeysWheel                                    HKWheel;                      // 1C8
		bool                                            bScopeVisible;                // 1FC
		std::uint8_t                                    pad1FD[0x3];                  // 1FD
		NiControllerSequence*                           pBreathMeterAnim;             // 200
		bool                                            bXPMeterFinishedMoving;       // 204
		bool                                            bForceObjectiveReminders;     // 205
		std::uint16_t                                   pad206;                       // 206
		std::uint32_t                                   uiKillRegionDisplay;          // 208
		BSSimpleList<TESQuestTarget*>*                  pQuestList;                   // 20C
		std::int32_t                                    iCompassImageWidth;           // 210
		std::int32_t                                    iCompassDisplayWidth;         // 214
		std::int32_t                                    iCompassHalfAngle;            // 218
		Actor*                                          pCurrentEnemy;                // 21C
		bool                                            bWasSneaking;                 // 220
		std::uint8_t                                    pad221[0x3];                  // 221
		BSTimer                                         HudTimer;                     // 224
		std::uint32_t                                   iEnemyHealthTimer;            // 244
		std::uint32_t                                   uiQuestReminderTimer;         // 248
		std::int32_t                                    uiDDTdisplayTimer;            // 24C
		std::int32_t                                    uiEnemyDDTdisplayTimer;       // 250
		bool                                            bKillQuestUpdates;            // 254
		std::uint8_t                                    pad255[0x3];                  // 255
		BSSimpleList<HUDMainMenu::QuestObjective*>      xQuestObjectives;             // 258
		bool                                            bQuestNameShowing;            // 260
		bool                                            bObjectiveNameShowing;        // 261
		std::uint16_t                                   pad262;                       // 262
		BSSimpleList<HUDMainMenu::XPUpdate*>            xXPUpdates;                   // 264
		BSSimpleList<HUDMainMenu::RadiationUpdate*>     xRadiationUpdates;            // 26C
		float                                           fShake;                       // 274
	};
	static_assert(sizeof(HUDMainMenu) == 0x278);
}
