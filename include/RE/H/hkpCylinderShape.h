#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConvexShape.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkpCdVertex;

	class alignas(16) hkpCylinderShape :
		public hkpConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCylinderShape };
		static constexpr auto VTABLE{ VTABLE::hkpCylinderShape };

		// override (hkpConvexShape)
		virtual ~hkpCylinderShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                           // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1);                                                                                                                                                 // 0C
		virtual void getFirstVertex(hkVector4* a_arg1) const;                                                                                                                                                              // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2);                                                                                                                                // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3);                                                                                                // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1) const;                                                                                                                                                               // 11

		float getCylinderRadius() const
		{
			using func_t = decltype(&hkpCylinderShape::getCylinderRadius);
			static REL::Relocation<func_t> func{ Offsets::hkpCylinderShape::getCylinderRadius };
			return func(this);
		}

	public:
		// members
		float         m_cylRadius;                                    // 14
		float         m_cylBaseRadiusFactorForHeightFieldCollisions;  // 18?
		std::uint32_t pad1C;                                          // 1C
		hkVector4     m_vertexA;                                      // 20?
		hkVector4     m_vertexB;                                      // 30?
		hkVector4     m_perpendicular1;                               // 40?
		hkVector4     m_perpendicular2;                               // 50?
	};
}
