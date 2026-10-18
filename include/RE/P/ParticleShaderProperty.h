#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiAVObject;
	class NiGeometry;
	class NiTexture;
	class ParticleShader_ParticleData;

	class ParticleShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		enum class EMITTER_TYPE : std::int32_t
		{
			kEMIT_GEOMETRY = 0x0,
			kEMIT_COLLISION = 0x1,
			kEMIT_RAY = 0x2,
			kEMIT_TOTAL = 0x3,
		};

		// members
		ParticleShader_ParticleData*          pInstanceData;        // 60?
		ParticleShaderProperty::EMITTER_TYPE  eEmitterType;         // 64?
		float                                 fRayLength;           // 68?
		bool                                  bWorldspace;          // 6C?
		std::uint8_t                          pad6D[0x3];           // 6D
		std::int32_t                          iParticleCount;       // 70?
		float                                 fGenerateRemainder;   // 74?
		float                                 fMaxParticleRatio;    // 78?
		float                                 fLifetime;            // 7C?
		float                                 fLifeVar;             // 80?
		float                                 fNormalSpeed;         // 84?
		float                                 fNormalSpeedVar;      // 88?
		float                                 fNormalAcceleration;  // 8C?
		NiPoint3                              Velocity;             // 90?
		NiPoint3                              Acceleration;         // 9C?
		float                                 fRotate;              // A8?
		float                                 fRotateVar;           // AC?
		float                                 fRotateSpeed;         // B0?
		float                                 fRotateSpeedVar;      // B4?
		float                                 ColorTime1;           // B8?
		float                                 ColorTime2;           // BC?
		float                                 ColorTime3;           // C0?
		NiColorA                              Color1;               // C4?
		NiColorA                              Color2;               // D4?
		NiColorA                              Color3;               // E4?
		float                                 Scale1;               // F4?
		float                                 Scale2;               // F8?
		float                                 ScaleTime1;           // FC?
		float                                 ScaleTime2;           // 100?
		float                                 fTimer;               // 104?
		std::uint32_t                         eSrcBlendMode;        // 108?
		std::uint32_t                         eDestBlendMode;       // 10C?
		std::uint32_t                         eBlendOperation;      // 110?
		std::uint32_t                         eZTestFunction;       // 114?
		NiPointer<NiTexture>                  spBaseTexture;        // 118?
		NiTObjectArray<NiPointer<NiAVObject>> TargetArray;          // 11C?
		NiGeometry*                           pMyGeometry;          // 12C?
		float                                 fAlpha;               // 130?
		float                                 fTextureCountX;       // 134?
		float                                 fTextureCountY;       // 138?
		NiPoint3                              WindPoint;            // 13C?
		float                                 fWindSpeed;           // 148?
	};
}
