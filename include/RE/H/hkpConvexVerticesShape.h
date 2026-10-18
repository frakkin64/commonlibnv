#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpConvexShape.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkpCdVertex;
	class hkpCompressedMeshShape_ConvexPiece;
	class hkpConvexVerticesConnectivity;

	class alignas(16) hkpConvexVerticesShape :
		public hkpConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexVerticesShape };
		static constexpr auto VTABLE{ VTABLE::hkpConvexVerticesShape };

		class FourVectors;

		class alignas(16) FourVectors
		{
		public:
			// members
			hkVector4 m_x;  // 00?
			hkVector4 m_y;  // 10?
			hkVector4 m_z;  // 20?
		};

		// override (hkpConvexShape)
		virtual ~hkpConvexVerticesShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                           // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;                                                                                                                                           // 0C
		virtual void getFirstVertex(hkVector4* a_arg1);                                                                                                                                                                    // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2) const;                                                                                                                          // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3) const;                                                                                          // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1) const;                                                                                                                                                               // 11

		// members
		std::uint8_t                                                           pad14[0xC];         // 14
		hkVector4                                                              m_aabbHalfExtents;  // 20
		hkVector4                                                              m_aabbCenter;       // 30
		hkArray<hkpConvexVerticesShape::FourVectors, hkContainerHeapAllocator> m_rotatedVertices;  // 40
		std::int32_t                                                           m_numVertices;      // 4C
		const hkpCompressedMeshShape_ConvexPiece*                              m_convexPiece;      // 50?
		hkArray<hkVector4, hkContainerHeapAllocator>                           m_planeEquations;   // 54?
		const hkpConvexVerticesConnectivity*                                   m_connectivity;     // 60?
		std::uint8_t                                                           pad64[0xC];         // 64
	};
}
