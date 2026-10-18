#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderLightingProperty.h"
#include "RE/B/BSShaderPPLightingProperty_TextureEffectData.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSShaderProperty_RenderPass;
	class BSTextureSet;
	class NiAVObject;
	class NiGeometry;
	class NiPoint3;
	class NiTexture;
	class ShadowSceneLight;

	class BSShaderPPLightingProperty :
		public BSShaderLightingProperty  // 00
	{
	public:
		using TextureEffectData = BSShaderPPLightingProperty_TextureEffectData;

		class TangentSpaceData;

		class TangentSpaceData :
			public NiRefObject  // 00
		{
		public:
			// members
			bool         bOwnsMemory;         // 08?
			std::uint8_t pad09[0x3];          // 09
			NiPoint3*    pTangentExtraData;   // 0C?
			NiPoint3*    pBinormalExtraData;  // 10?
		};

		NiTexture* GetNormalTexture(std::uint32_t aiIndex)
		{
			using func_t = decltype(&BSShaderPPLightingProperty::GetNormalTexture);
			static REL::Relocation<func_t> func{ Offsets::BSShaderPPLightingProperty::GetNormalTexture };
			return func(this, aiIndex);
		}

		void SetTextureEffectData(BSShaderPPLightingProperty_TextureEffectData* apData)
		{
			using func_t = decltype(&BSShaderPPLightingProperty::SetTextureEffectData);
			static REL::Relocation<func_t> func{ Offsets::BSShaderPPLightingProperty::SetTextureEffectData };
			func(this, apData);
		}

		static void SetRefractionRecurse(NiAVObject* apObject, bool abEnable, float a_arg3, bool a_arg4, float abFire, bool a_arg6)
		{
			using func_t = decltype(&BSShaderPPLightingProperty::SetRefractionRecurse);
			static REL::Relocation<func_t> func{ Offsets::BSShaderPPLightingProperty::SetRefractionRecurse };
			func(apObject, abEnable, a_arg3, a_arg4, abFire, a_arg6);
		}

	protected:
		BSShaderProperty_RenderPass* AddTexturePass_1x(NiGeometry* apGeom, ShadowSceneLight* apLight, std::uint16_t& asCount, bool abUpdateList, bool& abFirst, bool abSkinned, bool abMultitexture, bool abFacegenBlend, bool abVertexColors, bool abTreeBranch, bool abHair)
		{
			using func_t = decltype(&BSShaderPPLightingProperty::AddTexturePass_1x);
			static REL::Relocation<func_t> func{ Offsets::BSShaderPPLightingProperty::AddTexturePass_1x };
			return func(this, apGeom, apLight, asCount, abUpdateList, abFirst, abSkinned, abMultitexture, abFacegenBlend, abVertexColors, abTreeBranch, abHair);
		}

	public:
		// members
		// not placed: usLandscapeTextures, pbGlossMap, spTangentSpaceData, pTextureSplatVertexData, TextureClampMode
		float                                                   fWaterDepthCameraOffset;  // 7C?
		float                                                   fGeomorphParam;           // 80?
		NiColorA                                                pHairTintColor;           // 84?
		NiColorA                                                LandBlendParamsA;         // 94?
		NiPointer<BSTextureSet>                                 spTextureSet;             // A4?
		std::uint8_t                                            padA8[0x8];               // A8
		std::uint16_t                                           iTextureCount;            // B0
		std::uint16_t                                           padB2;                    // B2
		NiPointer<NiTexture>*                                   spTextures[7];            // B4
		std::uint8_t*                                           pSpecularExponent;        // D0
		std::uint8_t                                            padD4[0x8];               // D4
		NiPointer<BSShaderPPLightingProperty_TextureEffectData> spTexEffectData;          // DC
		float                                                   fRefractionPower;         // E0
		std::int32_t                                            iRefractionFirePeriod;    // E4
		float                                                   fParallaxOccMaxPasses;    // E8?
		float                                                   fParallaxOccScale;        // EC?
		float                                                   fTerrainTexOffsetX;       // F0?
		float                                                   fTerrainTexOffsetY;       // F4?
		float                                                   fTerrainTexFade;          // F8?
		float                                                   fTerrainDetailTexScale;   // FC?
		BSShaderProperty_RenderPass*                            pRenderDepthPass;         // 100?
	};
}
