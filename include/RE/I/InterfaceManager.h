#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/F/FOHUDEffectManager.h"
#include "RE/F/FOVATSEffectManager.h"
#include "RE/I/InterfaceManager_TutorialManager.h"
#include "RE/I/Interface_enumGamepadButtons.h"
#include "RE/I/Interface_enumMenus.h"
#include "RE/K/KEY_EVENT_TYPE.h"
#include "RE/M/MENU_SOUNDS.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSCullingProcess;
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class FOPipboyManager;
	class FORenderedMenu;
	class ItemChange;
	class Menu;
	class MobileObject;
	class NiAVObject;
	class NiAlphaProperty;
	class NiDirectionalLight;
	class NiNode;
	class SceneGraph;
	class ShadowSceneNode;
	class TESImageSpaceModifier;
	class TESObjectREFR;
	class Tile;
	class TileImage;
	class ViewCaster;

	class InterfaceManager
	{
	public:
		using TutorialManager = InterfaceManager_TutorialManager;

		class Timer;

		enum class PIPBOY_STATE : std::int32_t
		{
			kPS_CLOSED = 0x0,
			kPS_OPENING_SETUP = 0x1,
			kPS_OPENING = 0x2,
			kPS_OPEN = 0x3,
			kPS_CLOSING_SETUP = 0x4,
			kPS_CLOSING = 0x5,
		};

		enum class eMenuModeType : std::int32_t
		{
			kEMenuModeDisabled = 0x0,
			kEMenuModeOff = 0x1,
			kEMenuModeOn = 0x2,
			kEMenuModeEntering = 0x3,
			kEMenuModeLeaving = 0x4,
			kEMenuModeFirstPass = 0x5,
		};

		class Timer
		{
		public:
			// members
			std::uint8_t             pad00[0x8];  // 00
			void*                    pIndex;      // 08
			float                    fElapsed;    // 0C?
			float                    fEnd;        // 10?
			InterfaceManager::Timer* pPrev;       // 14?
			InterfaceManager::Timer* pNext;       // 18?
		};

		[[nodiscard]] static InterfaceManager* GetSingleton() noexcept
		{
			static REL::Relocation<InterfaceManager**> singleton{ Offsets::InterfaceManager::pInstance };
			return *singleton;
		}

		static InterfaceManager* Instance()
		{
			using func_t = decltype(&InterfaceManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Instance };
			return func();
		}

		bool IsInMenuMode()
		{
			using func_t = decltype(&InterfaceManager::IsInMenuMode);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::IsInMenuMode };
			return func(this);
		}

		FOPipboyManager* GetPipboy()
		{
			using func_t = decltype(&InterfaceManager::GetPipboy);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetPipboy };
			return func(this);
		}

		static float GetRealScreenHeight()
		{
			using func_t = decltype(&InterfaceManager::GetRealScreenHeight);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetRealScreenHeight };
			return func();
		}

		static float GetRealScreenWidth()
		{
			using func_t = decltype(&InterfaceManager::GetRealScreenWidth);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetRealScreenWidth };
			return func();
		}

		bool IsInRenderedMenu()
		{
			using func_t = decltype(&InterfaceManager::IsInRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::IsInRenderedMenu };
			return func(this);
		}

		FORenderedMenu* GetCurrentRenderedMenu()
		{
			using func_t = decltype(&InterfaceManager::GetCurrentRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetCurrentRenderedMenu };
			return func(this);
		}

		static void Initialize(std::uint32_t istage, bool abInitialLoad)
		{
			using func_t = decltype(&InterfaceManager::Initialize);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Initialize };
			func(istage, abInitialLoad);
		}

		InterfaceManager* ctor()
		{
			using func_t = InterfaceManager*(__thiscall*)(InterfaceManager*);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(InterfaceManager*);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::dtor };
			func(this);
		}

		void SetStatsPageNumber(char acTab)
		{
			using func_t = decltype(&InterfaceManager::SetStatsPageNumber);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetStatsPageNumber };
			func(this, acTab);
		}

		void SetInventoryPageNumber(char acTab)
		{
			using func_t = decltype(&InterfaceManager::SetInventoryPageNumber);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetInventoryPageNumber };
			func(this, acTab);
		}

		void SetMapPageNumber(char acTab)
		{
			using func_t = decltype(&InterfaceManager::SetMapPageNumber);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetMapPageNumber };
			func(this, acTab);
		}

		void PreIdleStuff()
		{
			using func_t = decltype(&InterfaceManager::PreIdleStuff);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PreIdleStuff };
			func(this);
		}

		void RefreshActivateREFR()
		{
			using func_t = decltype(&InterfaceManager::RefreshActivateREFR);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::RefreshActivateREFR };
			func(this);
		}

		void Idle()
		{
			using func_t = decltype(&InterfaceManager::Idle);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Idle };
			func(this);
		}

		std::int32_t GetMouseWheel()
		{
			using func_t = decltype(&InterfaceManager::GetMouseWheel);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetMouseWheel };
			return func(this);
		}

		static float GetScreenAspect()
		{
			using func_t = decltype(&InterfaceManager::GetScreenAspect);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetScreenAspect };
			return func();
		}

		void UpdatePipboy()
		{
			using func_t = decltype(&InterfaceManager::UpdatePipboy);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::UpdatePipboy };
			func(this);
		}

		void OpenPipboy(void* apCallback, Interface_enumMenus aeMenuToOpen)
		{
			using func_t = decltype(&InterfaceManager::OpenPipboy);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::OpenPipboy };
			func(this, apCallback, aeMenuToOpen);
		}

		void DoGamepadEvent(Interface_enumGamepadButtons aiButton)
		{
			using func_t = decltype(&InterfaceManager::DoGamepadEvent);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::DoGamepadEvent };
			func(this, aiButton);
		}

		Interface_enumGamepadButtons GetTopGamepadButton(bool abRepeatVertical, bool abRepeatHorizontal, bool& abIsUpEvent)
		{
			using func_t = decltype(&InterfaceManager::GetTopGamepadButton);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetTopGamepadButton };
			return func(this, abRepeatVertical, abRepeatHorizontal, abIsUpEvent);
		}

		void DisplayCurrentPickRef()
		{
			using func_t = decltype(&InterfaceManager::DisplayCurrentPickRef);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::DisplayCurrentPickRef };
			func(this);
		}

		void UpdateCursor()
		{
			using func_t = decltype(&InterfaceManager::UpdateCursor);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::UpdateCursor };
			func(this);
		}

		void PostIdleStuff()
		{
			using func_t = decltype(&InterfaceManager::PostIdleStuff);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PostIdleStuff };
			func(this);
		}

		void RecursiveFade(NiAVObject* apObject, float afAmount, float afLastAlpha)
		{
			using func_t = decltype(&InterfaceManager::RecursiveFade);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::RecursiveFade };
			func(this, apObject, afAmount, afLastAlpha);
		}

		Tile* PickMenus(bool abExactTargetOnly)
		{
			using func_t = decltype(&InterfaceManager::PickMenus);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PickMenus };
			return func(this, abExactTargetOnly);
		}

		void LastMinuteUpdate()
		{
			using func_t = decltype(&InterfaceManager::LastMinuteUpdate);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::LastMinuteUpdate };
			func(this);
		}

		void UpdateTileModels()
		{
			using func_t = decltype(&InterfaceManager::UpdateTileModels);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::UpdateTileModels };
			func(this);
		}

		void Accumulate()
		{
			using func_t = decltype(&InterfaceManager::Accumulate);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Accumulate };
			func(this);
		}

		void Click(BSRenderedTexture* ap3DTarget, BSRenderedTexture* apMenuFXTexture)
		{
			using func_t = decltype(&InterfaceManager::Click);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Click };
			func(this, ap3DTarget, apMenuFXTexture);
		}

		void EmergencyCloseAllMenusAndBreakStuff()
		{
			using func_t = decltype(&InterfaceManager::EmergencyCloseAllMenusAndBreakStuff);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::EmergencyCloseAllMenusAndBreakStuff };
			func(this);
		}

		void SetTargetREFR(TESObjectREFR* apRef)
		{
			using func_t = decltype(&InterfaceManager::SetTargetREFR);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetTargetREFR };
			func(this, apRef);
		}

		std::int32_t AddToEnterStack(std::int32_t aiID)
		{
			using func_t = decltype(&InterfaceManager::AddToEnterStack);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::AddToEnterStack };
			return func(this, aiID);
		}

		std::int32_t GetEnterStackTop()
		{
			using func_t = decltype(&InterfaceManager::GetEnterStackTop);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetEnterStackTop };
			return func(this);
		}

		std::int32_t GetEnterStack(std::int32_t aiIndex)
		{
			using func_t = decltype(&InterfaceManager::GetEnterStack);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetEnterStack };
			return func(this, aiIndex);
		}

		std::int32_t PopFromEnterStack(std::int32_t aiID, bool abForceRemoval)
		{
			using func_t = decltype(&InterfaceManager::PopFromEnterStack);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PopFromEnterStack };
			return func(this, aiID, abForceRemoval);
		}

		void SetCursorPos(float afX, float afY)
		{
			using func_t = decltype(&InterfaceManager::SetCursorPos);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetCursorPos };
			func(this, afX, afY);
		}

		std::int32_t GetChar(KEY_EVENT_TYPE aiEventType, std::int32_t aikey)
		{
			using func_t = decltype(&InterfaceManager::GetChar);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetChar };
			return func(this, aiEventType, aikey);
		}

		void ClearOverTileTarget(bool abDoLeave)
		{
			using func_t = decltype(&InterfaceManager::ClearOverTileTarget);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::ClearOverTileTarget };
			func(this, abDoLeave);
		}

		void SetCurrentFocusTarget(Tile* apTarget, std::int32_t aiType, bool abPlaySounds)
		{
			using func_t = decltype(&InterfaceManager::SetCurrentFocusTarget);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetCurrentFocusTarget };
			func(this, apTarget, aiType, abPlaySounds);
		}

		void GetDefaultFocus()
		{
			using func_t = decltype(&InterfaceManager::GetDefaultFocus);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetDefaultFocus };
			func(this);
		}

		static float GetScreenWidth()
		{
			using func_t = decltype(&InterfaceManager::GetScreenWidth);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetScreenWidth };
			return func();
		}

		static float GetScreenHeight()
		{
			using func_t = decltype(&InterfaceManager::GetScreenHeight);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetScreenHeight };
			return func();
		}

		void UpdateScreenShape(std::int32_t isizex, std::int32_t isizey)
		{
			using func_t = decltype(&InterfaceManager::UpdateScreenShape);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::UpdateScreenShape };
			func(this, isizex, isizey);
		}

		void ForceTextureRelease()
		{
			using func_t = decltype(&InterfaceManager::ForceTextureRelease);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::ForceTextureRelease };
			func(this);
		}

		Tile* ScanForMaxFocus(std::int32_t& aiMaxFocus, Tile* apTarget)
		{
			using func_t = decltype(&InterfaceManager::ScanForMaxFocus);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::ScanForMaxFocus };
			return func(this, aiMaxFocus, apTarget);
		}

		void UpdateAllTimers()
		{
			using func_t = decltype(&InterfaceManager::UpdateAllTimers);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::UpdateAllTimers };
			func(this);
		}

		static void NewTimer(void* apIndex, float afSecs)
		{
			using func_t = decltype(&InterfaceManager::NewTimer);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::NewTimer };
			func(apIndex, afSecs);
		}

		static void ClearTimer(void* apIndex)
		{
			using func_t = decltype(&InterfaceManager::ClearTimer);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::ClearTimer };
			func(apIndex);
		}

		static float GetTimerPercent(void* apIndex)
		{
			using func_t = decltype(&InterfaceManager::GetTimerPercent);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetTimerPercent };
			return func(apIndex);
		}

		bool TileIsAcceptingEvents(Tile* pTile)
		{
			using func_t = decltype(&InterfaceManager::TileIsAcceptingEvents);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::TileIsAcceptingEvents };
			return func(this, pTile);
		}

		static void PlayMenuSound(MENU_SOUNDS aeMenuSound)
		{
			using func_t = decltype(&InterfaceManager::PlayMenuSound);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PlayMenuSound };
			func(aeMenuSound);
		}

		void PreLoadMenus()
		{
			using func_t = decltype(&InterfaceManager::PreLoadMenus);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PreLoadMenus };
			func(this);
		}

		void PreLoadMainMenus()
		{
			using func_t = decltype(&InterfaceManager::PreLoadMainMenus);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::PreLoadMainMenus };
			func(this);
		}

		static void SetCursorAlpha(std::int32_t iAlpha)
		{
			using func_t = decltype(&InterfaceManager::SetCursorAlpha);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetCursorAlpha };
			func(iAlpha);
		}

		static float GetScreenSafeX()
		{
			using func_t = decltype(&InterfaceManager::GetScreenSafeX);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetScreenSafeX };
			return func();
		}

		static float GetScreenSafeY()
		{
			using func_t = decltype(&InterfaceManager::GetScreenSafeY);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetScreenSafeY };
			return func();
		}

		static float GetMenuHeight()
		{
			using func_t = decltype(&InterfaceManager::GetMenuHeight);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetMenuHeight };
			return func();
		}

		static bool IsInPipboyMenu()
		{
			using func_t = decltype(&InterfaceManager::IsInPipboyMenu);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::IsInPipboyMenu };
			return func();
		}

		static bool IsPipboyMenuTopmost()
		{
			using func_t = decltype(&InterfaceManager::IsPipboyMenuTopmost);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::IsPipboyMenuTopmost };
			return func();
		}

		static bool IsCurrentRenderedMenuTopmost()
		{
			using func_t = decltype(&InterfaceManager::IsCurrentRenderedMenuTopmost);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::IsCurrentRenderedMenuTopmost };
			return func();
		}

		static void ClearMenuButton(Interface_enumGamepadButtons eAction)
		{
			using func_t = decltype(&InterfaceManager::ClearMenuButton);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::ClearMenuButton };
			func(eAction);
		}

		void DoWheelMove(Menu* apMenu, std::int32_t aiID, Tile* apTarget)
		{
			using func_t = decltype(&InterfaceManager::DoWheelMove);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::DoWheelMove };
			func(this, apMenu, aiID, apTarget);
		}

		void EnterRenderedMenu(FORenderedMenu* apRenderedMenu)
		{
			using func_t = decltype(&InterfaceManager::EnterRenderedMenu);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::EnterRenderedMenu };
			func(this, apRenderedMenu);
		}

		void SetLockpickControlsDisable(bool abDisable)
		{
			using func_t = decltype(&InterfaceManager::SetLockpickControlsDisable);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::SetLockpickControlsDisable };
			func(this, abDisable);
		}

		TESImageSpaceModifier* GetCurrentImagespaceMod()
		{
			using func_t = decltype(&InterfaceManager::GetCurrentImagespaceMod);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetCurrentImagespaceMod };
			return func(this);
		}

		static void UpdatePipBoyInventoryEffects(Tile* pTileFade1, Tile* pTileFade2, Tile* pTilePulseSTR, ItemChange* pItemPulseSTRREQ, bool abSkill)
		{
			using func_t = decltype(&InterfaceManager::UpdatePipBoyInventoryEffects);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::UpdatePipBoyInventoryEffects };
			func(pTileFade1, pTileFade2, pTilePulseSTR, pItemPulseSTRREQ, abSkill);
		}

		std::int32_t GetCursorY()
		{
			using func_t = decltype(&InterfaceManager::GetCursorY);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetCursorY };
			return func(this);
		}

		std::int32_t GetCursorX()
		{
			using func_t = decltype(&InterfaceManager::GetCursorX);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetCursorX };
			return func(this);
		}

		bool GetMouseVisible()
		{
			using func_t = decltype(&InterfaceManager::GetMouseVisible);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetMouseVisible };
			return func(this);
		}

		float GetPipboyMouseX()
		{
			using func_t = decltype(&InterfaceManager::GetPipboyMouseX);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetPipboyMouseX };
			return func(this);
		}

		float GetPipboyMouseY()
		{
			using func_t = decltype(&InterfaceManager::GetPipboyMouseY);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::GetPipboyMouseY };
			return func(this);
		}

		BSShaderAccumulator* Get3dAccumulator()
		{
			using func_t = decltype(&InterfaceManager::Get3dAccumulator);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Get3dAccumulator };
			return func(this);
		}

		bool IsDoneSecondInit()
		{
			using func_t = decltype(&InterfaceManager::IsDoneSecondInit);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::IsDoneSecondInit };
			return func(this);
		}

	private:
		void Init(bool abInitialLoad)
		{
			using func_t = decltype(&InterfaceManager::Init);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::Init };
			func(this, abInitialLoad);
		}

		void InitSecond()
		{
			using func_t = decltype(&InterfaceManager::InitSecond);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::InitSecond };
			func(this);
		}

		SceneGraph* CreateSceneGraph(SceneGraph* apGraph, char const* apName, bool abIsBuffer)
		{
			using func_t = decltype(&InterfaceManager::CreateSceneGraph);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::CreateSceneGraph };
			return func(this, apGraph, apName, abIsBuffer);
		}

		void DrawInterface_Screen(BSCullingProcess* apCuller, bool abPipboyVisible)
		{
			using func_t = decltype(&InterfaceManager::DrawInterface_Screen);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::DrawInterface_Screen };
			func(this, apCuller, abPipboyVisible);
		}

		void FreeTimerList()
		{
			using func_t = decltype(&InterfaceManager::FreeTimerList);
			static REL::Relocation<func_t> func{ Offsets::InterfaceManager::FreeTimerList };
			func(this);
		}

	public:
		// members
		// not placed: bLockpickControlsDisable(absent)
		bool                             bFirstInit;                 // 00
		bool                             bSecondInit;                // 01
		std::uint16_t                    pad02;                      // 02
		NiPointer<SceneGraph>            spSceneGraph;               // 04
		NiPointer<SceneGraph>            sp3DSceneGraph;             // 08
		InterfaceManager::eMenuModeType  cMenuMode;                  // 0C
		bool                             bExternalForcedMenuMode;    // 10
		bool                             bLockMenuModeForFade;       // 11
		char                             cStatsPageNumber;           // 12
		char                             cInventoryPageNumber;       // 13
		char                             cMagicPageNumber;           // 14
		char                             cMapPageNumber;             // 15
		std::uint16_t                    pad16;                      // 16
		std::int32_t                     iPickDistance;              // 18
		std::int32_t                     iTelekinesisDistance;       // 1C
		std::uint8_t                     iSoundPauses;               // 20
		std::uint8_t                     iVoicePauses;               // 21
		std::uint16_t                    pad22;                      // 22
		NiDirectionalLight*              pPlayerLight;               // 24
		TileImage*                       pCursor;                    // 28
		NiPoint3                         sCursorPos;                 // 2C
		NiPoint3                         sRealCursorPos;             // 38
		float                            fMouseWheel;                // 44
		float                            fMouseHeldTime;             // 48
		Tile*                            pDragTarget;                // 4C
		std::int32_t                     iDragStartX;                // 50
		float                            fDragOffsetLastX;           // 54
		float                            fDragOffsetLastY;           // 58
		std::int32_t                     iDragStartY;                // 5C
		std::int32_t                     iCursorOffsetX;             // 60
		std::int32_t                     iCursorOffsetY;             // 64
		std::int32_t                     iTargetID;                  // 68
		Tile*                            pTarget;                    // 6C
		BSSimpleList<TESObjectREFR*>     ConsolePickRefs;            // 70
		std::int32_t                     iCurrentPickIndex;          // 78
		bool                             bDebugTextVisible;          // 7C
		bool                             bShowMouse;                 // 7D
		std::uint16_t                    pad7E;                      // 7E
		NiNode*                          pInterfaceRoot;             // 80
		NiNode*                          pCursorRoot;                // 84
		ShadowSceneNode*                 pPlayerRoot;                // 88
		NiPointer<BSShaderAccumulator>   spInterfaceAccum;           // 8C
		NiPointer<BSShaderAccumulator>   sp3dInterfaceAccum;         // 90
		ShadowSceneNode*                 pShadowNode;                // 94
		ShadowSceneNode*                 pUIPlayerNode;              // 98
		Tile*                            pMenusRoot;                 // 9C
		Tile*                            pStringRoot;                // A0
		NiNode*                          pDebugTextRoot;             // A4
		float                            fOneToOneDistance;          // A8
		NiPointer<NiAlphaProperty>       spAlphaProp;                // AC
		bool                             bNeedToUpdate;              // B0
		std::uint8_t                     padB1;                      // B1
		std::uint16_t                    iCharHit;                   // B2
		Tile*                            pTargetReticle;             // B4
		Tile*                            pSafeZone;                  // B8
		Tile*                            pMouseOverTarget;           // BC
		std::uint32_t                    iLastXDefault;              // C0
		std::int32_t                     iDragDroppingState;         // C4
		bool                             bPreLoadMainMenus;          // C8
		bool                             bFirstChanceLoad;           // C9
		std::uint16_t                    padCA;                      // CA
		Tile*                            pOverTileTarget;            // CC
		Menu*                            pOverTileMenu;              // D0
		Tile*                            pDragOverTileTarget;        // D4
		Menu*                            pDragOverTileMenu;          // D8
		bool                             bTextWasCreated;            // DC
		bool                             bFullHelp;                  // DD
		std::uint16_t                    padDE;                      // DE
		Menu*                            pTopMenu;                   // E0
		char                             cLastMessageButtonClicked;  // E4
		std::uint8_t                     padE5[0x3];                 // E5
		void*                            fpResult;                   // E8
		bool                             bTextureRelease;            // EC
		bool                             bMouseInMotion;             // ED
		std::uint16_t                    padEE;                      // EE
		TESObjectREFR*                   pPickRef;                   // F0
		TESObjectREFR*                   pReticleRef;                // F4
		TESObjectREFR*                   pCrossHairRef;              // F8
		TESObjectREFR*                   pActivateRef;               // FC
		TESObjectREFR*                   pTelekinesisRef;            // 100
		NiPoint3                         pActivatePickLocation;      // 104
		bool                             bFuzzyActivatePick;         // 110
		std::uint8_t                     pad111[0x3];                // 111
		std::int32_t                     iEnterStack[10];            // 114
		ViewCaster*                      pViewCaster;                // 13C
		MobileObject*                    pJailSpeaker;               // 140
		MobileObject*                    pPayFineSpeaker;            // 144
		bool                             bClickMultithreaded;        // 148
		bool                             bShiftDown;                 // 149
		std::uint16_t                    pad14A;                     // 14A
		std::int32_t                     iModifierKeys;              // 14C
		std::int32_t                     iRepeatingKey;              // 150
		std::uint32_t                    uKeyDownTime;               // 154
		std::uint32_t                    uKeyRepeatStartTime;        // 158
		Interface_enumGamepadButtons     iLastGamepadEvent;          // 15C
		std::uint32_t                    uGamepadRepeatStartTime;    // 160
		InterfaceManager::Timer*         pTimers;                    // 164
		bool                             bIsInRenderedMenu;          // 168
		std::uint8_t                     pad169[0x3];                // 169
		FORenderedMenu*                  pCurrentRenderedMenu;       // 16C
		bool                             bMouseOverRenderedMenu;     // 170
		std::uint8_t                     pad171[0x3];                // 171
		FOPipboyManager*                 pPipboy;                    // 174
		FOHUDEffectManager               HUDEffects;                 // 178
		FOVATSEffectManager              VATSEffect;                 // 1DC
		float                            fPipboyMouseX;              // 4AC
		float                            fPipboyMouseY;              // 4B0
		bool                             bOverPipboyScreen;          // 4B4
		std::uint8_t                     pad4B5[0x3];                // 4B5
		std::int32_t                     iPipboyMenuToSet;           // 4B8
		InterfaceManager::PIPBOY_STATE   ePipboyState;               // 4BC
		void*                            pPipboyCallback;            // 4C0
		BSSimpleList<Tile*>              xGlowBranchTiles;           // 4C4
		bool                             bQueueCloseSupportMenus;    // 4CC
		bool                             bContainerOpenQueued;       // 4CD
		std::uint16_t                    pad4CE;                     // 4CE
		float                            fAspectRatioRatio;          // 4D0
		InterfaceManager_TutorialManager xTutorialManager;           // 4D4
	};
	static_assert(sizeof(InterfaceManager) == 0x580);
}
