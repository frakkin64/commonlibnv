#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMoppMediator.h"

namespace RE
{
	class hkVector4;
	class hkpMoppCompilerPrimitive;
	class hkpMoppSplittingPlaneDirection;
	class hkpShapeContainer;

	class hkpMoppShapeMediator :
		public hkpMoppMediator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppShapeMediator };
		static constexpr auto VTABLE{ VTABLE::hkpMoppShapeMediator };

		// override (hkpMoppMediator)
		virtual ~hkpMoppShapeMediator() = default;  // 00

		// add
		virtual void setSplittingPlaneDirections(hkpMoppSplittingPlaneDirection const* directions, std::int32_t numDirections);                                                                         // 03
		virtual std::int32_t getNumPrimitives();                                                                                                                                                        // 04
		virtual void getPrimitives(hkpMoppCompilerPrimitive* primitives);                                                                                                                               // 05
		virtual void projectPrimitives(hkVector4 const& direction, std::int32_t directionIndex, hkpMoppCompilerPrimitive* primitives, std::int32_t numPrimitives, float* absMinOut, float* absMaxOut);  // 06
		virtual void findExtents(hkVector4 const& direction, std::int32_t directionIndex, hkpMoppCompilerPrimitive const* primitives, std::int32_t numPrimitives, float* absMinOut, float* absMaxOut);  // 07
		virtual void splitPrimitive(hkpMoppCompilerPrimitive const& primitiveIn, hkVector4 const& direction, float planeOffset, std::int32_t depth, hkpMoppCompilerPrimitive* primitiveOut);            // 08
		virtual std::int32_t getPrimitiveProperties(hkpMoppCompilerPrimitive const& primitiveIn, std::uint32_t* const cid);                                                                             // 09

		// members
		const hkpShapeContainer* m_shape;           // 08
		std::int32_t             m_numChildShapes;  // 0C
	};
}
