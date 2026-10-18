#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkp26Dop.h"
#include "RE/H/hkpMoppKDopQuery.h"
#include "RE/H/hkpMoppVirtualMachine.h"

namespace RE
{
	class hkpMoppInfo;

	class alignas(16) hkpMoppKDopGeometriesVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
		class hkpMoppKDopGeometriesVirtualMachineQuery;

		class hkpMoppKDopGeometriesVirtualMachineQuery
		{
		public:
			// members
			std::int32_t  m_offset_x;         // 00
			std::int32_t  m_offset_y;         // 04
			std::int32_t  m_offset_z;         // 08
			std::int32_t  m_shift;            // 0C
			std::uint32_t m_primitiveOffset;  // 10?
			std::uint32_t m_properties[1];    // 14?
		};

	protected:
		void queryMoppKDopGeometriesRecurse(hkpMoppKDopGeometriesVirtualMachine::hkpMoppKDopGeometriesVirtualMachineQuery const* query, std::uint8_t const* PC)
		{
			using func_t = decltype(&hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse };
			func(this, query, PC);
		}

	public:
		// members
		float                                            m_ItoFScale;         // 10?
		std::uint8_t                                     pad14[0xC];          // 14
		hkVector4                                        m_offset;            // 20?
		std::uint32_t                                    m_terminaloffset;    // 30?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_visitedTerminals;  // 34?
		hkpMoppInfo*                                     m_kDopGeometries;    // 40?
		hkp26Dop                                         m_kdop;              // 44?
		std::int32_t                                     m_level;             // AC?
		hkpMoppKDopQuery                                 m_queryObject;       // B0?
		hkBool                                           m_hitFound;          // C0?
		hkBool                                           m_earlyExit;         // C1?
		std::uint8_t                                     padC2[0xE];          // C2
	};
}
