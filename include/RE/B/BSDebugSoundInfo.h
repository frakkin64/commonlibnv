#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSDebugSoundInfo
	{
	public:
		// members
		char*         pName;                 // 00?
		char          Name[260];             // 04?
		char*         pFileName;             // 108?
		char          FileName[260];         // 10C?
		float         fRadiusMin;            // 210?
		float         fRadiusMax;            // 214?
		NiPoint3      Location;              // 218?
		std::uint32_t iStateFlags;           // 224?
		float         fBeginTime;            // 228?
		float         fEndTime;              // 22C?
		std::uint32_t iStaticAttenuation;    // 230?
		std::uint32_t iSystemAttenuation;    // 234?
		std::uint32_t iDistanceAttenuation;  // 238?
	};
}
