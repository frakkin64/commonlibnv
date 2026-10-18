#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/I/ItemChange.h"

namespace RE
{
	class ContainerObject;

	class InventoryIterator
	{
	public:
		InventoryIterator* ctor()
		{
			using func_t = InventoryIterator*(__thiscall*)(InventoryIterator*);
			static REL::Relocation<func_t> func{ Offsets::InventoryIterator::ctor };
			return func(this);
		}

	public:
		// members
		ItemChange                      TempItemChange;        // 00
		BSSimpleList<ContainerObject*>* pContainerObjectList;  // 0C
		BSSimpleList<ItemChange*>*      pInventoryChangeList;  // 10
		bool                            bFinished;             // 14
		std::uint8_t                    pad15[0x3];            // 15
	};
}
