#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderedTexture.h"

namespace RE
{
	class Ni2DBuffer;

	class NiRenderedCubeMap :
		public NiRenderedTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRenderedCubeMap };
		static constexpr auto VTABLE{ VTABLE::NiRenderedCubeMap };

		enum class FaceID : std::int32_t
		{
			kFACE_POS_X = 0x0,
			kFACE_NEG_X = 0x1,
			kFACE_POS_Y = 0x2,
			kFACE_NEG_Y = 0x3,
			kFACE_POS_Z = 0x4,
			kFACE_NEG_Z = 0x5,
			kFACE_NUM = 0x6,
		};

		// members
		NiRenderedCubeMap::FaceID m_eFace;              // 48?
		NiPointer<Ni2DBuffer>     m_aspFaceBuffers[6];  // 4C
	};
}
