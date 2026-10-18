#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class TESBoundObject;

	class DismemberedLimb
	{
	public:
		DismemberedLimb* ctor()
		{
			using func_t = DismemberedLimb*(__thiscall*)(DismemberedLimb*);
			static REL::Relocation<func_t> func{ Offsets::DismemberedLimb::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t                         cLimb;                  // 00
		bool                                 bLimbExploded;          // 01
		bool                                 bObjectArrayIdentical;  // 02
		bool                                 bLimbRemoved;           // 03
		BSSimpleArray<TESBoundObject*, 1024> ObjectArray;            // 04
	};
	static_assert(sizeof(DismemberedLimb) == 0x14);
}
