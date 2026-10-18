#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiSourceTexture.h"

namespace RE
{
	class NiSourceCubeMap :
		public NiSourceTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSourceCubeMap };
		static constexpr auto VTABLE{ VTABLE::NiSourceCubeMap };

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
		NiSourceCubeMap::FaceID m_eFace;  // 48?
	};
}
