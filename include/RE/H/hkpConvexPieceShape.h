#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConvexShape.h"
#include "RE/H/hkpShapeContainer.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkVector4;
	class hkpCdVertex;
	class hkpShapeCollection;

	class hkpConvexPieceShape :
		public hkpConvexShape,  // 00
		public hkpShapeContainer  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexPieceShape };
		static constexpr auto VTABLE{ VTABLE::hkpConvexPieceShape };

		// override (hkpConvexShape)
		virtual ~hkpConvexPieceShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                           // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;                                                                                                                                           // 0C
		virtual void getFirstVertex(hkVector4* a_arg1) const;                                                                                                                                                              // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2) const;                                                                                                                          // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3);                                                                                                // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1);                                                                                                                                                                     // 11

		// members
		// not placed: m_vertices(absent)
		std::int32_t              m_numVertices;          // 18
		const hkpShapeCollection* m_displayMesh;          // 1C?
		const std::uint32_t*      m_displayShapeKeys;     // 20?
		std::int32_t              m_numDisplayShapeKeys;  // 24?
	};
}
