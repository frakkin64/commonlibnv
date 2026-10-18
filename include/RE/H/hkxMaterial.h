#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkRefVariant.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkxAttributeHolder.h"

namespace RE
{
	class alignas(16) hkxMaterial :
		public hkxAttributeHolder  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMaterial };
		static constexpr auto VTABLE{ VTABLE::hkxMaterial };

		class TextureStage;

		enum class TextureType : std::int32_t
		{
			kTEX_UNKNOWN = -1,
			kTEX_HDR_FIRST = 0x0,
			kTEX_HDR_DOWNSAMPLE = 0x0,
			kTEX_HDR_DOWNSAMPLE_ANISOINTERMEDIATE = 0x1,
			kTEX_HDR_BLURSWAP = 0x2,
			kTEX_HDR_LAST = 0x2,
			kTEX_IMAGESPACE_FIRST = 0x3,
			kTEX_IMAGESPACE_SWAP = 0x3,
			kTEX_IMAGESPACE_LAST = 0x3,
			kTEX_MAIN_FIRST = 0x4,
			kTEX_MAIN_IMAGESPACE = 0x4,
			kTEX_MAIN_FIRSTPERSON = 0x5,
			kTEX_MAIN_MENUBG = 0x6,
			kTEX_MAIN_LAST = 0x6,
			kTEX_TESWATER_FIRST = 0x7,
			kTEX_TESWATER_FFT = 0x7,
			kTEX_TESWATER_GREY = 0x8,
			kTEX_TESWATER_REFLECTION = 0x9,
			kTEX_TESWATER_LOD_REFLECTION = 0xA,
			kTEX_TESWATER_REFRACTION = 0xB,
			kTEX_TESWATER_RAIN = 0xC,
			kTEX_TESWATER_SCRAMBLEMAP = 0xD,
			kTEX_TESWATER_IFFT_BUTTERFLYMAP = 0xE,
			kTEX_TESWATER_HIGH_W = 0xF,
			kTEX_TESWATER_HIGH_AMPLITUDE = 0x10,
			kTEX_TESWATER_DEPTH = 0x11,
			kTEX_TESWATER_NOISE_HEIGHTMAP = 0x12,
			kTEX_TESWATER_NOISE_NORMALMAP = 0x13,
			kTEX_TESWATER_DISPLACEMENT = 0x14,
			kTEX_TESWATER_DEBUG_DISPLAY = 0x15,
			kTEX_TESWATER_LAST = 0x15,
			kTEX_TREES_FIRST = 0x16,
			kTEX_TREES_CANOPYSHADOWMASK = 0x16,
			kTEX_TREES_LAST = 0x16,
			kTEX_BLUR_FIRST = 0x17,
			kTEX_BLURFULL_BUFFER = 0x17,
			kTEX_BLURFULL_SWAP = 0x18,
			kTEX_BLUR_LAST = 0x18,
			kTEX_BLUR20_FIRST = 0x19,
			kTEX_BLUR20_BUFFER = 0x19,
			kTEX_BLUR20_LAST = 0x19,
			kTEX_GETHIT_FIRST = 0x1A,
			kTEX_GETHIT_BUFFER = 0x1A,
			kTEX_GETHIT_LAST = 0x1A,
			kTEX_LOCALMAP_FIRST = 0x1B,
			kTEX_LOCALMAP_FINAL = 0x1B,
			kTEX_LOCALMAP_COLOR = 0x1C,
			kTEX_LOCALMAP_NORMALS = 0x1D,
			kTEX_LOCALMAP_LAST = 0x1D,
			kTEX_REFRACTION_FIRST = 0x1E,
			kTEX_REFRACTION_NORMALS = 0x1E,
			kTEX_REFRACTION_LAST = 0x1E,
			kTEX_VFOG_FIRST = 0x1F,
			kTEX_VFOG = 0x1F,
			kTEX_SCENE_DEPTH_BUFFER = 0x20,
			kTEX_VFOG_SWAP = 0x21,
			kTEX_VFOG_LAST = 0x21,
			kTEX_VELOCITY_FIRST = 0x22,
			kTEX_VELOCITY = 0x22,
			kTEX_VELOCITY_SWAP = 0x23,
			kTEX_VELOCITY_LAST = 0x23,
			kTEX_DOF_FIRST = 0x24,
			kTEX_DOF_BLUR = 0x24,
			kTEX_DOF_BLUR_SWAP = 0x25,
			kTEX_DOF_MASK = 0x26,
			kTEX_DOF_LAST = 0x26,
			kTEX_DEPTH_RADIALBLUR_FIRST = 0x27,
			kTEX_DEPTH_RADIALBLUR_BLUR = 0x27,
			kTEX_DEPTH_RADIALBLUR_LAST = 0x27,
			kTEX_CUBEMAP_FIRST = 0x28,
			kTEX_CUBEMAP_CAMERA = 0x28,
			kTEX_CUBEMAP_LAST = 0x28,
			kTEX_SHADOWS_FIRST = 0x29,
			kTEX_SHADOWS_SHADOWMAP = 0x29,
			kTEX_SHADOWS_SHADOWMAPFRUSTUM = 0x2A,
			kTEX_SHADOWS_LAST = 0x2A,
			kTEX_ENVMAP_FIRST = 0x2B,
			kTEX_ENVMAP_WINDOWS = 0x2B,
			kTEX_ENVMAP_LAST = 0x2B,
			kTEX_INTERFACE_FIRST = 0x2C,
			kTEX_INTERFACE_RENDEREDMENU = 0x2C,
			kTEX_INTERFACE_RENDEREDMENU_SWAP = 0x2D,
			kTEX_INTERFACE_VATS = 0x2E,
			kTEX_INTERFACE_RACESEXMENU = 0x2F,
			kTEX_INTERFACE_TEMP = 0x30,
			kTEX_INTERFACE_LAST = 0x30,
			kTEX_NOISE_FIRST = 0x31,
			kTEX_NOISE_BUFFER = 0x31,
			kTEX_NOISE_LAST = 0x31,
			kTEX_DECAL_FIRST = 0x32,
			kTEX_DECAL_OCCLUSION = 0x32,
			kTEX_DECAL_LAST = 0x32,
			kTEX_COUNT = 0x33,
		};

		class TextureStage
		{
		public:
			// members
			hkRefVariant                                   m_texture;        // 00
			hkEnum<hkxMaterial::TextureType, std::int32_t> m_usageHint;      // 04?
			std::int32_t                                   m_tcoordChannel;  // 08?
		};

		// override (hkxAttributeHolder)
		virtual ~hkxMaterial() = default;  // 00

		// members
		hkStringPtr                                                  m_name;           // 14?
		hkArray<hkxMaterial::TextureStage, hkContainerHeapAllocator> m_stages;         // 18?
		std::uint8_t                                                 pad24[0xC];       // 24
		hkVector4                                                    m_diffuseColor;   // 30?
		hkVector4                                                    m_ambientColor;   // 40?
		hkVector4                                                    m_specularColor;  // 50?
		hkVector4                                                    m_emissiveColor;  // 60?
		hkArray<hkRefPtr<hkxMaterial>, hkContainerHeapAllocator>     m_subMaterials;   // 70?
		hkRefVariant                                                 m_extraData;      // 7C?
	};
}
