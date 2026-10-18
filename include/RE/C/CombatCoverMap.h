#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSReadWriteLock.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class CombatController;
	class CombatCoverLocation;
	class CoverReservationInfo;
	class NiNode;
	class PathingCoverLocation;
	class ReservedCoverLocation;

	class CombatCoverMap :
		public NiTMap<std::uint32_t, ReservedCoverLocation*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatCoverMap };
		static constexpr auto VTABLE{ VTABLE::CombatCoverMap };

		// override (NiTMap<std::uint32_t, ReservedCoverLocation*>)
		virtual ~CombatCoverMap() = default;  // 00

		CombatCoverMap* ctor()
		{
			using func_t = CombatCoverMap*(__thiscall*)(CombatCoverMap*);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverMap::ctor };
			return func(this);
		}

		void UnreserveCoverLocation(CombatController* apCombatController, CombatCoverLocation* apCombatCoverLocation)
		{
			using func_t = decltype(&CombatCoverMap::UnreserveCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverMap::UnreserveCoverLocation };
			func(this, apCombatController, apCombatCoverLocation);
		}

		bool CanReserveCoverLocation(std::uint32_t aiKey, PathingCoverLocation* apCoverLocation, CombatController* apCombatController, float a_arg4, CoverReservationInfo* a_arg5, bool apReservationInfo, bool abHideCover)
		{
			using func_t = decltype(&CombatCoverMap::CanReserveCoverLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverMap::CanReserveCoverLocation };
			return func(this, aiKey, apCoverLocation, apCombatController, a_arg4, a_arg5, apReservationInfo, abHideCover);
		}

		void UnlockForWrite()
		{
			using func_t = decltype(&CombatCoverMap::UnlockForWrite);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverMap::UnlockForWrite };
			func(this);
		}

		void LockForWrite()
		{
			using func_t = decltype(&CombatCoverMap::LockForWrite);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverMap::LockForWrite };
			func(this);
		}

	public:
		// members
		NiPointer<NiNode> spCoverSearchDebugGeometry;  // 10
		BSReadWriteLock   Lock;                        // 14
	};
	static_assert(sizeof(CombatCoverMap) == 0x1C);
}
