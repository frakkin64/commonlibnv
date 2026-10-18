#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConvexShape.h"
#include "RE/H/hkpShapeContainer_ReferencePolicy.h"
#include "RE/H/hkpShapeType.h"
#include "RE/H/hkpSingleShapeContainer.h"

namespace RE
{
	class hkSphere;
	class hkTransform;
	class hkVector4;
	class hkpCdVertex;

	class hkpConvexTransformShapeBase :
		public hkpConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexTransformShapeBase };
		static constexpr auto VTABLE{ VTABLE::hkpConvexTransformShapeBase };

		// override (hkpConvexShape)
		virtual ~hkpConvexTransformShapeBase() = default;  // 00

		// add
		virtual std::int32_t getNumCollisionSpheresImpl();                                                                                                                                                                 // 0B
		virtual const hkSphere* getCollisionSpheresImpl(hkSphere* a_arg1);                                                                                                                                                 // 0C
		virtual void getFirstVertex(hkVector4* a_arg1);                                                                                                                                                                    // 0D
		virtual void getSupportingVertexImpl(const hkVector4* a_arg1, hkpCdVertex* a_arg2);                                                                                                                                // 0E
		virtual void convertVertexIdsToVerticesImpl(const std::uint16_t* a_arg1, std::int32_t a_arg2, hkpCdVertex* a_arg3);                                                                                                // 0F
		virtual std::int32_t weldContactPointImpl(std::uint16_t* a_arg1, std::uint8_t* a_arg2, hkVector4* a_arg3, const hkTransform* a_arg4, const hkpConvexShape* a_arg5, const hkTransform* a_arg6, hkVector4* a_arg7);  // 10
		virtual void getCentreImpl(hkVector4* a_arg1);                                                                                                                                                                     // 11

		hkpConvexTransformShapeBase* ctor(hkpShapeType type, float radius, hkpConvexShape const* childShape, hkpShapeContainer_ReferencePolicy ref)
		{
			using func_t = hkpConvexTransformShapeBase*(__thiscall*)(hkpConvexTransformShapeBase*, hkpShapeType, float, hkpConvexShape const*, hkpShapeContainer_ReferencePolicy);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexTransformShapeBase::ctor };
			return func(this, type, radius, childShape, ref);
		}

	public:
		// members
		hkpSingleShapeContainer m_childShape;      // 14
		std::int32_t            m_childShapeSize;  // 1C
	};
	static_assert(sizeof(hkpConvexTransformShapeBase) == 0x20);
}
