#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSOcclusionPlane.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSMultiBoundRoom;
	class BSPortalSharedNode;
	class NiCloningProcess;
	class NiMatrix3;
	class NiObject;
	class NiPoint2;
	class NiPoint3;

	class BSPortal :
		public BSOcclusionPlane  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPortal };
		static constexpr auto VTABLE{ VTABLE::BSPortal };

		// override (BSOcclusionPlane)
		virtual ~BSPortal() = default;                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12

		BSPortalSharedNode* QSharedGeometryNode()
		{
			using func_t = decltype(&BSPortal::QSharedGeometryNode);
			static REL::Relocation<func_t> func{ Offsets::BSPortal::QSharedGeometryNode };
			return func(this);
		}

		BSPortal* ctor(NiPoint3 const& arCenter, NiPoint2 const& arHalfExtents, NiMatrix3 const& arRotation)
		{
			using func_t = BSPortal*(__thiscall*)(BSPortal*, NiPoint3 const&, NiPoint2 const&, NiMatrix3 const&);
			static REL::Relocation<func_t> func{ Offsets::BSPortal::ctor };
			return func(this, arCenter, arHalfExtents, arRotation);
		}

		BSPortal* ctor()
		{
			using func_t = BSPortal*(__thiscall*)(BSPortal*);
			static REL::Relocation<func_t> func{ Offsets::BSPortal::ctor_1 };
			return func(this);
		}

	public:
		// members
		BSMultiBoundRoom*             pMultiBoundRoom[2];  // FC
		NiPointer<BSPortalSharedNode> spSharedGeometry;    // 104
	};
	static_assert(sizeof(BSPortal) == 0x108);
}
