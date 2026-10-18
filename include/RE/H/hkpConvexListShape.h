#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpConvexShape.h"
#include "RE/H/hkpShapeContainer.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkpCdVertex;

	class alignas(16) hkpConvexListShape :
		public hkpConvexShape,  // 00
		public hkpShapeContainer  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexListShape };
		static constexpr auto VTABLE{ VTABLE::hkpConvexListShape };

		// override (hkpConvexShape)
		virtual ~hkpConvexListShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                           // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;                                                                                                                                           // 0C
		virtual void getFirstVertex(hkVector4* a_arg1);                                                                                                                                                                    // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2);                                                                                                                                // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3) const;                                                                                          // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1);                                                                                                                                                                     // 11

		// members
		float                                                    m_minDistanceToUseConvexHullForGetClosestPoints;  // 18?
		std::uint32_t                                            pad1C;                                            // 1C
		hkVector4                                                m_aabbHalfExtents;                                // 20?
		hkVector4                                                m_aabbCenter;                                     // 30?
		bool                                                     m_useCachedAabb;                                  // 40?
		std::uint8_t                                             pad41[0x3];                                       // 41
		hkArray<hkpConvexShape const*, hkContainerHeapAllocator> m_childShapes;                                    // 44?
	};
}
