#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSImpactData;
	class BSTempEffectParticle;

	class BGSDecalEmitter
	{
	public:
		void Update()
		{
			using func_t = decltype(&BGSDecalEmitter::Update);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalEmitter::Update };
			func(this);
		}

	public:
		// members
		std::int32_t                    iDecalsToEmit;     // 00?
		bool                            bFinished;         // 04
		std::uint8_t                    pad05[0x3];        // 05
		BGSImpactData*                  pDecalImpactData;  // 08
		NiPointer<BSTempEffectParticle> spParticleData;    // 0C
	};
}
