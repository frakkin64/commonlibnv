#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiFogProperty.h"
#include "RE/N/NiPlane.h"

namespace RE
{
	class BSFogProperty :
		public NiFogProperty  // 00
	{
	public:
		// members
		float   fStartDistance;       // 2C
		float   fEndDistance;         // 30
		float   fStartWaterDistance;  // 34?
		float   fEndWaterDistance;    // 38?
		NiPlane kPlane;               // 3C?
		float   fFalloff;             // 4C?
		float   fHeight;              // 50?
		NiColor kWaterColor;          // 54?
		float   fPower;               // 60?
	};
}
