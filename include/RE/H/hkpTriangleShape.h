#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConvexShape.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkpCdVertex;

	class alignas(16) hkpTriangleShape :
		public hkpConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTriangleShape };
		static constexpr auto VTABLE{ VTABLE::hkpTriangleShape };

		// override (hkpConvexShape)
		virtual ~hkpTriangleShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                                 // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;                                                                                                                                                 // 0C
		virtual void getFirstVertex(hkVector4* a_arg1) const;                                                                                                                                                                    // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2) const;                                                                                                                                // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3) const;                                                                                                // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7) const;  // 10
		virtual void getCentreImpl(hkVector4* a_arg1) const;                                                                                                                                                                     // 11

		// members
		// not placed: m_weldingType(misaligned), m_vertexA(absent), m_vertexB(absent), m_vertexC(absent)
		std::uint16_t m_weldingInfo;  // 14
		std::uint8_t  pad16;          // 16
		std::uint8_t  m_isExtruded;   // 17
		std::uint8_t  pad18[0x8];     // 18
		hkVector4     m_extrusion;    // 20
	};
}
