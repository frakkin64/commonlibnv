#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkpMoppVirtualMachine.h"

namespace RE
{
	class hkpMoppCode;
	class hkpMoppObbVirtualMachineQuery;

	class hkpMoppObbVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
	protected:
		void queryAabbOnTree(hkpMoppObbVirtualMachineQuery const* query, std::uint8_t const* PC, std::int32_t chunkOffset)
		{
			using func_t = decltype(&hkpMoppObbVirtualMachine::queryAabbOnTree);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppObbVirtualMachine::queryAabbOnTree };
			func(this, query, PC, chunkOffset);
		}

	public:
		// members
		// not placed: m_xHi, m_yHi, m_zHi, m_HiPadding, m_xLo, m_yLo, m_zLo
		std::uint8_t                 pad10[0x10];       // 10
		std::int32_t                 m_LoPadding;       // 20
		hkPadSpu<hkpMoppCode const*> m_code;            // 24?
		hkPadSpu<std::int32_t>       m_reindexingMask;  // 28?
	};
}
