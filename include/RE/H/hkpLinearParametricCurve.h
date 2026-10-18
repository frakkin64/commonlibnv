#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpParametricCurve.h"

namespace RE
{
	class hkTransform;

	class alignas(16) hkpLinearParametricCurve :
		public hkpParametricCurve  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpLinearParametricCurve };
		static constexpr auto VTABLE{ VTABLE::hkpLinearParametricCurve };

		// override (hkpParametricCurve)
		virtual ~hkpLinearParametricCurve() = default;  // 00

		// add
		virtual void getPoint(float a_arg1, hkVector4* a_arg2) const;                                   // 03
		virtual float getNearestPoint(float a_arg1, const hkVector4* a_arg2, hkVector4* a_arg3) const;  // 04
		virtual void getTangent(float a_arg1, hkVector4* a_arg2) const;                                 // 05
		virtual float getStart() const;                                                                 // 06
		virtual float getEnd() const;                                                                   // 07
		virtual float getLengthFromStart(float a_arg1) const;                                           // 08
		virtual void getBinormal(float a_arg1, hkVector4* a_arg2) const;                                // 09
		virtual hkBool* isClosedLoop(hkBool* a_arg1) const;                                             // 0A
		virtual void getPointsToDraw(hkArray<hkVector4, hkContainerHeapAllocator>* a_arg1) const;       // 0B
		virtual void transformPoints(hkTransform const& transformation);                                // 0C
		virtual hkpParametricCurve* clone();                                                            // 0D

		// members
		float                                        m_smoothingFactor;                        // 08
		hkBool                                       m_closedLoop;                             // 0C
		std::uint8_t                                 pad0D[0x3];                               // 0D
		hkVector4                                    m_dirNotParallelToTangentAlongWholePath;  // 10
		hkArray<hkVector4, hkContainerHeapAllocator> m_points;                                 // 20
		hkArray<float, hkContainerHeapAllocator>     m_distance;                               // 2C?
		std::uint8_t                                 pad38[0x8];                               // 38
	};
}
