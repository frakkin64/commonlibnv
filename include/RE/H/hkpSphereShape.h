#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConvexShape.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkVector4;
	class hkpCdVertex;

	class hkpSphereShape :
		public hkpConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSphereShape };
		static constexpr auto VTABLE{ VTABLE::hkpSphereShape };

		// override (hkpConvexShape)
		virtual ~hkpSphereShape() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl() const;                                                                                                                                                           // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1) const;                                                                                                                                           // 0C
		virtual void getFirstVertex(hkVector4* a_arg1) const;                                                                                                                                                              // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2) const;                                                                                                                          // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3) const;                                                                                          // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1) const;                                                                                                                                                               // 11

		hkpSphereShape* ctor(float radius)
		{
			using func_t = hkpSphereShape*(__thiscall*)(hkpSphereShape*, float);
			static REL::Relocation<func_t> func{ Offsets::hkpSphereShape::ctor };
			return func(this, radius);
		}

	public:
		// members
		std::uint32_t m_pad16[3];  // 14?
	};
}
