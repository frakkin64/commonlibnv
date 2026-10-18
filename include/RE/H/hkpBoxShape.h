#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConvexShape.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkpCdVertex;

	class alignas(16) hkpBoxShape :
		public hkpConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBoxShape };
		static constexpr auto VTABLE{ VTABLE::hkpBoxShape };

		// override (hkpConvexShape)
		virtual ~hkpBoxShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                           // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;                                                                                                                                           // 0C
		virtual void getFirstVertex(hkVector4* a_arg1) const;                                                                                                                                                              // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2) const;                                                                                                                          // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3) const;                                                                                          // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1) const;                                                                                                                                                               // 11

		// members
		std::uint8_t pad14[0xC];     // 14
		hkVector4    m_halfExtents;  // 20
	};
}
