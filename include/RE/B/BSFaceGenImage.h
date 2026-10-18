#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenRGBA.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiPixelFormat;
	class NiSourceTexture;

	class BSFaceGenImage :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenImage };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenImage };

		// override (NiRefObject)
		virtual ~BSFaceGenImage() = default;  // 00

		NiSourceTexture* GetCompressedImage(float afUncompressedMin, float a_arg2, float a_arg3, NiPixelFormat const& afUncompressedMax)
		{
			using func_t = decltype(&BSFaceGenImage::GetCompressedImage);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenImage::GetCompressedImage };
			return func(this, afUncompressedMin, a_arg2, a_arg3, afUncompressedMax);
		}

	public:
		// members
		// not placed: spCompressedImage(absent)
		stl::vector<BSFaceGenRGBA> UncompressedImage;  // 08
		std::uint32_t              iWidth;             // 20
		std::uint32_t              iHeight;            // 24
		std::uint32_t              pad28;              // 28
	};
	static_assert(sizeof(BSFaceGenImage) == 0x2C);
}
