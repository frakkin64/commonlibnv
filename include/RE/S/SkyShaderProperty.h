#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/B/BSStringT.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"

namespace RE
{
	class NiFixedString;
	class NiTexture;

	class SkyShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		void SetBaseMap(NiTexture* apBaseMap)
		{
			using func_t = decltype(&SkyShaderProperty::SetBaseMap);
			static REL::Relocation<func_t> func{ Offsets::SkyShaderProperty::SetBaseMap };
			func(this, apBaseMap);
		}

		void SetTextureFile(NiFixedString const& aFilename)
		{
			using func_t = decltype(&SkyShaderProperty::SetTextureFile);
			static REL::Relocation<func_t> func{ Offsets::SkyShaderProperty::SetTextureFile };
			func(this, aFilename);
		}

	public:
		// members
		NiColorA                      VertexColor;       // 60
		NiPointer<NiTexture>          spBaseMap;         // 70
		BSStringT<char>               TextureFilename;   // 74
		NiTexturingProperty_ClampMode TextureClampMode;  // 7C
		NiPointer<NiTexture>          spBlendTexture;    // 80
		float                         fBlendValue;       // 84
		std::uint16_t                 usCloudLayer;      // 88
		std::uint16_t                 pad8A;             // 8A
		std::int32_t                  soType;            // 8C
	};
}
