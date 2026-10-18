#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/P/PathingRequest.h"

namespace RE
{
	class PathingRequestCover :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestCover };
		static constexpr auto VTABLE{ VTABLE::PathingRequestCover };

		// override (PathingRequest)
		virtual ~PathingRequestCover() = default;  // 00

		PathingRequestCover* ctor()
		{
			using func_t = PathingRequestCover*(__thiscall*)(PathingRequestCover*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestCover::ctor };
			return func(this);
		}

		void SetMaxHeightChange(float afHeightChange)
		{
			using func_t = decltype(&PathingRequestCover::SetMaxHeightChange);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestCover::SetMaxHeightChange };
			func(this, afHeightChange);
		}

		void SetThreat(NiPoint3 const& aThreat)
		{
			using func_t = decltype(&PathingRequestCover::SetThreat);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestCover::SetThreat };
			func(this, aThreat);
		}

	public:
		// members
		NiPoint3      Threat;                    // B0
		float         fMaxCoverDistance;         // BC
		float         fActorCrouchHeight;        // C0
		float         fMaxHeightChange;          // C4
		std::uint32_t iMaxResults;               // C8
		bool          bCanCrouch;                // CC
		bool          bFindBothSides;            // CD
		bool          bFindBehindTarget;         // CE
		bool          bSortFarthestFirst;        // CF
		bool          bSortDistanceFromTarget;   // D0
		bool          bHideCover;                // D1
		std::uint16_t padD2;                     // D2
		NiPoint3      DistanceProjectionVector;  // D4
		NiPoint3      ActorLocation;             // E0
	};
	static_assert(sizeof(PathingRequestCover) == 0xEC);
}
