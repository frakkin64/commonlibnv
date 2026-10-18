#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceEffectDepthRadialBlur_RadialBlurMode.h"
#include "RE/I/ImageSpaceParameterData.h"
#include "RE/I/ImageSpaceTexture.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRect.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSRenderedTexture;
	class ImageSpaceEffect;
	class NiBound;
	class NiScreenElements;
	class NiScreenElementsData;

	class ImageSpaceManager
	{
	public:
		enum class ImageSpaceEffectEnum : std::int32_t
		{
			kEFFECT_CLEAR_SIMULATION = 0x0,
			kEFFECT_TEX_OFFSET = 0x1,
			kEFFECT_WADING_RIPPLE = 0x2,
			kEFFECT_RAIN_RIPPLE = 0x3,
			kEFFECT_WADING_HEIGHTMAP = 0x4,
			kEFFECT_RAIN_HEIGHTMAP = 0x5,
			kEFFECT_BLEND_HEIGHTMAPS = 0x6,
			kEFFECT_SMOOTH_HEIGHTMAP = 0x7,
			kEFFECT_NORMALS = 0x8,
			kEFFECT_COUNT = 0x9,
		};

		ImageSpaceEffect* GetEffect(ImageSpaceManager::ImageSpaceEffectEnum aiIndex) const
		{
			using func_t = decltype(&ImageSpaceManager::GetEffect);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::GetEffect };
			return func(this, aiIndex);
		}

		void SetMotionBlurConst(float afConst)
		{
			using func_t = decltype(&ImageSpaceManager::SetMotionBlurConst);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::SetMotionBlurConst };
			func(this, afConst);
		}

		void SetMenuBGBlendEnabled(bool abEnabled)
		{
			using func_t = decltype(&ImageSpaceManager::SetMenuBGBlendEnabled);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::SetMenuBGBlendEnabled };
			func(this, abEnabled);
		}

		void SetMenuBGBlendValue(float afValue)
		{
			using func_t = decltype(&ImageSpaceManager::SetMenuBGBlendValue);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::SetMenuBGBlendValue };
			func(this, afValue);
		}

		void ApplyRadialBlurParamModifier(float afStrength, float afRampup, float a_arg3, float a_arg4, float a_arg5, NiPoint2 const& afStart)
		{
			using func_t = void (ImageSpaceManager::*)(float, float, float, float, float, NiPoint2 const&);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::ApplyRadialBlurParamModifier };
			func(this, afStrength, afRampup, a_arg3, a_arg4, a_arg5, afStart);
		}

		void ApplyDepthOfFieldParamModifier(float a_arg1, std::uint32_t a_arg2, float auiMode, float afStrength, float afMaskConst)
		{
			using func_t = decltype(&ImageSpaceManager::ApplyDepthOfFieldParamModifier);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::ApplyDepthOfFieldParamModifier };
			func(this, a_arg1, a_arg2, auiMode, afStrength, afMaskConst);
		}

		void ApplyRadialBlurParamModifier(float afStrength, float afRampup, float a_arg3, float a_arg4, float a_arg5, NiBound const& afStart)
		{
			using func_t = void (ImageSpaceManager::*)(float, float, float, float, float, NiBound const&);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::ApplyRadialBlurParamModifier_1 };
			func(this, afStrength, afRampup, a_arg3, a_arg4, a_arg5, afStart);
		}

		void CreatePartialScreenGeometry(float a_arg1, float afWidthRatio, NiPointer<NiScreenElements>& a_arg3)
		{
			using func_t = decltype(&ImageSpaceManager::CreatePartialScreenGeometry);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::CreatePartialScreenGeometry };
			func(this, a_arg1, afWidthRatio, a_arg3);
		}

	protected:
		void InitGeometry()
		{
			using func_t = decltype(&ImageSpaceManager::InitGeometry);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceManager::InitGeometry };
			func(this);
		}

	public:
		// members
		// not placed: fWeatherRadialBlurStrengthValue, fWeatherRadialBlurRampupValue, fWeatherRadialBlurStartValue, fWeatherRadialBlurRampDownValue, fWeatherRadialBlurDownStartValue, fWeatherRadialBlurCenter, fHighestDOFStrengthValue, fCurrentDOFDistanceValue, fCurrentDOFRangeValue, fCurrentDOFMaskConst, fWeatherDOFStrengthValue, fWeatherDOFDistanceValue, fWeatherDOFRangeValue, fWeatherDOFMaskConst, fCurrentDOFMode, fWeatherDOFMode
		BSRenderedTexture*                             pEOFDest;                              // 00
		NiTPrimitiveArray<ImageSpaceEffect*>           pEffectList;                           // 04
		ImageSpaceParameterData                        CurrentParameterData;                  // 14
		const ImageSpaceParameterData*                 pBaseParameterData;                    // AC
		const ImageSpaceParameterData*                 pOverRideBaseParameterData;            // B0
		ImageSpaceParameterData                        WeatherParameterData[2];               // B4
		bool                                           bIsReady;                              // 1E4
		std::uint8_t                                   pad1E5[0x3];                           // 1E5
		std::int32_t                                   iActiveEffectsCount;                   // 1E8
		ImageSpaceManager::ImageSpaceEffectEnum        iLastEffect;                           // 1EC
		NiPointer<NiScreenElements>                    spScreenTriShape;                      // 1F0
		NiPointer<NiScreenElementsData>                spScreenTriShapeData;                  // 1F4
		NiPointer<NiScreenElements>                    spPartialScreenTriShape;               // 1F8
		bool                                           bEnablePartialRender;                  // 1FC
		std::uint8_t                                   pad1FD[0x3];                           // 1FD
		NiPointer<NiScreenElements>                    spMenuUnpackGeom;                      // 200
		ImageSpaceTexture                              DepthTexture;                          // 204
		NiColorA                                       kTintColor;                            // 214
		NiColorA                                       kWeatherTintColor;                     // 224
		float                                          fHighestTintValue;                     // 234
		NiColorA                                       kFadeColor;                            // 238
		NiColorA                                       kWeatherFadeColor;                     // 248
		float                                          fHighestFadeValue;                     // 258
		float                                          fHighestBlurValue;                     // 25C
		float                                          fWeatherBlurValue;                     // 260
		float                                          fHighestDoubleValue;                   // 264
		float                                          fWeatherDoubleValue;                   // 268
		float                                          fHighestRadialBlurStrengthValue;       // 26C
		float                                          fCurrentRadialBlurRampupValue;         // 270
		float                                          fCurrentRadialBlurStartValue;          // 274
		float                                          fCurrentRadialBlurRampDownValue;       // 278
		float                                          fCurrentRadialBlurDownStartValue;      // 27C
		std::uint8_t                                   pad280[0x14];                          // 280
		NiPoint2                                       fCurrentRadialBlurCenter;              // 294
		std::uint8_t                                   pad29C[0x8];                           // 29C
		bool                                           bCurrentDOFUseMask;                    // 2A4
		bool                                           bWeatherDOFUseMask;                    // 2A5
		std::uint16_t                                  pad2A6;                                // 2A6
		float                                          fHighestDepthRadialBlurStrengthValue;  // 2A8
		float                                          fCurrentDepthRadialBlurRampupValue;    // 2AC
		float                                          fCurrentDepthRadialBlurStartValue;     // 2B0
		float                                          fCurrentDepthRadialBlurDistance;       // 2B4
		float                                          fCurrentDepthRadialBlurRange;          // 2B8
		NiPoint2                                       fCurrentDepthRadialBlurCenter;         // 2BC
		ImageSpaceEffectDepthRadialBlur_RadialBlurMode fCurrentDepthRadialBlurMode;           // 2C4
		float                                          fHighestMotionBlurStrengthValue;       // 2C8
		float                                          fWeatherMotionBlurStrengthValue;       // 2CC
		NiColorA                                       kRefractionTint;                       // 2D0
		NiRect<float>                                  CustomViewPort;                        // 2E0
		BSRenderedTexture*                             pSwapTarget;                           // 2F0
	};
}
