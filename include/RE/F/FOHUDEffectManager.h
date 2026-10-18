#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSMenuPacker.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ImageSpaceShaderParam;
	class NiScreenElements;

	class FOHUDEffectManager
	{
	public:
		FOHUDEffectManager* ctor()
		{
			using func_t = FOHUDEffectManager*(__thiscall*)(FOHUDEffectManager*);
			static REL::Relocation<func_t> func{ Offsets::FOHUDEffectManager::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<NiScreenElements> spPartialScreenGeometry;       // 00
		BGSMenuPacker               Packer;                        // 04
		bool                        bShudderActive;                // 28
		std::uint8_t                pad29[0x3];                    // 29
		float                       fShudderStartTime;             // 2C
		NiPoint2                    ShudderDuration;               // 30
		NiPoint2                    ShudderIntensity;              // 38
		NiPoint2                    ShudderFrequency;              // 40
		NiPoint2                    ShudderCurrentPosition;        // 48
		ImageSpaceShaderParam*      pUnpackShaderParams;           // 50
		bool                        bHideHUD;                      // 54
		std::uint8_t                pad55[0x3];                    // 55
		float                       fCurrentBlurRadiusHUD;         // 58
		float                       fCurrentScanlineFrequencyHUD;  // 5C
		float                       fCurrentBlurIntensityHUD;      // 60
	};
}
