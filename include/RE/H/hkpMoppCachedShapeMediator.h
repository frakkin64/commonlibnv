#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpMoppExtent.h"
#include "RE/H/hkpMoppMediator.h"

namespace RE
{
	class hkVector4;
	class hkpMoppCompilerPrimitive;
	class hkpMoppSplittingPlaneDirection;
	class hkpShapeContainer;

	class hkpMoppCachedShapeMediator :
		public hkpMoppMediator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppCachedShapeMediator };
		static constexpr auto VTABLE{ VTABLE::hkpMoppCachedShapeMediator };

		class hkpConvexShapeData;

		class hkpConvexShapeData
		{
		public:
			// members
			std::uint32_t m_key;          // 00?
			hkpMoppExtent m_extents[13];  // 04?
		};

		// override (hkpMoppMediator)
		virtual ~hkpMoppCachedShapeMediator() = default;  // 00

		// add
		virtual void setSplittingPlaneDirections(hkpMoppSplittingPlaneDirection const* directions, std::int32_t numDirections);                                                                         // 03
		virtual std::int32_t getNumPrimitives();                                                                                                                                                        // 04
		virtual void getPrimitives(hkpMoppCompilerPrimitive* primitives);                                                                                                                               // 05
		virtual void projectPrimitives(hkVector4 const& direction, std::int32_t directionIndex, hkpMoppCompilerPrimitive* primitives, std::int32_t numPrimitives, float* absMinOut, float* absMaxOut);  // 06
		virtual void findExtents(hkVector4 const& direction, std::int32_t directionIndex, hkpMoppCompilerPrimitive const* primitives, std::int32_t numPrimitives, float* absMinOut, float* absMaxOut);  // 07
		virtual void splitPrimitive(hkpMoppCompilerPrimitive const& primitiveIn, hkVector4 const& direction, float planeOffset, std::int32_t depth, hkpMoppCompilerPrimitive* primitiveOut);            // 08
		virtual std::int32_t getPrimitiveProperties(hkpMoppCompilerPrimitive const& primitiveIn, std::uint32_t* const cid);                                                                             // 09

		// members
		hkArray<hkpMoppCachedShapeMediator::hkpConvexShapeData, hkContainerHeapAllocator> m_arrayConvexShapeData;  // 08
		const hkpShapeContainer*                                                          m_shapeCollection;       // 14
		std::int32_t                                                                      m_numChildShapes;        // 18
	};
}
