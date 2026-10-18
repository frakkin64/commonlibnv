#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColorA.h"
#include "RE/N/NiPSysData.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSStripPSysData :
		public NiPSysData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSStripPSysData };
		static constexpr auto VTABLE{ VTABLE::BSStripPSysData };

		class PointData;
		class StripData;

		class PointData
		{
		public:
			// members
			NiPoint3 kPoint;      // 00?
			NiPoint3 kVertex[4];  // 0C?
			NiPoint3 kDir;        // 3C?
			NiPoint3 kNormal[2];  // 48?
			NiPoint3 kVelocity;   // 60?
			NiColorA kColor;      // 6C?
			float    fSize;       // 7C?
			float    fRadii;      // 80?
		};

		class StripData
		{
		public:
			// members
			BSStripPSysData::PointData* pPointList;           // 00?
			std::uint16_t               usPointCount;         // 04?
			std::uint16_t               usHighestPointCount;  // 06?
			std::int32_t                iStartIndex;          // 08?
			std::int32_t                iStopIndex;           // 0C?
			std::int32_t                usMaxPointCount;      // 10?
			std::int32_t                iFirstIndex;          // 14?
			std::int32_t                iLastIndex;           // 18?
			float                       fLastTime;            // 1C?
		};

		// members
		BSStripPSysData::StripData* pStripList;       // 7C
		std::uint16_t               usMaxPointCount;  // 80
		std::uint16_t               pad82;            // 82
		float                       fStartCapSize;    // 84
		float                       fEndCapSize;      // 88
		bool                        bDoZPrePass;      // 8C
		std::uint8_t                pad8D[0x3];       // 8D
	};
}
