#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpMoppVirtualMachine.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdPointCollector;
	class hkpLinearCastCollisionInput;
	class hkpMoppAabbCastVirtualMachineQueryFloat;
	class hkpMoppAabbCastVirtualMachineQueryInt;
	class hkpMoppCode;

	class hkpMoppAabbCastVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
		class hkpAabbCastInput;

		class alignas(16) hkpAabbCastInput
		{
		public:
			// members
			hkVector4                          m_from;            // 00?
			hkVector4                          m_to;              // 10?
			hkVector4                          m_extents;         // 20?
			const hkpLinearCastCollisionInput* m_collisionInput;  // 30?
			const hkpCdBody*                   m_castBody;        // 34?
			const hkpCdBody*                   m_moppBody;        // 38?
			std::uint32_t                      pad3C;             // 3C
		};

		void aabbCast(hkpMoppAabbCastVirtualMachine::hkpAabbCastInput const& input, hkpCdPointCollector& castCollector, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpMoppAabbCastVirtualMachine::aabbCast);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppAabbCastVirtualMachine::aabbCast };
			func(this, input, castCollector, startCollector);
		}

	protected:
		void queryRayOnTree(hkpMoppAabbCastVirtualMachineQueryInt const* query, std::uint8_t const* PC, hkpMoppAabbCastVirtualMachineQueryFloat* const fQuery, std::int32_t chunkOffset)
		{
			using func_t = decltype(&hkpMoppAabbCastVirtualMachine::queryRayOnTree);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppAabbCastVirtualMachine::queryRayOnTree };
			func(this, query, PC, fQuery, chunkOffset);
		}

	public:
		// members
		const hkpMoppCode*                                     m_code;                 // 10?
		float                                                  m_ItoFScale;            // 14?
		hkpShapeType                                           m_castObjectType;       // 18?
		float                                                  m_earlyOutFraction;     // 1C?
		float                                                  m_refEarlyOutFraction;  // 20?
		hkpCdPointCollector*                                   m_castCollector;        // 24?
		hkpCdPointCollector*                                   m_startPointCollector;  // 28?
		const hkpMoppAabbCastVirtualMachine::hkpAabbCastInput* m_input;                // 2C?
		std::int32_t                                           m_reindexingMask;       // 30?
	};
}
