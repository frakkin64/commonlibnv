#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/P/PathingInfoItem.h"
#include "RE/T/TeleportPath.h"

namespace RE
{
	class NavMeshInfo;
	class TESObjectREFR;

	class PathingInfo
	{
	public:
		// members
		BSSimpleArray<PathingInfoItem, 1024>    Items;              // 00
		std::uint32_t                           iInfoFlags;         // 10?
		BSSimpleArray<NavMeshInfo const*, 1024> BestInfoPath;       // 14?
		BSSimpleArray<TESObjectREFR*, 1024>     BestInfoPathDoors;  // 24?
		TeleportPath                            BestTeleportPath;   // 34?
	};
}
