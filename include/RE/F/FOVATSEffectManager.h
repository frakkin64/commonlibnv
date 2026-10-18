#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BIPED_OBJECT.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderer_ClearFlags.h"

namespace RE
{
	class Actor;
	class BSDismemberSkinInstance;
	class BSRenderedTexture;
	class BSShaderAccumulator;
	class NiAVObject;
	class NiStencilProperty;
	class NiTexture;
	class TESObjectREFR;

	class FOVATSEffectManager
	{
	public:
		class VATS_TARGET;

		enum class VATS_DRAW_MODE : std::int32_t
		{
			kVATS_DRAW_SELECTED_PARTS = 0x0,
			kVATS_DRAW_ENTIRE_TARGET = 0x1,
		};

		enum class VATS_EFFECT_MODE : std::int32_t
		{
			kSINGLE_TARGET = 0x0,
			kMULTIPLE_TARGETS = 0x1,
		};

		enum class VATS_OCCLUSION_QUERY : std::int32_t
		{
			kVATS_OCCLUSION_QUERY_NONE = 0x0,
			kVATS_OCCLUSION_QUERY_FULL = 0x1,
			kVATS_OCCLUSION_QUERY_PARTIAL = 0x2,
		};

		class VATS_TARGET
		{
		public:
			// members
			TESObjectREFR*        pRef;   // 00
			NiPointer<NiAVObject> spObj;  // 04
		};
		static_assert(sizeof(VATS_TARGET) == 0x8);

		void SetEffectMode(FOVATSEffectManager::VATS_EFFECT_MODE const& aMode)
		{
			using func_t = decltype(&FOVATSEffectManager::SetEffectMode);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::SetEffectMode };
			func(this, aMode);
		}

		FOVATSEffectManager* ctor()
		{
			using func_t = FOVATSEffectManager*(__thiscall*)(FOVATSEffectManager*);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(FOVATSEffectManager*);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::dtor };
			func(this);
		}

		void SetTarget(TESObjectREFR* apTarget, BGSBodyPart_LIMB_ENUM aeLimb, bool abDoOcclusion)
		{
			using func_t = decltype(&FOVATSEffectManager::SetTarget);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::SetTarget };
			func(this, apTarget, aeLimb, abDoOcclusion);
		}

		void SetMultiTarget(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&FOVATSEffectManager::SetMultiTarget);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::SetMultiTarget };
			func(this, apTarget);
		}

		void SetSelectedMultiTarget(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&FOVATSEffectManager::SetSelectedMultiTarget);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::SetSelectedMultiTarget };
			func(this, apTarget);
		}

		void ClearMultiTargets()
		{
			using func_t = decltype(&FOVATSEffectManager::ClearMultiTargets);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::ClearMultiTargets };
			func(this);
		}

		void DrawTargetToTexture(BSRenderedTexture* apTarget, FOVATSEffectManager::VATS_OCCLUSION_QUERY aQueryType, bool abQueryMode, FOVATSEffectManager::VATS_DRAW_MODE aeDrawMode, NiRenderer_ClearFlags aeClearMode, bool abStopRenderTarget)
		{
			using func_t = decltype(&FOVATSEffectManager::DrawTargetToTexture);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::DrawTargetToTexture };
			func(this, apTarget, aQueryType, abQueryMode, aeDrawMode, aeClearMode, abStopRenderTarget);
		}

		void DrawTarget(bool abQueryMode, FOVATSEffectManager::VATS_DRAW_MODE aeDrawMode)
		{
			using func_t = decltype(&FOVATSEffectManager::DrawTarget);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::DrawTarget };
			func(this, abQueryMode, aeDrawMode);
		}

		void ShutdownEffect()
		{
			using func_t = decltype(&FOVATSEffectManager::ShutdownEffect);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::ShutdownEffect };
			func(this);
		}

		void PrepareEffect(BSRenderedTexture* apSourceColors, BSRenderedTexture* apSourceMask, BSRenderedTexture* apTarget, bool abClearTarget)
		{
			using func_t = decltype(&FOVATSEffectManager::PrepareEffect);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::PrepareEffect };
			func(this, apSourceColors, apSourceMask, apTarget, abClearTarget);
		}

		void IsolateBodyPart()
		{
			using func_t = decltype(&FOVATSEffectManager::IsolateBodyPart);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::IsolateBodyPart };
			func(this);
		}

		void RestoreBodyParts()
		{
			using func_t = decltype(&FOVATSEffectManager::RestoreBodyParts);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::RestoreBodyParts };
			func(this);
		}

		void ClearQueries()
		{
			using func_t = decltype(&FOVATSEffectManager::ClearQueries);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::ClearQueries };
			func(this);
		}

	private:
		void UpdatePulse(float afTime)
		{
			using func_t = decltype(&FOVATSEffectManager::UpdatePulse);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::UpdatePulse };
			func(this, afTime);
		}

		void UpdateTargetPulse(float afTime)
		{
			using func_t = decltype(&FOVATSEffectManager::UpdateTargetPulse);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::UpdateTargetPulse };
			func(this, afTime);
		}

		void UpdateDistort(float afTime)
		{
			using func_t = decltype(&FOVATSEffectManager::UpdateDistort);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::UpdateDistort };
			func(this, afTime);
		}

		void UpdateScan(float afTime)
		{
			using func_t = decltype(&FOVATSEffectManager::UpdateScan);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::UpdateScan };
			func(this, afTime);
		}

		void DrawSingleTarget(bool abQueryMode, FOVATSEffectManager::VATS_DRAW_MODE aeDrawMode)
		{
			using func_t = decltype(&FOVATSEffectManager::DrawSingleTarget);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::DrawSingleTarget };
			func(this, abQueryMode, aeDrawMode);
		}

		void DrawMultipleTargets()
		{
			using func_t = decltype(&FOVATSEffectManager::DrawMultipleTargets);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::DrawMultipleTargets };
			func(this);
		}

		void PrepareScanEffect(BSRenderedTexture* apSourceColors, BSRenderedTexture* apSourceMask, BSRenderedTexture* apTarget, bool abClearTarget)
		{
			using func_t = decltype(&FOVATSEffectManager::PrepareScanEffect);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::PrepareScanEffect };
			func(this, apSourceColors, apSourceMask, apTarget, abClearTarget);
		}

		void PrepareHighlightEffect(BSRenderedTexture* apSourceColors, BSRenderedTexture* apSourceMask, BSRenderedTexture* apTarget, bool abClearTarget)
		{
			using func_t = decltype(&FOVATSEffectManager::PrepareHighlightEffect);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::PrepareHighlightEffect };
			func(this, apSourceColors, apSourceMask, apTarget, abClearTarget);
		}

		void EnableBodyPartOnSkinInstance(BSDismemberSkinInstance* apInstance, BGSBodyPart_LIMB_ENUM aeLimb, bool abEnable)
		{
			using func_t = decltype(&FOVATSEffectManager::EnableBodyPartOnSkinInstance);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::EnableBodyPartOnSkinInstance };
			func(this, apInstance, aeLimb, abEnable);
		}

		void ShowBipedObjectOnActor(Actor* apActor, BIPED_OBJECT aeObject, bool abShow)
		{
			using func_t = decltype(&FOVATSEffectManager::ShowBipedObjectOnActor);
			static REL::Relocation<func_t> func{ Offsets::FOVATSEffectManager::ShowBipedObjectOnActor };
			func(this, apActor, aeObject, abShow);
		}

	public:
		// members
		// not placed: abWaitingForOcclusionQuery(misaligned), bWaitingForOcclusionQuery(absent), pPartialLimbQuery(absent), pEntireLimbQuery(absent), bValidOcclusionResult(absent), iEntireLimbResult(absent), iPartialLimbResult(absent), eLimb(absent), iNumAdditionalLimbs(absent), pAdditionalLimbs(absent)
		FOVATSEffectManager::VATS_EFFECT_MODE EffectMode;               // 00
		FOVATSEffectManager::VATS_TARGET      SingleTarget;             // 04
		std::int32_t                          iNumMultiTargets;         // 0C
		std::int32_t                          iSelectedMultiTarget;     // 10
		FOVATSEffectManager::VATS_TARGET      pMultiTargets[32];        // 14
		NiPointer<NiStencilProperty>          spStencilProp;            // 114
		bool                                  bOcclusionEnabled;        // 118
		std::uint8_t                          pad119[0x10];             // 119
		bool                                  bEffectEnabled;           // 129
		std::uint16_t                         pad12A;                   // 12A
		std::uint32_t                         aiPartialLimbResult[16];  // 12C
		BGSBodyPart_LIMB_ENUM                 aeAdditionalLimbs[16];    // 16C
		bool                                  abUnk1AC[16];             // 1AC
		std::uint8_t                          pad1BC[0x84];             // 1BC
		std::uint32_t                         uiUnk240;                 // 240
		std::uint8_t                          pad244[0x40];             // 244
		bool                                  bDistortActive;           // 284
		std::uint8_t                          pad285[0x3];              // 285
		float                                 fDistortStartTime;        // 288
		float                                 fDistortPosition;         // 28C
		float                                 fDistortDuration;         // 290
		float                                 fNextDistortTime;         // 294
		bool                                  bBurstActive;             // 298
		std::uint8_t                          pad299[0x3];              // 299
		float                                 fBurstStartTime;          // 29C
		float                                 fBurstDuration;           // 2A0
		float                                 fBurstMaximumIntensity;   // 2A4
		float                                 fBurstCurrentIntensity;   // 2A8
		float                                 fPulseCurrentIntensity;   // 2AC
		float                                 fPulseCurrentRadius;      // 2B0
		bool                                  bScanning;                // 2B4
		bool                                  bExitScanMode;            // 2B5
		std::uint16_t                         pad2B6;                   // 2B6
		float                                 fScanStartTime;           // 2B8
		float                                 fScanPosition;            // 2BC
		float                                 fPulseIntensity;          // 2C0
		NiPointer<NiTexture>                  spScanlinesTexture;       // 2C4
		std::uint32_t                         uiPartialResultMult;      // 2C8
		NiPointer<BSShaderAccumulator>        spAccumulator;            // 2CC
	};
	static_assert(sizeof(FOVATSEffectManager) == 0x2D0);
}
