#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAnimationKey_KeyType.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiAnimationKey
	{
	public:
		using KeyType = NiAnimationKey_KeyType;

		enum class KeyContent : std::int32_t
		{
			kFLOATKEY = 0x0,
			kPOSKEY = 0x1,
			kROTKEY = 0x2,
			kCOLORKEY = 0x3,
			kTEXTKEY = 0x4,
			kBOOLKEY = 0x5,
			kNUMKEYCONTENTS = 0x6,
		};

		// members
		float m_fTime;  // 00?
	};
}
