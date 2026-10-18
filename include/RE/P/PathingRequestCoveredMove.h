#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingRequest.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatCoverLocation;
	class CombatCoverSearchInfo;

	class PathingRequestCoveredMove :
		public PathingRequest  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequestCoveredMove };
		static constexpr auto VTABLE{ VTABLE::PathingRequestCoveredMove };

		// override (PathingRequest)
		virtual ~PathingRequestCoveredMove() = default;                       // 00
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07

		PathingRequestCoveredMove* ctor()
		{
			using func_t = PathingRequestCoveredMove*(__thiscall*)(PathingRequestCoveredMove*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestCoveredMove::ctor };
			return func(this);
		}

		PathingRequestCoveredMove* ctor(PathingRequestCoveredMove const& aRequest)
		{
			using func_t = PathingRequestCoveredMove*(__thiscall*)(PathingRequestCoveredMove*, PathingRequestCoveredMove const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestCoveredMove::ctor_1 };
			return func(this, aRequest);
		}

		BSSimpleArray<std::uint32_t, 1024>* GetUnreachableCoverLocations()
		{
			using func_t = decltype(&PathingRequestCoveredMove::GetUnreachableCoverLocations);
			static REL::Relocation<func_t> func{ Offsets::PathingRequestCoveredMove::GetUnreachableCoverLocations };
			return func(this);
		}

	public:
		// members
		float                              fAttackerRadius;            // B0
		float                              fAttackerSpeed;             // B4
		float                              fAttackerHeight;            // B8
		float                              fAttackerSneakHeight;       // BC
		float                              fAttackerHealth;            // C0
		std::int32_t                       iLocationIndex;             // C4
		NiPoint3                           CoverLocation;              // C8
		NiPoint3                           TargetLocation;             // D4
		bool                               bHasTargetLocation;         // E0
		bool                               bFinished;                  // E1
		std::uint16_t                      padE2;                      // E2
		BSSimpleArray<std::uint32_t, 1024> UnreachableCoverLocations;  // E4
		BSSimpleArray<NiPoint3, 1024>      TargetLocations;            // F4
		CombatCoverLocation*               pCombatCoverLocation;       // 104
		CombatCoverSearchInfo*             pCombatCoverSearchInfo;     // 108
	};
	static_assert(sizeof(PathingRequestCoveredMove) == 0x10C);
}
