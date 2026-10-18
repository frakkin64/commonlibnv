#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorInterpolator.h"
#include "RE/N/NiFloatInterpolator.h"
#include "RE/N/NiPoint2.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class NiAVObject;
	class NiLinColorKey;
	class NiLinFloatKey;
	class TESFile;
	class TESSound;

	class TESImageSpaceModifier :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESImageSpaceModifier };
		static constexpr auto VTABLE{ VTABLE::TESImageSpaceModifier };

		class ImageSpaceModifierData;

		class ImageSpaceModifierData
		{
		public:
			void Endian()
			{
				using func_t = decltype(&ImageSpaceModifierData::Endian);
				static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier_ImageSpaceModifierData::Endian };
				func(this);
			}

		public:
			// members
			bool          bAnimatable;                    // 00
			std::uint8_t  pad01[0x3];                     // 01
			float         fDuration;                      // 04
			std::uint32_t ppuiKeySize[21][2];             // 08
			std::uint32_t uiTintColorKeySize;             // B0
			std::uint32_t uiBlurKeySize;                  // B4
			std::uint32_t uiDoubleKeySize;                // B8
			std::uint32_t uiRadialBlurStrengthKeySize;    // BC
			std::uint32_t uiRadialBlurRampupKeySize;      // C0
			std::uint32_t uiRadialBlurStartKeySize;       // C4
			bool          bUseTargetForRadialBlur;        // C8
			std::uint8_t  padC9[0x3];                     // C9
			NiPoint2      RadialBlurCenter;               // CC
			std::uint32_t uiDepthOfFieldStrengthKeySize;  // D4
			std::uint32_t uiDepthOfFieldDistanceKeySize;  // D8
			std::uint32_t uiDepthOfFieldRangeKeySize;     // DC
			bool          bUseTargetForDepthOfField;      // E0
			std::uint8_t  ucDepthOfFieldMode;             // E1
			std::uint16_t padE2;                          // E2
			std::uint32_t uiRadialBlurRampDownKeySize;    // E4
			std::uint32_t uiRadialBlurDownStartKeySize;   // E8
			std::uint32_t uiFadeColorKeySize;             // EC
			std::uint32_t uiMotionBlurStrengthKeySize;    // F0
		};
		static_assert(sizeof(ImageSpaceModifierData) == 0xF4);

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kIMAD_ID };

		// override (TESForm)
		virtual ~TESImageSpaceModifier() = default;      // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		static float GetTickCount()
		{
			using func_t = decltype(&TESImageSpaceModifier::GetTickCount);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::GetTickCount };
			return func();
		}

		TESImageSpaceModifier* ctor()
		{
			using func_t = TESImageSpaceModifier*(__thiscall*)(TESImageSpaceModifier*);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::ctor };
			return func(this);
		}

		void FlushData()
		{
			using func_t = decltype(&TESImageSpaceModifier::FlushData);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::FlushData };
			func(this);
		}

		void Apply(float afStartTime, float a_arg2, NiAVObject* a_arg3)
		{
			using func_t = decltype(&TESImageSpaceModifier::Apply);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::Apply };
			func(this, afStartTime, a_arg2, a_arg3);
		}

		void ApplyWeather(float afStartTime, float afStrength)
		{
			using func_t = decltype(&TESImageSpaceModifier::ApplyWeather);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::ApplyWeather };
			func(this, afStartTime, afStrength);
		}

		static void BlendApply(float a_arg1, TESImageSpaceModifier* a_arg2, TESImageSpaceModifier* apMod1, float apMod2, float a_arg5, NiAVObject* a_arg6, NiAVObject* a_arg7)
		{
			using func_t = decltype(&TESImageSpaceModifier::BlendApply);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::BlendApply };
			func(a_arg1, a_arg2, apMod1, apMod2, a_arg5, a_arg6, a_arg7);
		}

		static TESImageSpaceModifier* GetGetHit()
		{
			using func_t = decltype(&TESImageSpaceModifier::GetGetHit);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::GetGetHit };
			return func();
		}

		static TESImageSpaceModifier* GetConcussion()
		{
			using func_t = decltype(&TESImageSpaceModifier::GetConcussion);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::GetConcussion };
			return func();
		}

		static TESImageSpaceModifier* GetExplosionInFace()
		{
			using func_t = decltype(&TESImageSpaceModifier::GetExplosionInFace);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifier::GetExplosionInFace };
			return func();
		}

	public:
		// members
		// not placed: pppFloatKey, strName
		TESSound*                                     pOutroSound;                       // 18
		TESSound*                                     pIntroSound;                       // 1C
		TESImageSpaceModifier::ImageSpaceModifierData Data;                              // 20
		NiFloatInterpolator                           ppInterpolator[21][2];             // 114
		NiFloatInterpolator                           BlurInterpolator;                  // 504
		NiFloatInterpolator                           DoubleInterpolator;                // 51C
		NiColorInterpolator                           TintColorInterpolator;             // 534
		NiColorInterpolator                           FadeColorInterpolator;             // 558
		NiFloatInterpolator                           RadialBlurStrengthInterpolator;    // 57C
		NiFloatInterpolator                           RadialBlurRampupInterpolator;      // 594
		NiFloatInterpolator                           RadialBlurStartInterpolator;       // 5AC
		NiFloatInterpolator                           RadialBlurRampDownInterpolator;    // 5C4
		NiFloatInterpolator                           RadialBlurDownStartInterpolator;   // 5DC
		NiFloatInterpolator                           DepthOfFieldStrengthInterpolator;  // 5F4
		NiFloatInterpolator                           DepthOfFieldDistanceInterpolator;  // 60C
		NiFloatInterpolator                           DepthOfFieldRangeInterpolator;     // 624
		NiFloatInterpolator                           MotionBlurStrengthInterpolator;    // 63C
		std::uint8_t                                  pad654[0xA8];                      // 654
		NiLinFloatKey*                                pBlurFloatKey;                     // 6FC
		NiLinFloatKey*                                pDoubleFloatKey;                   // 700
		NiLinColorKey*                                pTintColorKey;                     // 704
		NiLinColorKey*                                pFadeColorKey;                     // 708
		NiLinFloatKey*                                pRadialBlurStrengthFloatKey;       // 70C
		NiLinFloatKey*                                pRadialBlurRampupFloatKey;         // 710
		NiLinFloatKey*                                pRadialBlurStartFloatKey;          // 714
		NiLinFloatKey*                                pRadialBlurRampDownFloatKey;       // 718
		NiLinFloatKey*                                pRadialBlurDownStartFloatKey;      // 71C
		NiLinFloatKey*                                pDepthOfFieldStrengthFloatKey;     // 720
		NiLinFloatKey*                                pDepthOfFieldDistanceFloatKey;     // 724
		NiLinFloatKey*                                pDepthOfFieldRangeFloatKey;        // 728
		NiLinFloatKey*                                pMotionBlurStrengthFloatKey;       // 72C
	};
	static_assert(sizeof(TESImageSpaceModifier) == 0x730);
}
