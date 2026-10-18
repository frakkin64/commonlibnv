#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpMoppVirtualMachine.h"
#include "RE/H/hkpShapeRayCastInput.h"

namespace RE
{
	class hkpCdBody;
	class hkpMoppCode;
	class hkpRayHitCollector;
	class hkpShapeContainer;
	class hkpShapeRayCastOutput;

	class alignas(16) hkpMoppLongRayVirtualMachine :
		public hkpMoppVirtualMachine  // 00
	{
	public:
		class QueryFloat;
		class QueryInt;

		class alignas(16) QueryFloat
		{
		public:
			// members
			hkVector4 m_rayEnds[2];  // 00?
		};

		class alignas(16) QueryInt
		{
		public:
			// members
			hkVector4     m_FtoBoffset;       // 00?
			std::int32_t  m_shift;            // 10?
			float         m_FtoBScale;        // 14?
			std::uint32_t m_primitiveOffset;  // 18?
			std::uint32_t m_properties[1];    // 1C?
		};

	protected:
		void queryRayOnTree(hkpMoppLongRayVirtualMachine::QueryInt const* query, std::uint8_t const* PC, hkpMoppLongRayVirtualMachine::QueryFloat* const fQuery, std::int32_t chunkOffset)
		{
			using func_t = decltype(&hkpMoppLongRayVirtualMachine::queryRayOnTree);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppLongRayVirtualMachine::queryRayOnTree };
			func(this, query, PC, fQuery, chunkOffset);
		}

	public:
		// members
		const hkpMoppCode*       m_code;                 // 10?
		float                    m_ItoFScale;            // 14?
		std::uint8_t             pad18[0x8];             // 18
		hkpShapeRayCastInput     m_ray;                  // 20?
		hkBool                   m_hitFound;             // 50?
		std::uint8_t             pad51[0x3];             // 51
		float                    m_earlyOutHitFraction;  // 54?
		hkpShapeRayCastOutput*   m_rayResultPtr;         // 58?
		hkpRayHitCollector*      m_collector;            // 5C?
		const hkpCdBody*         m_body;                 // 60?
		const hkpShapeContainer* m_collection;           // 64?
		std::int32_t             m_reindexingMask;       // 68?
		std::uint32_t            pad6C;                  // 6C
	};
}
