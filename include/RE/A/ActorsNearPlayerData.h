#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;

	class ActorsNearPlayerData
	{
	public:
		// members
		Actor*        pActor;                       // 00
		bool          bHostile;                     // 04?
		bool          bHasLineofSightNotDetection;  // 05?
		std::uint16_t pad06;                        // 06
	};
}
