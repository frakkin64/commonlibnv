#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FORenderedMenu.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderer_ClearFlags.h"
#include "RE/R/RaceSexMenuContext.h"

namespace RE
{
	class BSFadeNode;
	class BSRenderedTexture;
	class NiAVObject;
	class NiCamera;
	class NiNode;

	class FORenderedMenuRaceSex :
		public FORenderedMenu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FORenderedMenuRaceSex };
		static constexpr auto VTABLE{ VTABLE::FORenderedMenuRaceSex };

		// override (FORenderedMenu)
		virtual ~FORenderedMenuRaceSex() = default;                                                                                   // 00
		virtual bool QRequiresDepthBuffer() override;                                                                                 // 01
		virtual NiAVObject* GetParentNodeToRender() override;                                                                         // 02
		virtual void Draw(BSRenderedTexture* apTarget, NiRenderer_ClearFlags aeClearMode, BSRenderedTexture* apSwapTarget) override;  // 03
		virtual void PostDraw() override;                                                                                             // 04
		virtual bool OnIdle() override;                                                                                               // 05
		virtual void Initialize() override;                                                                                           // 09
		virtual void OnMenuOpen() override;                                                                                           // 0C
		virtual void OnMenuClose() override;                                                                                          // 0D
		virtual void UpdateDistort(float afTime) override;                                                                            // 13
		virtual void DoEffect(BSRenderedTexture* apSource, BSRenderedTexture* apDest, NiRenderer_ClearFlags aeClearMode) override;    // 14

		// add
		virtual void UpdateFakeDistort(float afTime);  // 15

		void LightButton(std::uint32_t aiButton)
		{
			using func_t = decltype(&FORenderedMenuRaceSex::LightButton);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenuRaceSex::LightButton };
			func(this, aiButton);
		}

	protected:
		void InitLight()
		{
			using func_t = decltype(&FORenderedMenuRaceSex::InitLight);
			static REL::Relocation<func_t> func{ Offsets::FORenderedMenuRaceSex::InitLight };
			func(this);
		}

	public:
		// members
		NiPointer<NiAVObject> spButtons[4];              // D8
		NiPointer<NiAVObject> spBtnGlow[4];              // E8
		NiPointer<BSFadeNode> spGeometry;                // F8
		NiPointer<NiAVObject> spPlayer3D;                // FC
		NiPointer<NiNode>     spPlayerParent;            // 100
		NiPointer<NiCamera>   spClonedPlayerCamera;      // 104
		NiPointer<NiAVObject> spPlayerLights;            // 108
		NiPointer<NiNode>     spPlayer3DParent;          // 10C
		NiPoint3              ptSavedPlayerTranslation;  // 110
		NiMatrix3             mtxSavedPlayerRotation;    // 11C
		NiPoint3              ptSavedBip01Translation;   // 140
		bool                  bPlayer3DCulled;           // 14C
		std::uint8_t          pad14D[0x3];               // 14D
		float                 fDistortStart;             // 150
		float                 fDistortPos;               // 154
		bool                  bFakeDistortActive;        // 158
		std::uint8_t          pad159[0x3];               // 159
		float                 fFakeDistortStartTime;     // 15C
		float                 fFakeDistortPosition;      // 160
		float                 fFakeDistortDuration;      // 164
		float                 fNextFakeDistortTime;      // 168
		RaceSexMenuContext    m_Context;                 // 16C
	};
	static_assert(sizeof(FORenderedMenuRaceSex) == 0x170);
}
