#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingCoverLocation.h"
#include "RE/P/PathingRequestCover.h"
#include "RE/T/TESPackage.h"

namespace RE
{
	class Actor;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class SearchPackage :
		public TESPackage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SearchPackage };
		static constexpr auto VTABLE{ VTABLE::SearchPackage };

		// override (TESPackage)
		virtual ~SearchPackage() = default;  // 04

		void FindCoverToSearch(NiPoint3 apDest, NiPoint3 pworld, TESObjectCELL* a_arg3, TESWorldSpace* a_arg4)
		{
			using func_t = decltype(&SearchPackage::FindCoverToSearch);
			static REL::Relocation<func_t> func{ Offsets::SearchPackage::FindCoverToSearch };
			func(this, apDest, pworld, a_arg3, a_arg4);
		}

		NiPoint3 CalculateLocationToExamine(Actor* result)
		{
			using func_t = decltype(&SearchPackage::CalculateLocationToExamine);
			static REL::Relocation<func_t> func{ Offsets::SearchPackage::CalculateLocationToExamine };
			return func(this, result);
		}

	public:
		// members
		float                                     fSearchStageTimer;  // 80
		std::int32_t                              iAlertLevel;        // 84
		float                                     fCommentTimer;      // 88
		std::int32_t                              iCurrentCover;      // 8C
		float                                     fIdleTimer;         // 90
		NiPoint3                                  LocationCenter;     // 94
		TESObjectREFR*                            pThreatObject;      // A0
		bool                                      bLocationStart;     // A4
		std::uint8_t                              padA5[0x3];         // A5
		PathingRequestCover                       coverRequest;       // A8
		BSSimpleArray<PathingCoverLocation, 1024> coverPoints;        // 194?
	};
}
