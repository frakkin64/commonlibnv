#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObjectNET_CopyType.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class NiObject;

	class NiCloningProcess
	{
	public:
		NiCloningProcess* ctor(std::uint32_t uiHashSize)
		{
			using func_t = NiCloningProcess*(__thiscall*)(NiCloningProcess*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::NiCloningProcess::ctor };
			return func(this, uiHashSize);
		}

	public:
		// members
		NiTPointerMap<NiObject*, NiObject*>* m_pkCloneMap;    // 00
		NiTPointerMap<NiObject*, bool>*      m_pkProcessMap;  // 04
		NiObjectNET_CopyType                 m_eCopyType;     // 08
		char                                 m_cAppendChar;   // 0C
		std::uint8_t                         pad0D[0x3];      // 0D
	};
	static_assert(sizeof(NiCloningProcess) == 0x10);
}
