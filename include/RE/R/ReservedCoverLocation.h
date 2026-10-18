#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/C/CoverReservation.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class CombatController;
	class NiNode;

	class ReservedCoverLocation
	{
	public:
		bool CanReserveCoverLocation(CombatController* apCombatController)
		{
			using func_t = decltype(&ReservedCoverLocation::CanReserveCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::ReservedCoverLocation::CanReserveCoverLocation };
			return func(this, apCombatController);
		}

	public:
		// members
		BSSimpleArray<CoverReservation, 1024> Reservations;     // 00?
		std::uint32_t                         iReservations;    // 10?
		std::uint8_t                          cSegmentLength;   // 14?
		std::uint8_t                          cSegmentCount;    // 15?
		std::uint8_t                          cCoverHeight;     // 16?
		std::uint8_t                          pad17;            // 17
		NiPointer<NiNode>                     spDebugGeometry;  // 18?
	};
}
