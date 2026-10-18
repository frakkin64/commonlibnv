#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/C/COMBAT_WORLD_STATE.h"

namespace RE
{
	class CombatWorldState;

	class CombatWorldStateList :
		public BSSimpleList<CombatWorldState*>  // 00
	{
	public:
		CombatWorldStateList* GetNext()
		{
			using func_t = decltype(&CombatWorldStateList::GetNext);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateList::GetNext };
			return func(this);
		}

		void RemoveWorldState(COMBAT_WORLD_STATE aeState)
		{
			using func_t = decltype(&CombatWorldStateList::RemoveWorldState);
			static REL::Relocation<func_t> func{ Offsets::CombatWorldStateList::RemoveWorldState };
			func(this, aeState);
		}
	};
}
