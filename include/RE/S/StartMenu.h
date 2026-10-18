#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"
#include "RE/N/NiPointer.h"
#include "RE/S/StartMenu_Option.h"
#include "RE/S/StartMenu_OptionListBox.h"
#include "RE/S/StartMenu_UserOption.h"

namespace RE
{
	class BGSSaveLoadFileEntry;
	class NiSourceTexture;
	class Tile;

	class StartMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::StartMenu };
		static constexpr auto VTABLE{ VTABLE::StartMenu };

		using Option = StartMenu_Option;
		using OptionListBox = StartMenu_OptionListBox;
		using UserOption = StartMenu_UserOption;

		class IdleTimer;

		enum class Flag : std::int32_t
		{
			kFLAG_INGAME = 0x1,
			kFLAG_OPTIONS_DIRTY = 0x2,
			kFLAG_FORCE_RELOAD = 0x4,
			kFLAG_SAVE_MODE = 0x8,
			kFLAG_FADE_IN = 0x10,
			kFLAG_SAVE_OPTIONS = 0x20,
			kFLAG_RESET_HUD_OPACITY = 0x40,
			kFLAG_DLC_NEEDS_UPDATE = 0x80,
			kFLAG_NEW_DLC_INSTALLED = 0x100,
			kFLAG_SEARCHING_DLC = 0x200,
			kFLAG_DLC_WAIT_MESSAGE = 0x400,
			kFLAG_SYSUTILSAVECOMPLETE = 0x800,
			kFLAG_ACTION_MAPPING = 0x1000,
			kFLAG_DELETE_MODE = 0x2000,
			kFLAG_SAVE_WAIT_MESSAGE = 0x4000,
			kFLAG_SAVE_WAIT_SAVING = 0x8000,
			kFLAG_SHOWING_CREDITS = 0x10000,
			kFLAG_DONT_FORCE_BACK = 0x20000,
			kFLAG_SAVELOAD_BACKOUT = 0x40000,
			kFLAG_IIS_PREFADE = 0x80000,
			kFLAG_LOADING_SAVEGAMES = 0x100000,
			kFLAG_LIVE_MENU = 0x200000,
			kFLAG_RESTART_REQUIRED = 0x400000,
			kFLAG_MOUNT_DLC = 0x800000,
			kFLAG_DLC_CORRUPT_MESSAGE = 0x1000000,
			kFLAG_USER_PRESSED_START = 0x2000000,
			kFLAG_USER_IS_ACTION_MAPPING = 0x4000000,
			kFLAG_MEM_CARD_REMOVED = 0x8000000,
			kFLAG_SAVE_SAVING = 0x10000000,
			kFLAG_MISSING_CONTENT = 0x20000000,
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

		class IdleTimer
		{
		public:
			static StartMenu::IdleTimer* Instance()
			{
				using func_t = decltype(&IdleTimer::Instance);
				static REL::Relocation<func_t> func{ Offsets::StartMenu_IdleTimer::Instance };
				return func();
			}

		public:
			// members
			std::uint32_t uiT0;      // 00?
			std::uint32_t uiPaused;  // 04?
		};

		// override (Menu)
		virtual ~StartMenu() = default;                                                // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoDownClick(std::int32_t aiID, Tile* apTarget) override;          // 02
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual void DoStillDown(std::int32_t aiID, Tile* apTarget) override;          // 08
		virtual void DoIdle() override;                                                // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                               // 0C
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		static bool PauseMenuIsActive()
		{
			using func_t = decltype(&StartMenu::PauseMenuIsActive);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::PauseMenuIsActive };
			return func();
		}

		bool IsFlagSet(StartMenu::Flag aeFlag)
		{
			using func_t = decltype(&StartMenu::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::IsFlagSet };
			return func(this, aeFlag);
		}

		static std::int32_t GetClassStatic()
		{
			using func_t = decltype(&StartMenu::GetClassStatic);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::GetClassStatic };
			return func();
		}

		static bool MainMenuIsActive()
		{
			using func_t = decltype(&StartMenu::MainMenuIsActive);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::MainMenuIsActive };
			return func();
		}

		static bool IsStartMenuSaving()
		{
			using func_t = decltype(&StartMenu::IsStartMenuSaving);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::IsStartMenuSaving };
			return func();
		}

		static bool IsInPreIIS()
		{
			using func_t = decltype(&StartMenu::IsInPreIIS);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::IsInPreIIS };
			return func();
		}

		static bool Create(bool abInGame, bool abForceReload)
		{
			using func_t = decltype(&StartMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::Create };
			return func(abInGame, abForceReload);
		}

		static void CreateMenuElements()
		{
			using func_t = decltype(&StartMenu::CreateMenuElements);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::CreateMenuElements };
			func();
		}

		static void Close(bool abDeleteOnFade)
		{
			using func_t = decltype(&StartMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::Close };
			func(abDeleteOnFade);
		}

		bool WaitingForControlRemapButtonPress()
		{
			using func_t = decltype(&StartMenu::WaitingForControlRemapButtonPress);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::WaitingForControlRemapButtonPress };
			return func(this);
		}

		void UpdateCanLoadStatus()
		{
			using func_t = decltype(&StartMenu::UpdateCanLoadStatus);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::UpdateCanLoadStatus };
			func(this);
		}

		static void ResetToDefaults(Tile* apTile, StartMenu_Option* apOption)
		{
			using func_t = decltype(&StartMenu::ResetToDefaults);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ResetToDefaults };
			func(apTile, apOption);
		}

		static void SetActionForDevice(Tile* apTile, StartMenu_Option* apOption)
		{
			using func_t = decltype(&StartMenu::SetActionForDevice);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetActionForDevice };
			func(apTile, apOption);
		}

		void PopulateControlsListBox()
		{
			using func_t = decltype(&StartMenu::PopulateControlsListBox);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::PopulateControlsListBox };
			func(this);
		}

		static void ChooseCrew()
		{
			using func_t = decltype(&StartMenu::ChooseCrew);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseCrew };
			func();
		}

		static void ChooseLoad()
		{
			using func_t = decltype(&StartMenu::ChooseLoad);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseLoad };
			func();
		}

		static void ChooseSave()
		{
			using func_t = decltype(&StartMenu::ChooseSave);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseSave };
			func();
		}

		static void ChooseSettings()
		{
			using func_t = decltype(&StartMenu::ChooseSettings);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseSettings };
			func();
		}

		static void ChooseHelp()
		{
			using func_t = decltype(&StartMenu::ChooseHelp);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseHelp };
			func();
		}

		static void ChooseQuit()
		{
			using func_t = decltype(&StartMenu::ChooseQuit);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseQuit };
			func();
		}

		static void ChooseMainMenu()
		{
			using func_t = decltype(&StartMenu::ChooseMainMenu);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseMainMenu };
			func();
		}

		static void ChooseExitGame()
		{
			using func_t = decltype(&StartMenu::ChooseExitGame);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseExitGame };
			func();
		}

		static void ChooseUserAction()
		{
			using func_t = decltype(&StartMenu::ChooseUserAction);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseUserAction };
			func();
		}

		static void ChooseDisplay()
		{
			using func_t = decltype(&StartMenu::ChooseDisplay);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseDisplay };
			func();
		}

		static void ChooseControls()
		{
			using func_t = decltype(&StartMenu::ChooseControls);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseControls };
			func();
		}

		static void ChooseBack()
		{
			using func_t = decltype(&StartMenu::ChooseBack);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ChooseBack };
			func();
		}

		static void SetKillCam(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetKillCam);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetKillCam };
			func(apUOpt);
		}

		static void SetHardcore(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetHardcore);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetHardcore };
			func(apUOpt);
		}

		static void SetHUDOpacity(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetHUDOpacity);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetHUDOpacity };
			func(apUOpt);
		}

		static void SetHUDColor(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetHUDColor);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetHUDColor };
			func(apUOpt);
		}

		static void SetPipboyColor(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetPipboyColor);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetPipboyColor };
			func(apUOpt);
		}

		static void SetBrightness(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetBrightness);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetBrightness };
			func(apUOpt);
		}

		static void SetMasterVol(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetMasterVol);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetMasterVol };
			func(apUOpt);
		}

		static void SetFootstepVol(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetFootstepVol);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetFootstepVol };
			func(apUOpt);
		}

		static void SetMusicVol(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetMusicVol);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetMusicVol };
			func(apUOpt);
		}

		static void SetVoiceVol(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetVoiceVol);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetVoiceVol };
			func(apUOpt);
		}

		static void SetFXVol(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetFXVol);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetFXVol };
			func(apUOpt);
		}

		static void SetRadioVol(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetRadioVol);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetRadioVol };
			func(apUOpt);
		}

		static void SetXSensitivity(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetXSensitivity);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetXSensitivity };
			func(apUOpt);
		}

		static void SetRumble(StartMenu_UserOption* apUOpt)
		{
			using func_t = decltype(&StartMenu::SetRumble);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetRumble };
			func(apUOpt);
		}

		static void ConfirmContinue()
		{
			using func_t = decltype(&StartMenu::ConfirmContinue);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ConfirmContinue };
			func();
		}

		static void ConfirmNewGame()
		{
			using func_t = decltype(&StartMenu::ConfirmNewGame);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ConfirmNewGame };
			func();
		}

		static void ConfirmLoadGame()
		{
			using func_t = decltype(&StartMenu::ConfirmLoadGame);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ConfirmLoadGame };
			func();
		}

		static void ConfirmDeleteGm()
		{
			using func_t = decltype(&StartMenu::ConfirmDeleteGm);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ConfirmDeleteGm };
			func();
		}

		void InitializeUserOptions()
		{
			using func_t = decltype(&StartMenu::InitializeUserOptions);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::InitializeUserOptions };
			func(this);
		}

		void PrepSaveLoad()
		{
			using func_t = decltype(&StartMenu::PrepSaveLoad);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::PrepSaveLoad };
			func(this);
		}

		void FinishPrepSaveLoad()
		{
			using func_t = decltype(&StartMenu::FinishPrepSaveLoad);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::FinishPrepSaveLoad };
			func(this);
		}

		void ConfirmSaveLoad()
		{
			using func_t = decltype(&StartMenu::ConfirmSaveLoad);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ConfirmSaveLoad };
			func(this);
		}

		void PopulateOptionsListBox(std::uint32_t aiModes)
		{
			using func_t = decltype(&StartMenu::PopulateOptionsListBox);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::PopulateOptionsListBox };
			func(this, aiModes);
		}

		void PopulateConfirmationListBox(std::uint32_t aiModes, std::uint8_t aucFlags)
		{
			using func_t = void (StartMenu::*)(std::uint32_t, std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::PopulateConfirmationListBox };
			func(this, aiModes, aucFlags);
		}

		void PopulateConfirmationListBox(std::uint32_t aiModes, std::int32_t aiRealX, std::int32_t aiRealY, std::uint32_t aiWidth, bool abShowWarning)
		{
			using func_t = void (StartMenu::*)(std::uint32_t, std::int32_t, std::int32_t, std::uint32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::PopulateConfirmationListBox_1 };
			func(this, aiModes, aiRealX, aiRealY, aiWidth, abShowWarning);
		}

		void ShowDLCList()
		{
			using func_t = decltype(&StartMenu::ShowDLCList);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ShowDLCList };
			func(this);
		}

		void DisplayOption(StartMenu_UserOption* apOption, Tile* apTile)
		{
			using func_t = decltype(&StartMenu::DisplayOption);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::DisplayOption };
			func(this, apOption, apTile);
		}

		void UpdateHighlightedSaveGameInfo()
		{
			using func_t = decltype(&StartMenu::UpdateHighlightedSaveGameInfo);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::UpdateHighlightedSaveGameInfo };
			func(this);
		}

		bool SetSaveGameScreenshot(BGSSaveLoadFileEntry* apSaveGame)
		{
			using func_t = decltype(&StartMenu::SetSaveGameScreenshot);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetSaveGameScreenshot };
			return func(this, apSaveGame);
		}

		bool ActionMappingIdle()
		{
			using func_t = decltype(&StartMenu::ActionMappingIdle);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ActionMappingIdle };
			return func(this);
		}

		bool MainMenuIdle()
		{
			using func_t = decltype(&StartMenu::MainMenuIdle);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::MainMenuIdle };
			return func(this);
		}

		bool SaveLoadIdle()
		{
			using func_t = decltype(&StartMenu::SaveLoadIdle);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SaveLoadIdle };
			return func(this);
		}

		static void FailedSaveCallbackFunction()
		{
			using func_t = decltype(&StartMenu::FailedSaveCallbackFunction);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::FailedSaveCallbackFunction };
			func();
		}

		void HideOptionsContainer()
		{
			using func_t = decltype(&StartMenu::HideOptionsContainer);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::HideOptionsContainer };
			func(this);
		}

		void Fade(StartMenu::TileIndex aeIndex, bool abFadeIn, std::int32_t aiTrait, float afFadeTime)
		{
			using func_t = decltype(&StartMenu::Fade);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::Fade };
			func(this, aeIndex, abFadeIn, aiTrait, afFadeTime);
		}

		void ReturnToSaveLoad()
		{
			using func_t = decltype(&StartMenu::ReturnToSaveLoad);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ReturnToSaveLoad };
			func(this);
		}

		static void InitializeSaveLoadListItem(Tile* apTile, BGSSaveLoadFileEntry* apSaveGame)
		{
			using func_t = decltype(&StartMenu::InitializeSaveLoadListItem);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::InitializeSaveLoadListItem };
			func(apTile, apSaveGame);
		}

		static void LoadDownloadedContent()
		{
			using func_t = decltype(&StartMenu::LoadDownloadedContent);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::LoadDownloadedContent };
			func();
		}

	protected:
		void SetFlag(StartMenu::Flag aeFlag, bool abOn)
		{
			using func_t = decltype(&StartMenu::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SetFlag };
			func(this, aeFlag, abOn);
		}

		StartMenu* ctor()
		{
			using func_t = StartMenu*(__thiscall*)(StartMenu*);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::ctor };
			return func(this);
		}

		void _Create(bool abInGame, bool abForceReload)
		{
			using func_t = decltype(&StartMenu::_Create);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::_Create };
			func(this, abInGame, abForceReload);
		}

		static void MountDLCCallback(std::uint32_t which, std::uint32_t last, bool valid, void const* package)
		{
			using func_t = decltype(&StartMenu::MountDLCCallback);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::MountDLCCallback };
			func(which, last, valid, package);
		}

		void _UpdateProfileSpecificData()
		{
			using func_t = decltype(&StartMenu::_UpdateProfileSpecificData);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::_UpdateProfileSpecificData };
			func(this);
		}

		void _BackOutToMainListbox()
		{
			using func_t = decltype(&StartMenu::_BackOutToMainListbox);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::_BackOutToMainListbox };
			func(this);
		}

		void _EndCredits()
		{
			using func_t = decltype(&StartMenu::_EndCredits);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::_EndCredits };
			func(this);
		}

		static void SaveSettings()
		{
			using func_t = decltype(&StartMenu::SaveSettings);
			static REL::Relocation<func_t> func{ Offsets::StartMenu::SaveSettings };
			func();
		}

	public:
		// members
		Tile*                          pTiles[23];          // 28
		StartMenu_OptionListBox        lbMain;              // 84
		StartMenu_OptionListBox        lbSettings;          // B4
		StartMenu_OptionListBox        lbConfirm;           // E4
		StartMenu_OptionListBox        lbOptions;           // 114
		ListBox<std::int32_t>          lbDownloads;         // 144
		ListBox<BGSSaveLoadFileEntry*> lbSaveLoad;          // 174
		StartMenu_UserOption*          pDirtyOption;        // 1A4
		std::uint32_t                  uiFlags;             // 1A8
		float                          fSaveLoadThreshold;  // 1AC
		BGSSaveLoadFileEntry*          pSaveGame;           // 1B0
		StartMenu_UserOption*          pBrightnessOption;   // 1B4
		NiPointer<NiSourceTexture>     spAlphaMap;          // 1B8
		Tile*                          pDownloadsOption;    // 1BC
		Tile*                          pLoadOption;         // 1C0
		Tile*                          pContinueOption;     // 1C4
		const std::uint32_t            ENABLED_TRAIT;       // 1C8
	};
}
