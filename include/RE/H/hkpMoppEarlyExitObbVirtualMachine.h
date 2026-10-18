#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpMoppVirtualMachine.h"

namespace RE
{
	class hkpMoppCode;
	class hkpMoppEarlyExitObbVirtualMachineQuery;

	class hkpMoppEarlyExitObbVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
	protected:
		void queryOBBOnTree(hkpMoppEarlyExitObbVirtualMachineQuery const* query, std::uint8_t const* PC)
		{
			using func_t = decltype(&hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree };
			func(this, query, PC);
		}

	public:
		// members
		std::int32_t       m_xHi;        // 10?
		std::int32_t       m_yHi;        // 14?
		std::int32_t       m_zHi;        // 18?
		std::int32_t       m_HiPadding;  // 1C?
		std::int32_t       m_xLo;        // 20?
		std::int32_t       m_yLo;        // 24?
		std::int32_t       m_zLo;        // 28?
		std::int32_t       m_LoPadding;  // 2C?
		std::int32_t       m_cx;         // 30?
		std::int32_t       m_cy;         // 34?
		std::int32_t       m_cz;         // 38?
		std::int32_t       m_cradius;    // 3C?
		hkBool             m_hitFound;   // 40?
		std::uint8_t       pad41[0x3];   // 41
		const hkpMoppCode* m_code;       // 44?
	};
}
