#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/S/SOUND_MSG.h"

namespace RE
{
	class NiAVObject;

	// not confirmed: no named code in the executable refers to this type
	class BSSoundMessage
	{
	public:
		// members
		SOUND_MSG             msg;     // 00?
		std::int32_t          iID;     // 04?
		std::int32_t          iData;   // 08?
		void*                 pData;   // 0C?
		NiPointer<NiAVObject> spData;  // 10?
		union
		{
			float vector3[3];
			std::uint16_t curve[5];
		} ___u5;  // 14?
	};
}
