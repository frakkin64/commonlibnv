#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class WaterShaderData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&WaterShaderData::Endian);
			static REL::Relocation<func_t> func{ Offsets::WaterShaderData::Endian };
			func(this);
		}

	public:
		// members
		float         fWindVelocity;           // 00
		float         fWindDirection;          // 04
		float         fWaveAmplitude;          // 08
		float         fWaveFrequency;          // 0C
		float         fSunPower;               // 10
		float         fReflectionAmount;       // 14
		float         fFresnelAmount;          // 18
		float         fWaveSpeed;              // 1C
		float         fFogDistNear;            // 20
		float         fFogDistFar;             // 24
		std::uint32_t iShallowWaterColor;      // 28
		std::uint32_t iDeepWaterColor;         // 2C
		std::uint32_t iReflectionWaterColor;   // 30
		std::uint8_t  cBlend;                  // 34
		std::uint8_t  pad35[0x3];              // 35
		float         fRainForce;              // 38
		float         fRainVelocity;           // 3C
		float         fRainFalloff;            // 40
		float         fRainDampener;           // 44
		float         fRainSize;               // 48
		float         fDisplacementForce;      // 4C
		float         fDisplacementVelocity;   // 50
		float         fDisplacementFalloff;    // 54
		float         fDisplacementDampener;   // 58
		float         fDisplacementSize;       // 5C
		float         fNoiseScale;             // 60
		float         fNoiseWindDirection0;    // 64
		float         fNoiseWindDirection1;    // 68
		float         fNoiseWindDirection2;    // 6C
		float         fNoiseWindSpeed0;        // 70
		float         fNoiseWindSpeed1;        // 74
		float         fNoiseWindSpeed2;        // 78
		float         fDepthFalloffStart;      // 7C
		float         fDepthFalloffEnd;        // 80
		float         fFogAmount;              // 84
		float         fUVScale;                // 88
		float         fUnderwaterFogAmount;    // 8C
		float         fUnderwaterFogDistNear;  // 90
		float         fUnderwaterFogDistFar;   // 94
		float         fRefractivityAmount;     // 98
		float         fShininess;              // 9C
		float         fHDRMultiplier;          // A0
		float         fLightRadius;            // A4
		float         fLightBrightness;        // A8
		float         fHeightUVScale0;         // AC
		float         fHeightUVScale1;         // B0
		float         fHeightUVScale2;         // B4
		float         fAmplitude0;             // B8
		float         fAmplitude1;             // BC
		float         fAmplitude2;             // C0
	};
	static_assert(sizeof(WaterShaderData) == 0xC4);
}
