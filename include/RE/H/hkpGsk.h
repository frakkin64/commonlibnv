#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkLineSegmentUtil_ClosestLineSegLineSegResult.h"
#include "RE/H/hkPadSpu.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpCdVertex.h"

namespace RE
{
	class hkpConvexShape;
	class hkpShapeRayCastInput;
	class hkpShapeRayCastOutput;

	class alignas(16) hkpGsk
	{
	public:
		enum class SupportState : std::int32_t
		{
			kSUPPORT_CHANGED = 0x0,
			kDONT_CALL_GET_SUPPORTING_VERTEX_A = 0x8,
			kDONT_CALL_GET_SUPPORTING_VERTEX_B = -8,
		};

		hkBool castRay(hkpConvexShape const* result, hkpShapeRayCastInput const& shape, hkpShapeRayCastOutput& input)
		{
			using func_t = decltype(&hkpGsk::castRay);
			static REL::Relocation<func_t> func{ Offsets::hkpGsk::castRay };
			return func(this, result, shape, input);
		}

	public:
		// members
		hkPadSpu<std::int32_t>                        m_dimA;                    // 00?
		hkPadSpu<std::int32_t>                        m_dimB;                    // 04?
		hkPadSpu<std::int32_t>                        m_maxDimA;                 // 08?
		hkPadSpu<std::int32_t>                        m_maxDimB;                 // 0C?
		hkPadSpu<std::uint32_t>                       m_doNotHandlePenetration;  // 10?
		hkPadSpu<std::int32_t>                        m_featureChange;           // 14?
		hkpCdVertex                                   m_verticesA[4];            // 18?
		std::uint8_t                                  pad58[0x8];                // 58
		hkVector4                                     m_dummy[4];                // 60?
		hkVector4                                     m_verticesBinA[4];         // A0?
		hkpCdVertex                                   m_verticesBinB[4];         // E0?
		hkVector4                                     m_support;                 // 120?
		hkLineSegmentUtil_ClosestLineSegLineSegResult m_closestLineLineResult;   // 130?
		hkVector4                                     m_checkTriangleDots;       // 160?
		hkPadSpu<std::int32_t>                        m_lastDimB;                // 170?
		hkpGsk::SupportState                          m_supportState;            // 174?
		std::uint8_t                                  pad178[0x8];               // 178
	};
}
