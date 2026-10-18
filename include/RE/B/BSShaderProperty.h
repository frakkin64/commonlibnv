#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty_RenderPass.h"
#include "RE/B/BSShaderProperty_TextureTypeEnum.h"
#include "RE/N/NiShadeProperty.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiAVObject;

	class BSShaderProperty :
		public NiShadeProperty  // 00
	{
	public:
		using RenderPass = BSShaderProperty_RenderPass;
		using TextureTypeEnum = BSShaderProperty_TextureTypeEnum;

		class RenderPassArray;

		enum class EShaderPropertyFlag : std::int32_t
		{
			kBSSP_SPECULAR = 0x0,
			kBSSP_SKINNED = 0x1,
			kBSSP_LOWDETAIL = 0x2,
			kBSSP_VERTEX_ALPHA = 0x3,
			kBSSP_MOTION_BLUR = 0x4,
			kBSSP_SINGLEPASS = 0x5,
			kBSSP_FALLOFF = 0x6,
			kBSSP_ENVMAP = 0x7,
			kBSSP_ALPHATEX = 0x8,
			kBSSP_ZPREPASS = 0x9,
			kBSSP_FLAG_FACEGENBLEND = 0xA,
			kBSSP_FLAG_PARALLAX = 0xB,
			kBSSP_FLAG_MODELSPACENORMALS = 0xC,
			kBSSP_FLAG_NOPROJSHADOW = 0xD,
			kBSSP_FLAG_LANDSCAPE = 0xE,
			kBSSP_FLAG_REFRACTION = 0xF,
			kBSSP_FLAG_REFRACTION_FIRE = 0x10,
			kBSSP_FLAG_EYEREFLECT = 0x11,
			kBSSP_FLAG_HAIR = 0x12,
			kBSSP_FLAG_DYNAMICALPHA = 0x13,
			kBSSP_FLAG_LOCALMAP_CLEAR = 0x14,
			kBSSP_FLAG_WINDOWREFLECT = 0x15,
			kBSSP_FLAG_BILLBOARDTREE = 0x16,
			kBSSP_FLAG_SHADOWFRUSTUM = 0x17,
			kBSSP_FLAG_MULTIPLE_TEXTURES = 0x18,
			kBSSP_FLAG_REMAP_TEXTURES = 0x19,
			kBSSP_FLAG_DECAL = 0x1A,
			kBSSP_FLAG_DYNAMIC_DECAL = 0x1B,
			kBSSP_FLAG_PARALLAXOCCLUSION = 0x1C,
			kBSSP_FLAG_EXTERNAL_EMITTANCE = 0x1D,
			kBSSP_FLAG_SHADOWMAP = 0x1E,
			kBSSP_FLAG_ZBUFFER_TEST = 0x1F,
			kBSSP_FLAG_ZBUFFER_WRITE = 0x20,
			kBSSP_FLAG_LODLANDSCAPE = 0x21,
			kBSSP_FLAG_LODBUILDING = 0x22,
			kBSSP_FLAG_NOFADE = 0x23,
			kBSSP_FLAG_REFRACTION_TINT = 0x24,
			kBSSP_FLAG_VERTEXCOLORS = 0x25,
			kBSSP_1ST_PERSON = 0x26,
			kHSP_FLAG_PTFIRST = 0x27,
			kHSP_FLAG_2NDLIGHT = 0x28,
			kHSP_FLAG_3RDLIGHT = 0x29,
			kTGSP_FLAG_VERTEX_LIGHTING = 0x2A,
			kTGSP_FLAG_UNIFORM_SCALE = 0x2B,
			kTGSP_FLAG_FIT_SLOPE = 0x2C,
			kTGSP_FLAG_BILLBOARD = 0x2D,
			kBSSP_FLAG_SKIP_LANDLO_PASS = 0x2E,
			kBSSP_FLAG_ENVMAP_LIGHTFADE = 0x2F,
			kBSSP_FLAG_WIREFRAME = 0x30,
			kBSSP_FLAG_VATS_SELECTION = 0x31,
			kBSSP_FLAG_SHOW_IN_LOCAL_MAP = 0x32,
			kBSSP_FLAG_PREMULT_ALPHA = 0x33,
			kBSSP_FLAG_SKIP_NORMAL_MAPS = 0x34,
			kBSSP_FLAG_ALPHA_DECAL = 0x35,
			kBSSP_FLAG_NO_TRANSPARENCY_MULTISAMPLING = 0x36,
			kBSSP_FLAG_STINGER = 0x37,
			kBSSP_FLAG_COUNT = 0x38,
		};

		class RenderPassArray
		{
		public:
			// members
			NiTObjectArray<BSShaderProperty_RenderPass*> pPassA;  // 00?
			std::uint32_t                                iSize;   // 10?
		};

		void SetFlag(std::uint32_t aiFlag, bool abSetFlag)
		{
			using func_t = decltype(&BSShaderProperty::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::BSShaderProperty::SetFlag };
			func(this, aiFlag, abSetFlag);
		}

		bool GetFlag(std::uint32_t aiFlag) const
		{
			using func_t = decltype(&BSShaderProperty::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::BSShaderProperty::GetFlag };
			return func(this, aiFlag);
		}

		void SetAlpha(float afAlpha)
		{
			using func_t = decltype(&BSShaderProperty::SetAlpha);
			static REL::Relocation<func_t> func{ Offsets::BSShaderProperty::SetAlpha };
			func(this, afAlpha);
		}

		static void SetFlagRecurse(NiAVObject* apObject, BSShaderProperty::EShaderPropertyFlag aeFlag, bool abEnable)
		{
			using func_t = decltype(&BSShaderProperty::SetFlagRecurse);
			static REL::Relocation<func_t> func{ Offsets::BSShaderProperty::SetFlagRecurse };
			func(apObject, aeFlag, abEnable);
		}

	public:
		// members
		std::uint32_t                      ulFlags[2];                 // 20
		float                              fAlpha;                     // 28
		float                              fFadeAlpha;                 // 2C
		float                              fEnvmapScale;               // 30
		float                              fCameraDistance;            // 34
		std::int32_t                       iLastRenderPassState;       // 38
		BSShaderProperty::RenderPassArray* pRenderPassList;            // 3C
		BSShaderProperty::RenderPassArray* pDepthMapRenderPassList;    // 40
		BSShaderProperty::RenderPassArray* pConstAlphaRenderPassList;  // 44
		BSShaderProperty::RenderPassArray* pLocalMapRenderPassList;    // 48
		BSShaderProperty::RenderPassArray* pSIBlockRenderPassList;     // 4C
		BSShaderProperty::RenderPassArray* pWaterFogRenderPassList;    // 50
		BSShaderProperty::RenderPassArray* pSilhouettePassList;        // 54
		std::int32_t                       iShader;                    // 58
		float                              fDepthBias;                 // 5C
	};
	static_assert(sizeof(BSShaderProperty) == 0x60);
}
