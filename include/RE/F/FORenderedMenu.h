#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderer_ClearFlags.h"

namespace RE
{
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class NiAVObject;
	class NiCamera;
	class NiGeometry;
	class NiPointLight;
	class NiScreenElements;
	class NiTexture;
	class ShadowSceneNode;
	class Tile;

	class __declspec(novtable) FORenderedMenu
	{
	public:
		static constexpr auto RTTI{ RTTI::FORenderedMenu };
		static constexpr auto VTABLE{ VTABLE::FORenderedMenu };

		// add
		virtual ~FORenderedMenu() = default;                                                                                 // 00
		virtual bool QRequiresDepthBuffer();                                                                                 // 01
		virtual NiAVObject* GetParentNodeToRender();                                                                         // 02
		virtual void Draw(BSRenderedTexture* apTarget, NiRenderer_ClearFlags aeClearMode, BSRenderedTexture* apSwapTarget);  // 03
		virtual void PostDraw();                                                                                             // 04
		virtual bool OnIdle();                                                                                               // 05
		virtual void Unk_06();                                                                                               // 06
		virtual void Unk_07();                                                                                               // 07
		virtual void Unk_08();                                                                                               // 08
		virtual void Initialize();                                                                                           // 09
		virtual void Shutdown();                                                                                             // 0A
		virtual float GetFadeAmount();                                                                                       // 0B
		virtual void OnMenuOpen();                                                                                           // 0C
		virtual void OnMenuClose();                                                                                          // 0D
		virtual void UpdateBurst(float afTime);                                                                              // 0E
		virtual void UpdateVertHold(float afTime);                                                                           // 0F
		virtual void UpdateShudder(float afTime);                                                                            // 10
		virtual void UpdatePulse(float afTime);                                                                              // 11
		virtual void UpdateLight(float afTime);                                                                              // 12
		virtual void UpdateDistort(float afTime);                                                                            // 13
		virtual void DoEffect(BSRenderedTexture* apSource, BSRenderedTexture* apDest, NiRenderer_ClearFlags aeClearMode);    // 14

		void SetScreenLightFlickerIntensity(float afIntensity)
		{
			using func_t = decltype(&FORenderedMenu::SetScreenLightFlickerIntensity);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::SetScreenLightFlickerIntensity };
			func(this, afIntensity);
		}

		FORenderedMenu* ctor()
		{
			using func_t = FORenderedMenu*(__thiscall*)(FORenderedMenu*);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::ctor };
			return func(this);
		}

		void SetScreenTexture(NiTexture* apTexture)
		{
			using func_t = decltype(&FORenderedMenu::SetScreenTexture);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::SetScreenTexture };
			func(this, apTexture);
		}

		void TriggerBurst(float afBurstDuration, float afBurstIntensity, float afSoundChance)
		{
			using func_t = decltype(&FORenderedMenu::TriggerBurst);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::TriggerBurst };
			func(this, afBurstDuration, afBurstIntensity, afSoundChance);
		}

		void PrepareGeometry(NiGeometry* apGeometry)
		{
			using func_t = decltype(&FORenderedMenu::PrepareGeometry);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::PrepareGeometry };
			func(this, apGeometry);
		}

		bool CreateMenuLight(char const* apLightNodeName, ShadowSceneNode* apShadowSceneNode)
		{
			using func_t = decltype(&FORenderedMenu::CreateMenuLight);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::CreateMenuLight };
			return func(this, apLightNodeName, apShadowSceneNode);
		}

		NiCamera* GetCamera()
		{
			using func_t = decltype(&FORenderedMenu::GetCamera);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::GetCamera };
			return func(this);
		}

		void SetScreenLightBaseIntensity(float afIntensity)
		{
			using func_t = decltype(&FORenderedMenu::SetScreenLightBaseIntensity);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::SetScreenLightBaseIntensity };
			func(this, afIntensity);
		}

		bool GetInitialized()
		{
			using func_t = decltype(&FORenderedMenu::GetInitialized);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::GetInitialized };
			return func(this);
		}

	protected:
		void HidePopupMenus()
		{
			using func_t = decltype(&FORenderedMenu::HidePopupMenus);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::HidePopupMenus };
			func(this);
		}

		void UnhidePopupMenus()
		{
			using func_t = decltype(&FORenderedMenu::UnhidePopupMenus);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenu::UnhidePopupMenus };
			func(this);
		}

	public:
		// members
		NiPointer<NiGeometry>          spScreenTriShape;              // 04
		NiPointer<NiAVObject>          spScreenParent;                // 08
		NiPointer<NiScreenElements>    spPartialScreenGeometry;       // 0C
		NiPointer<NiTexture>           spDefaultTex;                  // 10
		NiPointer<NiAVObject>          spMenuRoot;                    // 14
		Tile*                          pMenuTile;                     // 18
		NiPointer<NiPointLight>        spLight;                       // 1C
		ShadowSceneNode*               pLightShadowSceneNode;         // 20
		NiPointer<NiCamera>            spCamera;                      // 24
		bool                           bInitialized;                  // 28
		bool                           bScaledTexCoords;              // 29
		bool                           bUsePartialScreenGeometry;     // 2A
		std::uint8_t                   pad2B;                         // 2B
		NiColor                        ScreenLightColor;              // 2C
		float                          fScreenLightBaseIntensity;     // 38
		float                          fScreenLightFlickerIntensity;  // 3C
		float                          fBlurRadius;                   // 40
		float                          fBlurIntensity;                // 44
		float                          fScanlineScale;                // 48
		bool                           bDoScanlines;                  // 4C
		bool                           bBurstActive;                  // 4D
		std::uint16_t                  pad4E;                         // 4E
		float                          fBurstStartTime;               // 50
		float                          fBurstDuration;                // 54
		float                          fBurstMaximumIntensity;        // 58
		float                          fBurstCurrentIntensity;        // 5C
		bool                           bVertHoldActive;               // 60
		std::uint8_t                   pad61[0x3];                    // 61
		float                          fVertHoldStartTime;            // 64
		float                          fVertHoldDuration;             // 68
		float                          fVertHoldSpeed;                // 6C
		float                          fVertHoldCurrentPosition;      // 70
		bool                           bShudderActive;                // 74
		std::uint8_t                   pad75[0x3];                    // 75
		float                          fShudderStartTime;             // 78
		float                          fShudderDuration;              // 7C
		float                          fShudderIntensity;             // 80
		float                          fShudderFrequency;             // 84
		float                          fShudderCurrentPosition;       // 88
		float                          fPulseCurrentBrighten;         // 8C
		float                          fPulseCurrentRadius;           // 90
		bool                           bPulseAffectsLight;            // 94
		bool                           bDistortActive;                // 95
		std::uint16_t                  pad96;                         // 96
		float                          fDistortStartTime;             // 98
		float                          fDistortPosition;              // 9C
		float                          fDistortDuration;              // A0
		float                          fNextDistortTime;              // A4
		NiColorA                       BackgroundColor;               // A8
		bool                           bMenuOpen;                     // B8
		bool                           bMenuRendering;                // B9
		std::uint16_t                  padBA;                         // BA
		NiPointer<NiTexture>           spScanlinesTexture;            // BC
		NiColorA                       TintColor;                     // C0
		bool                           bHidQuantity;                  // D0
		bool                           bHidTutorial;                  // D1
		bool                           bHidMessage;                   // D2
		std::uint8_t                   padD3;                         // D3
		NiPointer<BSShaderAccumulator> spAccumulator;                 // D4
	};
	static_assert(sizeof(FORenderedMenu) == 0xD8);
}
