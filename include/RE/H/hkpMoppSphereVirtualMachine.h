#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMoppVirtualMachine.h"

namespace RE
{
	class hkpMoppSphereVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
		class hkpMoppSphereVirtualMachineQuery;

		class hkpMoppSphereVirtualMachineQuery
		{
		public:
			// members
			std::int32_t  m_x;                // 00?
			std::int32_t  m_y;                // 04?
			std::int32_t  m_z;                // 08?
			std::int32_t  m_radius;           // 0C?
			std::int32_t  m_offset_x;         // 10?
			std::int32_t  m_offset_y;         // 14?
			std::int32_t  m_offset_z;         // 18?
			std::uint32_t m_primitiveOffset;  // 1C?
			std::int32_t  m_shift;            // 20?
			std::uint32_t m_properties[1];    // 24?
		};

	protected:
		void querySphereOnTree(hkpMoppSphereVirtualMachine::hkpMoppSphereVirtualMachineQuery const* query, std::uint8_t const* PC)
		{
			using func_t = decltype(&hkpMoppSphereVirtualMachine::querySphereOnTree);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppSphereVirtualMachine::querySphereOnTree };
			func(this, query, PC);
		}

	public:
		// members
		std::int32_t m_x;       // 10
		std::int32_t m_y;       // 14?
		std::int32_t m_z;       // 18?
		std::int32_t m_radius;  // 1C?
	};
}
