#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiPixelFormat
	{
	public:
		class NiComponentSpec;

		enum class Component : std::int32_t
		{
			kCOMP_RED = 0x0,
			kCOMP_GREEN = 0x1,
			kCOMP_BLUE = 0x2,
			kCOMP_ALPHA = 0x3,
			kCOMP_COMPRESSED = 0x4,
			kCOMP_OFFSET_U = 0x5,
			kCOMP_OFFSET_V = 0x6,
			kCOMP_OFFSET_W = 0x7,
			kCOMP_OFFSET_Q = 0x8,
			kCOMP_LUMA = 0x9,
			kCOMP_HEIGHT = 0xA,
			kCOMP_VECTOR_X = 0xB,
			kCOMP_VECTOR_Y = 0xC,
			kCOMP_VECTOR_Z = 0xD,
			kCOMP_PADDING = 0xE,
			kCOMP_INTENSITY = 0xF,
			kCOMP_INDEX = 0x10,
			kCOMP_DEPTH = 0x11,
			kCOMP_STENCIL = 0x12,
			kCOMP_EMPTY = 0x13,
			kCOMP_MAX = 0x14,
			kNUM_COMPS = 0x4,
		};

		enum class Format : std::int32_t
		{
			kFORMAT_RGB = 0x0,
			kFORMAT_RGBA = 0x1,
			kFORMAT_PAL = 0x2,
			kFORMAT_PALALPHA = 0x3,
			kFORMAT_DXT1 = 0x4,
			kFORMAT_DXT3 = 0x5,
			kFORMAT_DXT5 = 0x6,
			kFORMAT_RGB24NONINTERLEAVED = 0x7,
			kFORMAT_BUMP = 0x8,
			kFORMAT_BUMPLUMA = 0x9,
			kFORMAT_RENDERERSPECIFIC = 0xA,
			kFORMAT_ONE_CHANNEL = 0xB,
			kFORMAT_TWO_CHANNEL = 0xC,
			kFORMAT_THREE_CHANNEL = 0xD,
			kFORMAT_FOUR_CHANNEL = 0xE,
			kFORMAT_DEPTH_STENCIL = 0xF,
			kFORMAT_UNKNOWN = 0x10,
			kFORMAT_MAX = 0x11,
		};

		enum class Representation : std::int32_t
		{
			kREP_FIXED = 0x0,
			kREP_HALF = 0x1,
			kREP_FLOAT = 0x2,
			kREP_INDEX = 0x3,
			kREP_COMPRESSED = 0x4,
			kREP_UNKNOWN = 0x5,
			kREP_MAX = 0x6,
		};

		class NiComponentSpec
		{
		public:
			// members
			NiPixelFormat::Component      m_eComponent;          // 00?
			NiPixelFormat::Representation m_eRepresentation;     // 04?
			std::uint8_t                  m_ucBitsPerComponent;  // 08?
			bool                          m_bSigned;             // 09?
			std::uint16_t                 pad0A;                 // 0A
		};

		// members
		std::uint8_t                   m_uFlags;           // 00?
		std::uint8_t                   m_ucBitsPerPixel;   // 01
		std::uint16_t                  pad02;              // 02
		NiPixelFormat::Format          m_eFormat;          // 04
		std::uint32_t                  m_eTiling;          // 08
		std::uint32_t                  m_uiRendererHint;   // 0C
		std::uint32_t                  m_uiExtraData;      // 10
		NiPixelFormat::NiComponentSpec m_akComponents[4];  // 14
	};
}
