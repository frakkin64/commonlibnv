#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpMoppObbVirtualMachine.h"

namespace RE
{
	class hkpMoppObbVirtualMachineQuery;

	class hkpMoppModifyVirtualMachine :
		public hkpMoppObbVirtualMachine  // 00
	{
	public:
	protected:
		hkBool queryModicationPointsRecursive(hkpMoppObbVirtualMachineQuery const* result, std::uint8_t const* query, std::int32_t PC)
		{
			using func_t = decltype(&hkpMoppModifyVirtualMachine::queryModicationPointsRecursive);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppModifyVirtualMachine::queryModicationPointsRecursive };
			return func(this, result, query, PC);
		}

	public:
		// members
		// not placed: m_tempLastShouldTerminalBeRemoved, m_modifier, m_reindexingMask
	};
}
