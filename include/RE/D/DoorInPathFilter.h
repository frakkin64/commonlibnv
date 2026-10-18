#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshEdgeHandle.h"
#include "RE/P/Pathing_CheckLineOfSightFilter.h"

namespace RE
{
	class DoorInPathFilter :
		public Pathing_CheckLineOfSightFilter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DoorInPathFilter };
		static constexpr auto VTABLE{ VTABLE::DoorInPathFilter };

		// override (Pathing_CheckLineOfSightFilter)
		virtual bool CanCrossEdge(FastNavMeshEdgeHandle a_arg1, FastNavMeshEdgeHandle a_arg2) override;  // 00

		DoorInPathFilter* ctor(std::uint32_t aDoor)
		{
			using func_t = DoorInPathFilter*(__thiscall*)(DoorInPathFilter*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::DoorInPathFilter::ctor };
			return func(this, aDoor);
		}

	public:
		// members
		std::uint32_t DoorID;             // 04
		bool          bEnterTriWithDoor;  // 08
		bool          bLeaveTriWithDoor;  // 09
		bool          bEntirePathInDoor;  // 0A
		std::uint8_t  pad0B;              // 0B
	};
}
