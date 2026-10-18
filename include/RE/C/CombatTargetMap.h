#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class Actor;
	class CombatTargetData;

	class CombatTargetMap :
		public NiTMap<Actor*, CombatTargetData*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatTargetMap };
		static constexpr auto VTABLE{ VTABLE::CombatTargetMap };

		// override (NiTMap<Actor*, CombatTargetData*>)
		virtual ~CombatTargetMap() = default;  // 00

		CombatTargetMap* ctor()
		{
			using func_t = CombatTargetMap*(__thiscall*)(CombatTargetMap*);
			static REL::Relocation<func_t> func{ Offsets::CombatTargetMap::ctor };
			return func(this);
		}

		void AddTargetAttacker(Actor* apTarget, Actor* apAttacker)
		{
			using func_t = decltype(&CombatTargetMap::AddTargetAttacker);
			static REL::Relocation<func_t> func{ Offsets::CombatTargetMap::AddTargetAttacker };
			func(this, apTarget, apAttacker);
		}
	};
	static_assert(sizeof(CombatTargetMap) == 0x10);
}
