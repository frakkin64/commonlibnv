#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/S/StatsMenu_BodyPartController_BodyPartIndex.h"

namespace RE
{
	class Tile;

	class StatsMenu_BodyPartController
	{
	public:
		using BodyPartIndex = StatsMenu_BodyPartController_BodyPartIndex;

		static StatsMenu_BodyPartController* GetInstance()
		{
			using func_t = decltype(&StatsMenu_BodyPartController::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_BodyPartController::GetInstance };
			return func();
		}

		void SetCurrentBodyPart(StatsMenu_BodyPartController_BodyPartIndex aeBodyPart, bool abFlash)
		{
			using func_t = decltype(&StatsMenu_BodyPartController::SetCurrentBodyPart);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu_BodyPartController::SetCurrentBodyPart };
			func(this, aeBodyPart, abFlash);
		}

	public:
		// members
		StatsMenu_BodyPartController_BodyPartIndex eCurrentBodyPart;      // 00
		BSSimpleList<Tile*>                        listFlashingTiles[6];  // 04?
		std::uint32_t                              pBodyPartMapA[6];      // 34?
	};
}
