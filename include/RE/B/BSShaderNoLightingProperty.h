#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"

namespace RE
{
	class NiTexture;

	class BSShaderNoLightingProperty :
		public BSShaderProperty  // 00
	{
	public:
		void SetBaseMap(NiTexture* apBaseMap)
		{
			using func_t = decltype(&BSShaderNoLightingProperty::SetBaseMap);
			static REL::Relocation<func_t> func{ Offsets::BSShaderNoLightingProperty::SetBaseMap };
			func(this, apBaseMap);
		}

	public:
		// members
		NiPointer<NiTexture>          spBaseMap;         // 60
		BSStringT<char>               TextureFilename;   // 64
		NiTexturingProperty_ClampMode TextureClampMode;  // 6C
		NiColorA                      FalloffData;       // 70
	};
}
