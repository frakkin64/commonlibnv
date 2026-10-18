#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSDebris;

	class EffectShaderData
	{
	public:
		void Initialize()
		{
			using func_t = decltype(&EffectShaderData::Initialize);
			static REL::Relocation<func_t> func{ Offsets::EffectShaderData::Initialize };
			func(this);
		}

		void Endian()
		{
			using func_t = decltype(&EffectShaderData::Endian);
			static REL::Relocation<func_t> func{ Offsets::EffectShaderData::Endian };
			func(this);
		}

	public:
		// members
		// not placed: fFillAlphaFadeInTime, eTextureBlendModeDest(absent), eParticleBlendModeSource(absent), eParticleBlendOperation(absent), eParticleZTestFunction(absent), eParticleBlendModeDest(absent), fParticleFadeInTime(absent), fParticleFullTime(absent), fParticleFadeOutTime(absent), fParticleFull(absent), fParticlePersistent(absent), fParticleLifetime(absent), fParticleLifeVar(absent), fParticleNormalSpeed(absent), fParticleNormalAcc(absent)
		std::uint8_t  cFlags;                       // 00
		std::uint8_t  pad01[0x3];                   // 01
		std::uint32_t eTextureBlendModeSource;      // 04
		std::uint32_t eTextureBlendOperation;       // 08
		std::uint32_t eTextureZTestFunction;        // 0C
		std::uint32_t iFillColor;                   // 10
		float         fFillAlphaFullTime;           // 14
		float         fFillAlphaFadeOutTime;        // 18
		float         fFillAlphaPersistentPercent;  // 1C
		float         fFillAlphaPulseAmplitude;     // 20
		float         fFillAlphaPulseFrequency;     // 24
		float         fFillTextureUAnimSpeed;       // 28
		float         fFillTextureVAnimSpeed;       // 2C
		float         fEdgeExponentValue;           // 30
		std::uint32_t iEdgeColor;                   // 34
		float         fEdgeAlphaFadeInTime;         // 38
		float         fEdgeAlphaFullTime;           // 3C
		float         fEdgeAlphaFadeOutTime;        // 40
		float         fEdgeAlphaPersistentPercent;  // 44
		float         fEdgeAlphaPulseAmplitude;     // 48
		float         fEdgeAlphaPulseFrequency;     // 4C
		float         fFillAlphaFullPercent;        // 50
		float         fEdgeAlphaFullPercent;        // 54
		NiPoint3      ParticleVelocity;             // 58
		NiPoint3      ParticleAcceleration;         // 64
		float         fParticleScale1;              // 70
		float         fParticleScale2;              // 74
		float         fParticleScale1Time;          // 78
		float         fParticleScale2Time;          // 7C
		std::uint32_t iParticleColor1;              // 80
		std::uint32_t iParticleColor2;              // 84
		std::uint32_t iParticleColor3;              // 88
		float         fParticleColor1Alpha;         // 8C
		float         fParticleColor2Alpha;         // 90
		float         fParticleColor3Alpha;         // 94
		float         fParticleColor1Time;          // 98
		float         fParticleColor2Time;          // 9C
		float         fParticleColor3Time;          // A0
		float         fParticleNormalSpeedVar;      // A4
		float         fParticleRotate;              // A8
		float         fParticleRotateVar;           // AC
		float         fParticleRotateSpeed;         // B0
		float         fParticleRotateSpeedVar;      // B4
		BGSDebris*    pAddonModels;                 // B8
		float         fAlphaTestStartTime;          // BC
		float         fAlphaTestEndTime;            // C0
		float         fAlphaTestStartValue;         // C4
		float         fAlphaTestEndValue;           // C8
		float         fAlphaEdgeWidth;              // CC
		std::uint32_t iAlphaEdgeColor;              // D0
		float         fExplosionSpeed;              // D4
		std::uint32_t iParticleTextureCountX;       // D8
		std::uint32_t iParticleTextureCountY;       // DC
		float         fAddOnFadeInTime;             // E0
		float         fAddOnFadeOutTime;            // E4
		float         fAddOnScaleStart;             // E8
		float         fAddOnScaleEnd;               // EC
		float         fAddOnScaleInTime;            // F0
		float         fAddOnScaleOutTime;           // F4
	};
}
