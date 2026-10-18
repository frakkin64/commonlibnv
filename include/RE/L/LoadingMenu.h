#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/L/LoadScreenDefaultProperties.h"
#include "RE/M/Menu.h"
#include "RE/M/MiscStatManager_MiscStatID.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class LoadScreenType_Data;
	class NiAVObject;
	class NiTexture;
	class TESForm;
	class TESLoadScreen;
	class Tile;
	class TileShaderProperty;

	class LoadingMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LoadingMenu };
		static constexpr auto VTABLE{ VTABLE::LoadingMenu };

		enum class Flag : std::int32_t
		{
			kLM_INITLOAD_COMPLETE = 0x0,
			kLM_FORWARD_ANIM = 0x1,
			kLM_AUDIO_THREADING = 0x2,
			kLM_RESET_MENU = 0x3,
			kLM_FADE_IN = 0x4,
			kLM_USE_MAINMENU_SCREENS = 0x5,
			kLM_SHOW_PLAYER_TILES = 0x6,
			kLM_NEW_LOADSCREEN_LIST = 0x7,
			kLM_STATIC_MENU = 0x8,
			kLM_WHEEL_ONLY_MODE = 0x9,
			kLM_SCRIPT_OPEN_MODE = 0xA,
		};

		enum class TileIndex : std::int32_t
		{
			kEStatusButton = 0x0,
			kESpecialButton = 0x1,
			kESkillsButton = 0x2,
			kEPerksButton = 0x3,
			kEGeneralButton = 0x4,
			kEStatusRect = 0x5,
			kESpecialRect = 0x6,
			kESkillsRect = 0x7,
			kEGeneralRect = 0x8,
			kEHealingMode = 0x9,
			kEStimpakButton = 0xA,
			kERadAwayButton = 0xB,
			kEHeadImage = 0xC,
			kEHeadPct = 0xD,
			kETorsoImage = 0xE,
			kETorsoPct = 0xF,
			kELeftArmImage = 0x10,
			kELeftArmPct = 0x11,
			kERightArmImage = 0x12,
			kERightArmPct = 0x13,
			kELeftLegImage = 0x14,
			kELeftLegPct = 0x15,
			kERightLegImage = 0x16,
			kERightLegPct = 0x17,
			kEFaceImage = 0x18,
			kEItemIcon = 0x19,
			kEItemDesc = 0x1A,
			kEPlayerName = 0x1B,
			kEConditionButton = 0x1C,
			kERadsButton = 0x1D,
			kEEffectsButton = 0x1E,
			kERadXButton = 0x1F,
			kERadEffects = 0x20,
			kEStatusEffects = 0x21,
			kEPerksRect = 0x22,
			kEKarmaAlignment = 0x23,
			kEKarmaImage = 0x24,
			kEPlayerTitle = 0x25,
			kERadResistLevel = 0x26,
			kETitle = 0x27,
			kELevelInfo = 0x28,
			kEHPInfo = 0x29,
			kEAPInfo = 0x2A,
			kEXPInfo = 0x2B,
			kERadResistLabel = 0x2C,
			kENoEffects = 0x2D,
			kEReputationRect = 0x2E,
			kEReputationIcon = 0x2F,
			kEReputationTitle = 0x30,
			kEGenRepToggleButton = 0x31,
			kEGenRepRect = 0x32,
			kEReputationName = 0x33,
			kESkillBadgeImage = 0x34,
			kEH20Button = 0x35,
			kEH20Effects = 0x36,
			kEFODButton = 0x37,
			kEFODEffects = 0x38,
			kESLPButton = 0x39,
			kESLPEffects = 0x3A,
			kEDrBagButton = 0x3B,
			kNUM_TILES = 0x3C,
		};

		// override (Menu)
		virtual ~LoadingMenu() = default;                                       // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual std::int32_t GetClass() override;                               // 0D

		void InitStatsTilesList()
		{
			using func_t = decltype(&LoadingMenu::InitStatsTilesList);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitStatsTilesList };
			func(this);
		}

		void InitObjectiveTilesList()
		{
			using func_t = decltype(&LoadingMenu::InitObjectiveTilesList);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitObjectiveTilesList };
			func(this);
		}

		void InitXPProgressTilesList()
		{
			using func_t = decltype(&LoadingMenu::InitXPProgressTilesList);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitXPProgressTilesList };
			func(this);
		}

		void InitTipTilesList()
		{
			using func_t = decltype(&LoadingMenu::InitTipTilesList);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitTipTilesList };
			func(this);
		}

		void SetScreenInfo(bool abRefreshCurrent)
		{
			using func_t = decltype(&LoadingMenu::SetScreenInfo);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::SetScreenInfo };
			func(this, abRefreshCurrent);
		}

		void SetNextSlide(TileShaderProperty* apTSP)
		{
			using func_t = decltype(&LoadingMenu::SetNextSlide);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::SetNextSlide };
			func(this, apTSP);
		}

		void MakeLoadScreenList()
		{
			using func_t = decltype(&LoadingMenu::MakeLoadScreenList);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::MakeLoadScreenList };
			func(this);
		}

		bool ForceFinish()
		{
			using func_t = decltype(&LoadingMenu::ForceFinish);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::ForceFinish };
			return func(this);
		}

		void NextSwap()
		{
			using func_t = decltype(&LoadingMenu::NextSwap);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::NextSwap };
			func(this);
		}

		void PrepPlayerTiles()
		{
			using func_t = decltype(&LoadingMenu::PrepPlayerTiles);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::PrepPlayerTiles };
			func(this);
		}

		void ShowPlayerTiles(bool abShow)
		{
			using func_t = decltype(&LoadingMenu::ShowPlayerTiles);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::ShowPlayerTiles };
			func(this, abShow);
		}

		void UpdatePlayerTileAlphas(TESLoadScreen* pLoadScreen, float a_arg2, std::int32_t a_arg3)
		{
			using func_t = decltype(&LoadingMenu::UpdatePlayerTileAlphas);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdatePlayerTileAlphas };
			func(this, pLoadScreen, a_arg2, a_arg3);
		}

		void UpdateStatsTilesAlphas(float a_arg1, std::int32_t a_arg2)
		{
			using func_t = decltype(&LoadingMenu::UpdateStatsTilesAlphas);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateStatsTilesAlphas };
			func(this, a_arg1, a_arg2);
		}

		void UpdateObjectiveTilesAlphas(float a_arg1, std::int32_t a_arg2)
		{
			using func_t = decltype(&LoadingMenu::UpdateObjectiveTilesAlphas);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateObjectiveTilesAlphas };
			func(this, a_arg1, a_arg2);
		}

		void UpdateTipTilesAlphas(float a_arg1, std::int32_t a_arg2)
		{
			using func_t = decltype(&LoadingMenu::UpdateTipTilesAlphas);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateTipTilesAlphas };
			func(this, a_arg1, a_arg2);
		}

		void UpdateXPProgressTilesAlphas(float a_arg1, std::int32_t a_arg2)
		{
			using func_t = decltype(&LoadingMenu::UpdateXPProgressTilesAlphas);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateXPProgressTilesAlphas };
			func(this, a_arg1, a_arg2);
		}

		void UpdatePlayerTileVisibilities(TESLoadScreen* pLoadScreen, bool bVisible)
		{
			using func_t = decltype(&LoadingMenu::UpdatePlayerTileVisibilities);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdatePlayerTileVisibilities };
			func(this, pLoadScreen, bVisible);
		}

		void UpdateStatsTilesVisibilities(bool bVisible)
		{
			using func_t = decltype(&LoadingMenu::UpdateStatsTilesVisibilities);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateStatsTilesVisibilities };
			func(this, bVisible);
		}

		void UpdateObjectiveTilesVisibilities(bool bVisible)
		{
			using func_t = decltype(&LoadingMenu::UpdateObjectiveTilesVisibilities);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateObjectiveTilesVisibilities };
			func(this, bVisible);
		}

		void UpdateTipTilesVisibilities(bool bVisible)
		{
			using func_t = decltype(&LoadingMenu::UpdateTipTilesVisibilities);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateTipTilesVisibilities };
			func(this, bVisible);
		}

		void UpdateXPProgressTilesVisibilities(bool bVisible)
		{
			using func_t = decltype(&LoadingMenu::UpdateXPProgressTilesVisibilities);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateXPProgressTilesVisibilities };
			func(this, bVisible);
		}

		void GetPlayerTileDefaultSettings()
		{
			using func_t = decltype(&LoadingMenu::GetPlayerTileDefaultSettings);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::GetPlayerTileDefaultSettings };
			func(this);
		}

		void CalcLoadScreenTypeTextWindowFaces(LoadScreenType_Data const* apData)
		{
			using func_t = decltype(&LoadingMenu::CalcLoadScreenTypeTextWindowFaces);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::CalcLoadScreenTypeTextWindowFaces };
			func(this, apData);
		}

		void UpdatePlayerTileSettings(TESLoadScreen* pLoadScreen)
		{
			using func_t = decltype(&LoadingMenu::UpdatePlayerTileSettings);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdatePlayerTileSettings };
			func(this, pLoadScreen);
		}

		void InitStatsTilesSettings(LoadScreenType_Data* apData)
		{
			using func_t = decltype(&LoadingMenu::InitStatsTilesSettings);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitStatsTilesSettings };
			func(this, apData);
		}

		void InitObjectiveTilesSettings(LoadScreenType_Data* apData)
		{
			using func_t = decltype(&LoadingMenu::InitObjectiveTilesSettings);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitObjectiveTilesSettings };
			func(this, apData);
		}

		void InitXPProgressTilesSettings(LoadScreenType_Data* apData)
		{
			using func_t = decltype(&LoadingMenu::InitXPProgressTilesSettings);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitXPProgressTilesSettings };
			func(this, apData);
		}

		void InitTipTilesSettings(LoadScreenType_Data* apData)
		{
			using func_t = decltype(&LoadingMenu::InitTipTilesSettings);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::InitTipTilesSettings };
			func(this, apData);
		}

		void HideAllBut(LoadingMenu::TileIndex aeTileIndex, bool abShowPlayerTiles)
		{
			using func_t = decltype(&LoadingMenu::HideAllBut);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::HideAllBut };
			func(this, aeTileIndex, abShowPlayerTiles);
		}

		void FadeIn()
		{
			using func_t = void (LoadingMenu::*)();
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::FadeIn };
			func(this);
		}

		void FadeIn(Tile* apTile, float afPct)
		{
			using func_t = void (LoadingMenu::*)(Tile*, float);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::FadeIn_1 };
			func(this, apTile, afPct);
		}

		void FadeIn3D(NiAVObject* apObject, float afPct)
		{
			using func_t = decltype(&LoadingMenu::FadeIn3D);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::FadeIn3D };
			func(this, apObject, afPct);
		}

		static void SuspendBackgroundThread()
		{
			using func_t = decltype(&LoadingMenu::SuspendBackgroundThread);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::SuspendBackgroundThread };
			func();
		}

		static void ResumeBackgroundThread()
		{
			using func_t = decltype(&LoadingMenu::ResumeBackgroundThread);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::ResumeBackgroundThread };
			func();
		}

		static void ShowChanges()
		{
			using func_t = decltype(&LoadingMenu::ShowChanges);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::ShowChanges };
			func();
		}

		static void SetupForMainMenu(bool abCreate)
		{
			using func_t = decltype(&LoadingMenu::SetupForMainMenu);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::SetupForMainMenu };
			func(abCreate);
		}

		static float GetPlayerLevelProgress()
		{
			using func_t = decltype(&LoadingMenu::GetPlayerLevelProgress);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::GetPlayerLevelProgress };
			return func();
		}

		static void FillDisplayData()
		{
			using func_t = decltype(&LoadingMenu::FillDisplayData);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::FillDisplayData };
			func();
		}

		static void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&LoadingMenu::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::SaveGame };
			func(apSaveGameBuffer);
		}

		static void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&LoadingMenu::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::LoadGame };
			func(apLoadGameBuffer);
		}

	protected:
		void SetFlag(LoadingMenu::Flag aeFlag, bool abOn)
		{
			using func_t = decltype(&LoadingMenu::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::SetFlag };
			func(this, aeFlag, abOn);
		}

		bool GetFlag(LoadingMenu::Flag aeFlag)
		{
			using func_t = decltype(&LoadingMenu::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::GetFlag };
			return func(this, aeFlag);
		}

		LoadingMenu* ctor()
		{
			using func_t = LoadingMenu*(__thiscall*)(LoadingMenu*);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::ctor };
			return func(this);
		}

		void Reset(TESForm* apLocation)
		{
			using func_t = decltype(&LoadingMenu::Reset);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::Reset };
			func(this, apLocation);
		}

		void _Create(TESForm* apLocation)
		{
			using func_t = decltype(&LoadingMenu::_Create);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::_Create };
			func(this, apLocation);
		}

		void Update()
		{
			using func_t = decltype(&LoadingMenu::Update);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::Update };
			func(this);
		}

		void UpdateWheel()
		{
			using func_t = decltype(&LoadingMenu::UpdateWheel);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenu::UpdateWheel };
			func(this);
		}

	public:
		// members
		Tile*                         pTiles[38];                      // 28
		tagRECT                       rLoadScreenTypeTextWindowFaces;  // C0
		NiTPointerList<Tile*>         StatsTilesList;                  // D0
		NiTPointerList<Tile*>         ObjectiveTilesList;              // DC
		NiTPointerList<Tile*>         XPProgressTilesList;             // E8
		NiTPointerList<Tile*>         TipTilesList;                    // F4
		NiTPointerList<Tile*>         TipTilesList02;                  // 100
		MiscStatManager_MiscStatID    eIDOrder[43];                    // 10C
		BSStringT<char>               strBuffer;                       // 1B8
		NiColorA                      SaveBackgroundColor;             // 1C0
		BSSimpleList<TESLoadScreen*>  LoadScreens;                     // 1D0
		BSSimpleList<TESLoadScreen*>* pNextLoadScreen;                 // 1D8
		TESLoadScreen*                pCurrentLoadScreen;              // 1DC
		std::uint32_t                 uiNextBackgroundSwap;            // 1E0
		std::uint32_t                 uiFadeInComplete;                // 1E4
		TESForm*                      pLocation;                       // 1E8
		TileShaderProperty*           pSlide1TSP;                      // 1EC
		TileShaderProperty*           pSlide2TSP;                      // 1F0
		BSSoundHandle                 InitialSlideSound;               // 1F4
		BSSoundHandle                 SlideSound;                      // 200
		NiPointer<NiTexture>          spHoldTexture;                   // 20C
		std::uint16_t                 usCurIndex;                      // 210?
		std::uint16_t                 pad212;                          // 212
		std::uint16_t                 usFlags;                         // 214
		std::uint16_t                 pad216;                          // 216
		LoadScreenDefaultProperties   DefaultTileSettings[38];         // 218
		std::uint32_t                 m_TileCrossFadeStartTime;        // 5A8?
		std::uint32_t                 m_SlideCount;                    // 5AC?
		std::int32_t                  m_DelayedTipMatteUpdate;         // 5B0?
	};
}
