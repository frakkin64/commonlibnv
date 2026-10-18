#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/B/BSShaderManager_eBSSMPassEnum.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/ParticleShader_ParticleData.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class ParticleShader :
		public BSShader  // 00
	{
	public:
		using ParticleData = ParticleShader_ParticleData;

		static std::uint32_t GetNumParticles()
		{
			using func_t = decltype(&ParticleShader::GetNumParticles);
			static REL::Relocation<func_t> func{ Offsets::ParticleShader::GetNumParticles };
			return func();
		}

	public:
		// members
		BSShaderManager_eBSSMPassEnum ePass;                   // 6C?
		ParticleShader_ParticleData*  pParticleData;           // 70
		NiPointer<NiD3DPass>          spParticlePass;          // 74
		NiPointer<NiD3DPass>          spParticlePrePass;       // 78
		NiPointer<NiD3DVertexShader>  spParticleVertexShader;  // 7C
		NiPointer<NiD3DPixelShader>   spParticlePixelShader;   // 80
		float                         fVars[20];               // 84?
		NiPoint3                      Velocity;                // D4?
		NiPoint3                      Acceleration;            // E0?
		NiColorA                      Wind;                    // EC?
		NiColorA                      Color1;                  // FC?
		NiColorA                      Color2;                  // 10C?
		NiColorA                      Color3;                  // 11C?
	};
}
