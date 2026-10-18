#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery.h"
#include "RE/H/hkpMoppVirtualMachine.h"

namespace RE
{
	class hkpMoppFindAllVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
		using hkpMoppFindAllVirtualMachineQuery = hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery;

		void queryOnTree(hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery const* query, std::uint8_t const* PC)
		{
			using func_t = decltype(&hkpMoppFindAllVirtualMachine::queryOnTree);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppFindAllVirtualMachine::queryOnTree };
			func(this, query, PC);
		}

		void queryOnTreeRight(hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery const* query, std::uint8_t const* PC)
		{
			using func_t = decltype(&hkpMoppFindAllVirtualMachine::queryOnTreeRight);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppFindAllVirtualMachine::queryOnTreeRight };
			func(this, query, PC);
		}

		void queryOnTreeLeft(hkpMoppFindAllVirtualMachine_hkpMoppFindAllVirtualMachineQuery const* query, std::uint8_t const* PC)
		{
			using func_t = decltype(&hkpMoppFindAllVirtualMachine::queryOnTreeLeft);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppFindAllVirtualMachine::queryOnTreeLeft };
			func(this, query, PC);
		}
	};
}
