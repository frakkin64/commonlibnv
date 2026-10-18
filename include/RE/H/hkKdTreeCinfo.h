#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class alignas(16) hkKdTreeCinfo
	{
	public:
		enum class EmptyNodeAllocation : std::int32_t
		{
			kNO_EMPTY_NODES = 0x0,
			kFEW_EMTPY_NODES = 0x8,
			kSTANDARD_EMPTY_NODES = 0x2,
			kLOTS_OF_EMPTY_NODES = 0x1,
		};

		hkKdTreeCinfo* ctor()
		{
			using func_t = hkKdTreeCinfo*(__thiscall*)(hkKdTreeCinfo*);
			static REL::Relocation<func_t> func{ Offsets::hkKdTreeCinfo::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t                                             m_numPrimitives;        // 00?
		hkEnum<hkKdTreeCinfo::EmptyNodeAllocation, std::uint8_t> m_emptyNodeAllocation;  // 04?
		hkBool                                                   m_isDistributedBuild;   // 05?
		std::uint8_t                                             pad06[0xA];             // 06
		hkAabb                                                   m_aabb;                 // 10?
	};
}
