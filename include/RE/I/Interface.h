#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/I/Interface_CONTAINER_MENU_MODE.h"
#include "RE/I/Interface_FADE_STATE.h"
#include "RE/I/Interface_OPEN_REQUEST.h"
#include "RE/I/Interface_TutorialMessageID.h"
#include "RE/I/Interface_enumGamepadButtons.h"
#include "RE/I/Interface_enumMenus.h"
#include "RE/I/Interface_enumTargetType.h"
#include "RE/N/NiPoint3.h"
#include "RE/R/RaceSexMenuContext.h"

namespace RE
{
	class Actor;
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class BSRenderedTexture;
	class FOHUDEffectManager;
	class FOPipboyManager;
	class FORenderedMenu;
	class FOVATSEffectManager;
	class ItemChange;
	class Menu;
	class MobileObject;
	class NiAVObject;
	class NiNode;
	class TESForm;
	class TESModel;
	class TESObjectREFR;
	class TESRegion;
	class TESTopic;
	class Tile;

	class Interface
	{
	public:
		using CONTAINER_MENU_MODE = Interface_CONTAINER_MENU_MODE;
		using FADE_STATE = Interface_FADE_STATE;
		using OPEN_REQUEST = Interface_OPEN_REQUEST;
		using TutorialMessageID = Interface_TutorialMessageID;
		using enumGamepadButtons = Interface_enumGamepadButtons;
		using enumMenus = Interface_enumMenus;
		using enumTargetType = Interface_enumTargetType;

		static void Init(bool abInitialLoad)
		{
			using func_t = decltype(&Interface::Init);
			static REL::Relocation<func_t> func{ Offsets::Interface::Init };
			func(abInitialLoad);
		}

		static void InitSecond()
		{
			using func_t = decltype(&Interface::InitSecond);
			static REL::Relocation<func_t> func{ Offsets::Interface::InitSecond };
			func();
		}

		static void Free()
		{
			using func_t = decltype(&Interface::Free);
			static REL::Relocation<func_t> func{ Offsets::Interface::Free };
			func();
		}

		static bool IsInMenuMode()
		{
			using func_t = decltype(&Interface::IsInMenuMode);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsInMenuMode };
			return func();
		}

		static Interface_enumMenus GetTopMenuID()
		{
			using func_t = decltype(&Interface::GetTopMenuID);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetTopMenuID };
			return func();
		}

		static Interface_enumMenus GetMenuID(std::int32_t aiIndex)
		{
			using func_t = decltype(&Interface::GetMenuID);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMenuID };
			return func(aiIndex);
		}

		static bool IsTopMenuID(Interface_enumMenus aeMenuID)
		{
			using func_t = decltype(&Interface::IsTopMenuID);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsTopMenuID };
			return func(aeMenuID);
		}

		static bool IsTopMenuFadedIn()
		{
			using func_t = decltype(&Interface::IsTopMenuFadedIn);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsTopMenuFadedIn };
			return func();
		}

		static Interface_enumMenus GetMenuModeType()
		{
			using func_t = decltype(&Interface::GetMenuModeType);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMenuModeType };
			return func();
		}

		static bool IsMenuIDVisible(Interface_enumMenus aeMenuID, std::uint32_t abFadeStatesThatCountAsVisible)
		{
			using func_t = decltype(&Interface::IsMenuIDVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsMenuIDVisible };
			return func(aeMenuID, abFadeStatesThatCountAsVisible);
		}

		static void PreIdleStuff()
		{
			using func_t = decltype(&Interface::PreIdleStuff);
			static REL::Relocation<func_t> func{ Offsets::Interface::PreIdleStuff };
			func();
		}

		static void Idle()
		{
			using func_t = decltype(&Interface::Idle);
			static REL::Relocation<func_t> func{ Offsets::Interface::Idle };
			func();
		}

		static void PostIdleStuff()
		{
			using func_t = decltype(&Interface::PostIdleStuff);
			static REL::Relocation<func_t> func{ Offsets::Interface::PostIdleStuff };
			func();
		}

		static void Accumulate()
		{
			using func_t = decltype(&Interface::Accumulate);
			static REL::Relocation<func_t> func{ Offsets::Interface::Accumulate };
			func();
		}

		static void Click(BSRenderedTexture* ap3DTarget, BSRenderedTexture* pMenuFXTexture)
		{
			using func_t = decltype(&Interface::Click);
			static REL::Relocation<func_t> func{ Offsets::Interface::Click };
			func(ap3DTarget, pMenuFXTexture);
		}

		static void SwapBuffers()
		{
			using func_t = decltype(&Interface::SwapBuffers);
			static REL::Relocation<func_t> func{ Offsets::Interface::SwapBuffers };
			func();
		}

		static void IsolateElementsOfMenu(Tile* apMenuTile, bool abGlowOnly, bool abPipBoyOnly, bool abUpdateGlowBranchList)
		{
			using func_t = decltype(&Interface::IsolateElementsOfMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsolateElementsOfMenu };
			func(apMenuTile, abGlowOnly, abPipBoyOnly, abUpdateGlowBranchList);
		}

		static void IsolateMenuElements(bool abGlowOnly, bool abPipBoyOnly)
		{
			using func_t = decltype(&Interface::IsolateMenuElements);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsolateMenuElements };
			func(abGlowOnly, abPipBoyOnly);
		}

		static void RestoreMenuElements()
		{
			using func_t = decltype(&Interface::RestoreMenuElements);
			static REL::Relocation<func_t> func{ Offsets::Interface::RestoreMenuElements };
			func();
		}

		static bool IsDebugTextVisible()
		{
			using func_t = decltype(&Interface::IsDebugTextVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsDebugTextVisible };
			return func();
		}

		static void ToggleDebugTextVisible()
		{
			using func_t = decltype(&Interface::ToggleDebugTextVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::ToggleDebugTextVisible };
			func();
		}

		static void UpdateScreenShape(std::int32_t isizex, std::int32_t isizey)
		{
			using func_t = decltype(&Interface::UpdateScreenShape);
			static REL::Relocation<func_t> func{ Offsets::Interface::UpdateScreenShape };
			func(isizex, isizey);
		}

		static bool GetFullHelp()
		{
			using func_t = decltype(&Interface::GetFullHelp);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetFullHelp };
			return func();
		}

		static TESObjectREFR* GetTargetREFR()
		{
			using func_t = decltype(&Interface::GetTargetREFR);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetTargetREFR };
			return func();
		}

		static TESObjectREFR* GetPickREFR()
		{
			using func_t = decltype(&Interface::GetPickREFR);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetPickREFR };
			return func();
		}

		static void SetPickREFR(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Interface::SetPickREFR);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetPickREFR };
			func(apRef);
		}

		static TESObjectREFR* GetActivateREFR()
		{
			using func_t = decltype(&Interface::GetActivateREFR);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetActivateREFR };
			return func();
		}

		static TESObjectREFR* GetTelekinesisREFR()
		{
			using func_t = decltype(&Interface::GetTelekinesisREFR);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetTelekinesisREFR };
			return func();
		}

		static NiPoint3 GetActivatePickLocation()
		{
			using func_t = decltype(&Interface::GetActivatePickLocation);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetActivatePickLocation };
			return func();
		}

		static void RefreshActivateREFR()
		{
			using func_t = decltype(&Interface::RefreshActivateREFR);
			static REL::Relocation<func_t> func{ Offsets::Interface::RefreshActivateREFR };
			func();
		}

		static void SetPickDistance(std::int32_t aiDistance)
		{
			using func_t = decltype(&Interface::SetPickDistance);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetPickDistance };
			func(aiDistance);
		}

		static void ShowMenus()
		{
			using func_t = decltype(&Interface::ShowMenus);
			static REL::Relocation<func_t> func{ Offsets::Interface::ShowMenus };
			func();
		}

		static void HideMenus()
		{
			using func_t = decltype(&Interface::HideMenus);
			static REL::Relocation<func_t> func{ Offsets::Interface::HideMenus };
			func();
		}

		static void EmergencyCloseAllMenusAndBreakStuff()
		{
			using func_t = decltype(&Interface::EmergencyCloseAllMenusAndBreakStuff);
			static REL::Relocation<func_t> func{ Offsets::Interface::EmergencyCloseAllMenusAndBreakStuff };
			func();
		}

		static void SetMenuSystemVisible(bool abVisible)
		{
			using func_t = decltype(&Interface::SetMenuSystemVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetMenuSystemVisible };
			func(abVisible);
		}

		static void SetCrosshairTargetType(TESObjectREFR* apObject)
		{
			using func_t = decltype(&Interface::SetCrosshairTargetType);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetCrosshairTargetType };
			func(apObject);
		}

		static void SetEnemyActor(Actor* apActor)
		{
			using func_t = decltype(&Interface::SetEnemyActor);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetEnemyActor };
			func(apActor);
		}

		static void ToggleSafeZone(std::int32_t abForceSetTo)
		{
			using func_t = decltype(&Interface::ToggleSafeZone);
			static REL::Relocation<func_t> func{ Offsets::Interface::ToggleSafeZone };
			func(abForceSetTo);
		}

		static void SetFirstChanceTextureRelease()
		{
			using func_t = void(__cdecl*)();
			static REL::Relocation<func_t> func{ Offsets::Interface::SetFirstChanceTextureRelease };
			func();
		}

		static void ForceTextureRelease()
		{
			using func_t = decltype(&Interface::ForceTextureRelease);
			static REL::Relocation<func_t> func{ Offsets::Interface::ForceTextureRelease };
			func();
		}

		static void GetControlPushTextFor(std::int32_t aiIndex, char* axReturn, bool abAddPushText)
		{
			using func_t = decltype(&Interface::GetControlPushTextFor);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetControlPushTextFor };
			func(aiIndex, axReturn, abAddPushText);
		}

		static bool IsConsoleVisible()
		{
			using func_t = decltype(&Interface::IsConsoleVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsConsoleVisible };
			return func();
		}

		static void CloseConsole()
		{
			using func_t = decltype(&Interface::CloseConsole);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseConsole };
			func();
		}

		static void OpenConsole()
		{
			using func_t = decltype(&Interface::OpenConsole);
			static REL::Relocation<func_t> func{ Offsets::Interface::OpenConsole };
			func();
		}

		static bool CreateMessageMenu(char const* aText, char const* apcIconFilename, char const* apcTitle, void* afpResult, std::int32_t aiFirstButtonResult, std::int32_t aiWarningContext, float afBackgroundTextureOpacityOverride, float afMenuWidthOverride, char const* axFirst, ...)
		{
			using func_t = bool(__cdecl*)(char const*, char const*, char const*, void*, std::int32_t, std::int32_t, float, float, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateMessageMenu };
			return func(aText, apcIconFilename, apcTitle, afpResult, aiFirstButtonResult, aiWarningContext, afBackgroundTextureOpacityOverride, afMenuWidthOverride, axFirst);
		}

		static char GetMessageMenuResult()
		{
			using func_t = decltype(&Interface::GetMessageMenuResult);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMessageMenuResult };
			return func();
		}

		static void DisableMessageMenu(bool abDisable)
		{
			using func_t = decltype(&Interface::DisableMessageMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::DisableMessageMenu };
			func(abDisable);
		}

		static void CloseMessageMenu()
		{
			using func_t = decltype(&Interface::CloseMessageMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseMessageMenu };
			func();
		}

		static char CreateModalMessageMenu(char const* aText, std::int32_t aiFirstButtonResult, std::int32_t aiWarningContext, char const* axFirst, ...)
		{
			using func_t = char(__cdecl*)(char const*, std::int32_t, std::int32_t, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateModalMessageMenu };
			return func(aText, aiFirstButtonResult, aiWarningContext, axFirst);
		}

		static Tile* CreateMapMenu()
		{
			using func_t = decltype(&Interface::CreateMapMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateMapMenu };
			return func();
		}

		static void SetMapMenuVisible(bool abVisibility, bool abAnyVisibleState)
		{
			using func_t = decltype(&Interface::SetMapMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetMapMenuVisible };
			func(abVisibility, abAnyVisibleState);
		}

		static bool GetFogOfWarEnabled()
		{
			using func_t = decltype(&Interface::GetFogOfWarEnabled);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetFogOfWarEnabled };
			return func();
		}

		static void SetFogOfWarEnabled(bool abSetTo)
		{
			using func_t = decltype(&Interface::SetFogOfWarEnabled);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetFogOfWarEnabled };
			func(abSetTo);
		}

		static Tile* CreateRepairMenu()
		{
			using func_t = decltype(&Interface::CreateRepairMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateRepairMenu };
			return func();
		}

		static void SetRepairMenuVisible(bool abVisibility, bool abAnyVisibleState, bool abTriggerPipboyEffect)
		{
			using func_t = decltype(&Interface::SetRepairMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetRepairMenuVisible };
			func(abVisibility, abAnyVisibleState, abTriggerPipboyEffect);
		}

		static void CreateRepairServicesMenu(Actor* apVendor)
		{
			using func_t = decltype(&Interface::CreateRepairServicesMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateRepairServicesMenu };
			func(apVendor);
		}

		static Tile* CreateItemModMenu()
		{
			using func_t = decltype(&Interface::CreateItemModMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateItemModMenu };
			return func();
		}

		static void SetItemModMenuVisible(bool abVisibility, bool abAnyVisibleState, bool abTriggerPipboyEffect)
		{
			using func_t = decltype(&Interface::SetItemModMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetItemModMenuVisible };
			func(abVisibility, abAnyVisibleState, abTriggerPipboyEffect);
		}

		static Tile* CreateInventoryMenu()
		{
			using func_t = decltype(&Interface::CreateInventoryMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateInventoryMenu };
			return func();
		}

		static void SetInventoryMenuVisible(bool abVisibility, bool abAnyVisibleState, bool abTriggerPipboyEffect)
		{
			using func_t = decltype(&Interface::SetInventoryMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetInventoryMenuVisible };
			func(abVisibility, abAnyVisibleState, abTriggerPipboyEffect);
		}

		static bool GetInventoryMenuVisible()
		{
			using func_t = decltype(&Interface::GetInventoryMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetInventoryMenuVisible };
			return func();
		}

		static void UpdateInventory()
		{
			using func_t = decltype(&Interface::UpdateInventory);
			static REL::Relocation<func_t> func{ Offsets::Interface::UpdateInventory };
			func();
		}

		static Tile* CreateStatsMenu()
		{
			using func_t = decltype(&Interface::CreateStatsMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateStatsMenu };
			return func();
		}

		static void SetStatsMenuVisible(bool abVisibility, bool abAnyVisibleState)
		{
			using func_t = decltype(&Interface::SetStatsMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetStatsMenuVisible };
			func(abVisibility, abAnyVisibleState);
		}

		static void UpdateActorValue(ActorValue_Index aeWhich)
		{
			using func_t = decltype(&Interface::UpdateActorValue);
			static REL::Relocation<func_t> func{ Offsets::Interface::UpdateActorValue };
			func(aeWhich);
		}

		static void CloseContainer()
		{
			using func_t = decltype(&Interface::CloseContainer);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseContainer };
			func();
		}

		static void CreateBarterMenu(TESObjectREFR* apVendor, std::int32_t aiDiscount)
		{
			using func_t = decltype(&Interface::CreateBarterMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateBarterMenu };
			func(apVendor, aiDiscount);
		}

		static void CreateRecipeMenu(TESObjectREFR* apVendor, TESForm* pCategory)
		{
			using func_t = decltype(&Interface::CreateRecipeMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateRecipeMenu };
			func(apVendor, pCategory);
		}

		static bool ContainerIsRecipe()
		{
			using func_t = decltype(&Interface::ContainerIsRecipe);
			static REL::Relocation<func_t> func{ Offsets::Interface::ContainerIsRecipe };
			return func();
		}

		static bool ContainerIsBarter()
		{
			using func_t = decltype(&Interface::ContainerIsBarter);
			static REL::Relocation<func_t> func{ Offsets::Interface::ContainerIsBarter };
			return func();
		}

		static bool InDialog()
		{
			using func_t = decltype(&Interface::InDialog);
			static REL::Relocation<func_t> func{ Offsets::Interface::InDialog };
			return func();
		}

		static void SetDialogPause(bool abPause)
		{
			using func_t = decltype(&Interface::SetDialogPause);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetDialogPause };
			func(abPause);
		}

		static MobileObject* InDialogWith()
		{
			using func_t = decltype(&Interface::InDialogWith);
			static REL::Relocation<func_t> func{ Offsets::Interface::InDialogWith };
			return func();
		}

		static bool ShowSubtitle(char const* apString, BSSoundHandle aSpeakerLoc, NiPoint3 apTarget, TESObjectREFR* abForceShow, bool a_arg5)
		{
			using func_t = decltype(&Interface::ShowSubtitle);
			static REL::Relocation<func_t> func{ Offsets::Interface::ShowSubtitle };
			return func(apString, aSpeakerLoc, apTarget, abForceShow, a_arg5);
		}

		static bool ShowMessage(char const* apString, std::int32_t aeEmotion, char const* apIconFilename, char const* apSoundName, float afShowSeconds, bool abMoveToHead)
		{
			using func_t = decltype(&Interface::ShowMessage);
			static REL::Relocation<func_t> func{ Offsets::Interface::ShowMessage };
			return func(apString, aeEmotion, apIconFilename, apSoundName, afShowSeconds, abMoveToHead);
		}

		static void ClearAllSubtitlesAndMessages()
		{
			using func_t = decltype(&Interface::ClearAllSubtitlesAndMessages);
			static REL::Relocation<func_t> func{ Offsets::Interface::ClearAllSubtitlesAndMessages };
			func();
		}

		static void CreateMainMenu()
		{
			using func_t = decltype(&Interface::CreateMainMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateMainMenu };
			func();
		}

		static void SetRegionText(TESRegion* apRegion, BSStringT<char> xDisplayText, bool bUpdateLastRegion)
		{
			using func_t = decltype(&Interface::SetRegionText);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetRegionText };
			func(apRegion, xDisplayText, bUpdateLastRegion);
		}

		static void CreateSleepMenu(bool abSleep)
		{
			using func_t = decltype(&Interface::CreateSleepMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateSleepMenu };
			func(abSleep);
		}

		static void CloseSleepMenu()
		{
			using func_t = decltype(&Interface::CloseSleepMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseSleepMenu };
			func();
		}

		static void CreateVATSMenu()
		{
			using func_t = decltype(&Interface::CreateVATSMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateVATSMenu };
			func();
		}

		static bool UpdateSleeping()
		{
			using func_t = decltype(&Interface::UpdateSleeping);
			static REL::Relocation<func_t> func{ Offsets::Interface::UpdateSleeping };
			return func();
		}

		static void CloseVATSMenu()
		{
			using func_t = decltype(&Interface::CloseVATSMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseVATSMenu };
			func();
		}

		static void ForceReload()
		{
			using func_t = decltype(&Interface::ForceReload);
			static REL::Relocation<func_t> func{ Offsets::Interface::ForceReload };
			func();
		}

		static void CreateLockPickMenu(TESObjectREFR* apDoor, std::int32_t aiLockDifficulty, bool abDebugMode)
		{
			using func_t = decltype(&Interface::CreateLockPickMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateLockPickMenu };
			func(apDoor, aiLockDifficulty, abDebugMode);
		}

		static void CreateRaceSexMenu(RaceSexMenuContext aeContext)
		{
			using func_t = decltype(&Interface::CreateRaceSexMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateRaceSexMenu };
			func(aeContext);
		}

		static bool IsDragDropping()
		{
			using func_t = decltype(&Interface::IsDragDropping);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsDragDropping };
			return func();
		}

		static FOVATSEffectManager* GetVATSEffect()
		{
			using func_t = decltype(&Interface::GetVATSEffect);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetVATSEffect };
			return func();
		}

		static FOHUDEffectManager* GetHUDEffects()
		{
			using func_t = decltype(&Interface::GetHUDEffects);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetHUDEffects };
			return func();
		}

		static FOPipboyManager* GetPipboy()
		{
			using func_t = decltype(&Interface::GetPipboy);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetPipboy };
			return func();
		}

		static std::int32_t GetDragDroppingState()
		{
			using func_t = decltype(&Interface::GetDragDroppingState);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetDragDroppingState };
			return func();
		}

		static void SetDragDroppingState(std::int32_t abSetTo)
		{
			using func_t = decltype(&Interface::SetDragDroppingState);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetDragDroppingState };
			func(abSetTo);
		}

		static void ClearReferencePointers(TESObjectREFR* apObject)
		{
			using func_t = decltype(&Interface::ClearReferencePointers);
			static REL::Relocation<func_t> func{ Offsets::Interface::ClearReferencePointers };
			func(apObject);
		}

		static void SetMainMenuDefaults(char aiStatsTab, char aiInventoryTab, char aiMapTab, std::int32_t aiWhichMenu)
		{
			using func_t = decltype(&Interface::SetMainMenuDefaults);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetMainMenuDefaults };
			func(aiStatsTab, aiInventoryTab, aiMapTab, aiWhichMenu);
		}

		static char GetStatsPageNumber()
		{
			using func_t = decltype(&Interface::GetStatsPageNumber);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetStatsPageNumber };
			return func();
		}

		static char GetInventoryPageNumber()
		{
			using func_t = decltype(&Interface::GetInventoryPageNumber);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetInventoryPageNumber };
			return func();
		}

		static char GetMagicPageNumber()
		{
			using func_t = decltype(&Interface::GetMagicPageNumber);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMagicPageNumber };
			return func();
		}

		static char GetMapPageNumber()
		{
			using func_t = decltype(&Interface::GetMapPageNumber);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMapPageNumber };
			return func();
		}

		static std::int32_t GetCurrentMainMenu()
		{
			using func_t = decltype(&Interface::GetCurrentMainMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetCurrentMainMenu };
			return func();
		}

		static void CreateLoadingMenu(TESForm* apLocation, bool abScriptedTrigger)
		{
			using func_t = decltype(&Interface::CreateLoadingMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateLoadingMenu };
			func(apLocation, abScriptedTrigger);
		}

		static void CloseLoadingMenu()
		{
			using func_t = decltype(&Interface::CloseLoadingMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseLoadingMenu };
			func();
		}

		static bool GetLoadingMenuVisible()
		{
			using func_t = decltype(&Interface::GetLoadingMenuVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetLoadingMenuVisible };
			return func();
		}

		static bool IsInGameLoadingMenuOpen()
		{
			using func_t = decltype(&Interface::IsInGameLoadingMenuOpen);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsInGameLoadingMenuOpen };
			return func();
		}

		static void SetSurgeryCursorPos(std::int32_t aiXPos, std::int32_t aiYPos)
		{
			using func_t = decltype(&Interface::SetSurgeryCursorPos);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetSurgeryCursorPos };
			func(aiXPos, aiYPos);
		}

		static void CreateLevelUpMenu()
		{
			using func_t = decltype(&Interface::CreateLevelUpMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateLevelUpMenu };
			func();
		}

		static void CreateCharGenMenu(std::int32_t aiMenuType, std::int32_t aiMaxPoints, bool abOnlyAddValues, bool abShowTaggedSkills)
		{
			using func_t = decltype(&Interface::CreateCharGenMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateCharGenMenu };
			func(aiMenuType, aiMaxPoints, abOnlyAddValues, abShowTaggedSkills);
		}

		static bool SetInfoForRef(TESObjectREFR* apObject, bool abTelekinesis, bool abSameOkay)
		{
			using func_t = decltype(&Interface::SetInfoForRef);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetInfoForRef };
			return func(apObject, abTelekinesis, abSameOkay);
		}

		static void CloseAllSupportMenus(bool abExceptSubtitleMenu)
		{
			using func_t = decltype(&Interface::CloseAllSupportMenus);
			static REL::Relocation<func_t> func{ Offsets::Interface::CloseAllSupportMenus };
			func(abExceptSubtitleMenu);
		}

		static void SaveGame()
		{
			using func_t = void(__cdecl*)();
			static REL::Relocation<func_t> func{ Offsets::Interface::SaveGame };
			func();
		}

		static void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = void(__cdecl*)(BGSSaveGameBuffer*);
			static REL::Relocation<func_t> func{ Offsets::Interface::SaveGame_1 };
			func(apSaveGameBuffer);
		}

		static void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Interface::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::Interface::LoadGame };
			func(apLoadGameBuffer);
		}

		static void FinishLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Interface::FinishLoadGame);
			static REL::Relocation<func_t> func{ Offsets::Interface::FinishLoadGame };
			func(apLoadGameBuffer);
		}

		static void Revert(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Interface::Revert);
			static REL::Relocation<func_t> func{ Offsets::Interface::Revert };
			func(apLoadGameBuffer);
		}

		static Tile* GetMenusRoot()
		{
			using func_t = decltype(&Interface::GetMenusRoot);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMenusRoot };
			return func();
		}

		static NiNode* GetInterfaceRoot()
		{
			using func_t = decltype(&Interface::GetInterfaceRoot);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetInterfaceRoot };
			return func();
		}

		static void AttachDefaultAlphaProperty(NiAVObject* apNode)
		{
			using func_t = decltype(&Interface::AttachDefaultAlphaProperty);
			static REL::Relocation<func_t> func{ Offsets::Interface::AttachDefaultAlphaProperty };
			func(apNode);
		}

		static void SetFirstChanceTextureRelease(bool abSet)
		{
			using func_t = void(__cdecl*)(bool);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetFirstChanceTextureRelease_1 };
			func(abSet);
		}

		static float GetScreenHeight()
		{
			using func_t = decltype(&Interface::GetScreenHeight);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetScreenHeight };
			return func();
		}

		static float GetScreenWidth()
		{
			using func_t = decltype(&Interface::GetScreenWidth);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetScreenWidth };
			return func();
		}

		static float GetRealScreenHeight()
		{
			using func_t = decltype(&Interface::GetRealScreenHeight);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetRealScreenHeight };
			return func();
		}

		static float GetRealScreenWidth()
		{
			using func_t = decltype(&Interface::GetRealScreenWidth);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetRealScreenWidth };
			return func();
		}

		static float GetAspectRatioRatio()
		{
			using func_t = decltype(&Interface::GetAspectRatioRatio);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetAspectRatioRatio };
			return func();
		}

		static float GetRenderedMenuScreenWidth()
		{
			using func_t = decltype(&Interface::GetRenderedMenuScreenWidth);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetRenderedMenuScreenWidth };
			return func();
		}

		static float GetRenderedMenuScreenHeight()
		{
			using func_t = decltype(&Interface::GetRenderedMenuScreenHeight);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetRenderedMenuScreenHeight };
			return func();
		}

		static void PlayMenuSound(std::int32_t aiSoundIndex)
		{
			using func_t = decltype(&Interface::PlayMenuSound);
			static REL::Relocation<func_t> func{ Offsets::Interface::PlayMenuSound };
			func(aiSoundIndex);
		}

		static void NewTimer(void* apPointer, float afLength)
		{
			using func_t = decltype(&Interface::NewTimer);
			static REL::Relocation<func_t> func{ Offsets::Interface::NewTimer };
			func(apPointer, afLength);
		}

		static void UpdateAllTimers()
		{
			using func_t = decltype(&Interface::UpdateAllTimers);
			static REL::Relocation<func_t> func{ Offsets::Interface::UpdateAllTimers };
			func();
		}

		static void ClearTimer(void* apPointer)
		{
			using func_t = decltype(&Interface::ClearTimer);
			static REL::Relocation<func_t> func{ Offsets::Interface::ClearTimer };
			func(apPointer);
		}

		static void AddToEnterStack(std::int32_t aiID, bool abForceRemoval)
		{
			using func_t = decltype(&Interface::AddToEnterStack);
			static REL::Relocation<func_t> func{ Offsets::Interface::AddToEnterStack };
			func(aiID, abForceRemoval);
		}

		static std::int32_t PopFromEnterStack(std::int32_t aiID, bool abForceRemoval)
		{
			using func_t = decltype(&Interface::PopFromEnterStack);
			static REL::Relocation<func_t> func{ Offsets::Interface::PopFromEnterStack };
			return func(aiID, abForceRemoval);
		}

		static void SetCurrentFocusTarget(Tile* apTile)
		{
			using func_t = decltype(&Interface::SetCurrentFocusTarget);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetCurrentFocusTarget };
			func(apTile);
		}

		static void RecursiveFade(NiNode* apNode, float afAmount, float afLastAlpha)
		{
			using func_t = decltype(&Interface::RecursiveFade);
			static REL::Relocation<func_t> func{ Offsets::Interface::RecursiveFade };
			func(apNode, afAmount, afLastAlpha);
		}

		static bool FindTextReplacementString(char const* apString, char* apOutBuffer, std::uint32_t aiBufferSize, bool abAddPushText)
		{
			using func_t = decltype(&Interface::FindTextReplacementString);
			static REL::Relocation<func_t> func{ Offsets::Interface::FindTextReplacementString };
			return func(apString, apOutBuffer, aiBufferSize, abAddPushText);
		}

		static std::int32_t MatchTextReplaceConstantToGameSettings(char const* apString)
		{
			using func_t = decltype(&Interface::MatchTextReplaceConstantToGameSettings);
			static REL::Relocation<func_t> func{ Offsets::Interface::MatchTextReplaceConstantToGameSettings };
			return func(apString);
		}

		static bool TestConstantForGameSettings(char const* apString, char* axStringOut)
		{
			using func_t = decltype(&Interface::TestConstantForGameSettings);
			static REL::Relocation<func_t> func{ Offsets::Interface::TestConstantForGameSettings };
			return func(apString, axStringOut);
		}

		static NiNode* LoadModelFile(char const* apFilename, bool& arbFromModelLoader)
		{
			using func_t = decltype(&Interface::LoadModelFile);
			static REL::Relocation<func_t> func{ Offsets::Interface::LoadModelFile };
			return func(apFilename, arbFromModelLoader);
		}

		static void ClearTempModel()
		{
			using func_t = decltype(&Interface::ClearTempModel);
			static REL::Relocation<func_t> func{ Offsets::Interface::ClearTempModel };
			func();
		}

		static char const* GetMeshesFolder()
		{
			using func_t = decltype(&Interface::GetMeshesFolder);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetMeshesFolder };
			return func();
		}

		static NiNode* CopyOrDeepCopyNode(NiNode* apNode)
		{
			using func_t = decltype(&Interface::CopyOrDeepCopyNode);
			static REL::Relocation<func_t> func{ Offsets::Interface::CopyOrDeepCopyNode };
			return func(apNode);
		}

		static void SetNeedToUpdate(bool abSet)
		{
			using func_t = decltype(&Interface::SetNeedToUpdate);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetNeedToUpdate };
			func(abSet);
		}

		static Menu* CreateMenuByClass(std::int32_t aiMenuClass)
		{
			using func_t = decltype(&Interface::CreateMenuByClass);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateMenuByClass };
			return func(aiMenuClass);
		}

		static bool IsInRenderedMenu()
		{
			using func_t = decltype(&Interface::IsInRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsInRenderedMenu };
			return func();
		}

		static bool IsRenderedMenu(Menu* apMenu)
		{
			using func_t = decltype(&Interface::IsRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsRenderedMenu };
			return func(apMenu);
		}

		static FORenderedMenu* GetCurrentRenderedMenu()
		{
			using func_t = decltype(&Interface::GetCurrentRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::GetCurrentRenderedMenu };
			return func();
		}

		static bool IsCurrentRenderedMenuTopmost()
		{
			using func_t = decltype(&Interface::IsCurrentRenderedMenuTopmost);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsCurrentRenderedMenuTopmost };
			return func();
		}

		static bool IsWideScreen()
		{
			using func_t = decltype(&Interface::IsWideScreen);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsWideScreen };
			return func();
		}

		static float SizeOfAScreenPixelInCrazyAssMenuCoordinates()
		{
			using func_t = decltype(&Interface::SizeOfAScreenPixelInCrazyAssMenuCoordinates);
			static REL::Relocation<func_t> func{ Offsets::Interface::SizeOfAScreenPixelInCrazyAssMenuCoordinates };
			return func();
		}

		static void InitializeTabline(Tile* apTabline, std::int32_t aiStartingID, char const* axFirstText, ...)
		{
			using func_t = void(__cdecl*)(Tile*, std::int32_t, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::Interface::InitializeTabline };
			func(apTabline, aiStartingID, axFirstText);
		}

		static void PopulateItemStatsDisplay(ItemChange* apCurrItem, Tile* apDisplayTile)
		{
			using func_t = decltype(&Interface::PopulateItemStatsDisplay);
			static REL::Relocation<func_t> func{ Offsets::Interface::PopulateItemStatsDisplay };
			func(apCurrItem, apDisplayTile);
		}

		static void QueueMenuCreate(Interface_OPEN_REQUEST aeMenuType, TESObjectREFR* apMenuRef, TESTopic* apGreeting, MobileObject* apSpeakAs, Interface_CONTAINER_MENU_MODE aeContainerMode, bool bModeless)
		{
			using func_t = decltype(&Interface::QueueMenuCreate);
			static REL::Relocation<func_t> func{ Offsets::Interface::QueueMenuCreate };
			func(aeMenuType, apMenuRef, apGreeting, apSpeakAs, aeContainerMode, bModeless);
		}

		static void HandleQueuedMenuOpen()
		{
			using func_t = decltype(&Interface::HandleQueuedMenuOpen);
			static REL::Relocation<func_t> func{ Offsets::Interface::HandleQueuedMenuOpen };
			func();
		}

		static bool IsPipboyOpening()
		{
			using func_t = decltype(&Interface::IsPipboyOpening);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsPipboyOpening };
			return func();
		}

		static bool IsPipboyClosed()
		{
			using func_t = decltype(&Interface::IsPipboyClosed);
			static REL::Relocation<func_t> func{ Offsets::Interface::IsPipboyClosed };
			return func();
		}

		static void InitGunScope(TESModel* apModelFilename)
		{
			using func_t = decltype(&Interface::InitGunScope);
			static REL::Relocation<func_t> func{ Offsets::Interface::InitGunScope };
			func(apModelFilename);
		}

		static void SetGunScopeVisible(bool abVisibleFlag)
		{
			using func_t = decltype(&Interface::SetGunScopeVisible);
			static REL::Relocation<func_t> func{ Offsets::Interface::SetGunScopeVisible };
			func(abVisibleFlag);
		}

		static bool Has360Controller()
		{
			using func_t = decltype(&Interface::Has360Controller);
			static REL::Relocation<func_t> func{ Offsets::Interface::Has360Controller };
			return func();
		}

	protected:
		static Tile* CreateContainerMenu(TESObjectREFR* apContainer, Interface_CONTAINER_MENU_MODE aeMode)
		{
			using func_t = decltype(&Interface::CreateContainerMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateContainerMenu };
			return func(apContainer, aeMode);
		}

		static Tile* CreateDialogMenu(TESObjectREFR* apSpeaker, TESTopic* apGreetTopic, MobileObject* apSpeakeras)
		{
			using func_t = decltype(&Interface::CreateDialogMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateDialogMenu };
			return func(apSpeaker, apGreetTopic, apSpeakeras);
		}

		static bool CreateHackingMenu(TESObjectREFR* apTerminalRef)
		{
			using func_t = decltype(&Interface::CreateHackingMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateHackingMenu };
			return func(apTerminalRef);
		}

		static bool CreateComputersMenu(TESObjectREFR* apTerminalRef)
		{
			using func_t = decltype(&Interface::CreateComputersMenu);
			static REL::Relocation<func_t> func{ Offsets::Interface::CreateComputersMenu };
			return func(apTerminalRef);
		}
	};
}
