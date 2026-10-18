#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiBound;
	class NiCloningProcess;
	class NiFrustumPlanes;
	class NiMatrix3;

	class BSOcclusionPlane :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSOcclusionPlane };
		static constexpr auto VTABLE{ VTABLE::BSOcclusionPlane };

		// override (NiObject)
		virtual ~BSOcclusionPlane() = default;                                  // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12

		// add
		virtual std::int32_t QDebugGeomLineSize();   // 23
		virtual std::int32_t QDebugGeomShapeSize();  // 24

		void SetCenter(NiPoint3 const& arCenter)
		{
			using func_t = decltype(&BSOcclusionPlane::SetCenter);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::SetCenter };
			func(this, arCenter);
		}

		void SetHalfExtents(NiPoint2 const& arHalfExtents)
		{
			using func_t = decltype(&BSOcclusionPlane::SetHalfExtents);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::SetHalfExtents };
			func(this, arHalfExtents);
		}

		void SetRotation(NiMatrix3 const& arRotation)
		{
			using func_t = decltype(&BSOcclusionPlane::SetRotation);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::SetRotation };
			func(this, arRotation);
		}

		BSOcclusionPlane* ctor(NiPoint3 const& arCenter, NiPoint2 const& arHalfExtents, NiMatrix3 const& arRotation)
		{
			using func_t = BSOcclusionPlane*(__thiscall*)(BSOcclusionPlane*, NiPoint3 const&, NiPoint2 const&, NiMatrix3 const&);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::ctor };
			return func(this, arCenter, arHalfExtents, arRotation);
		}

		bool WithinFrustum(NiFrustumPlanes const& aPlanes, bool abViewHitPlane, NiPoint3 akViewIntersection)
		{
			using func_t = decltype(&BSOcclusionPlane::WithinFrustum);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::WithinFrustum };
			return func(this, aPlanes, abViewHitPlane, akViewIntersection);
		}

		bool WithinFrustumDistFirst(NiFrustumPlanes const& aPlanes, NiPoint3& aViewPos)
		{
			using func_t = decltype(&BSOcclusionPlane::WithinFrustumDistFirst);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::WithinFrustumDistFirst };
			return func(this, aPlanes, aViewPos);
		}

		bool TestIntersection(NiBound const& aBound)
		{
			using func_t = decltype(&BSOcclusionPlane::TestIntersection);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::TestIntersection };
			return func(this, aBound);
		}

		bool ViewerOnCorrectSide(NiPoint3 akViewPoint)
		{
			using func_t = decltype(&BSOcclusionPlane::ViewerOnCorrectSide);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::ViewerOnCorrectSide };
			return func(this, akViewPoint);
		}

		void GetVertices(NiPoint3* apPoints)
		{
			using func_t = decltype(&BSOcclusionPlane::GetVertices);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionPlane::GetVertices };
			func(this, apPoints);
		}

	public:
		// members
		// not placed: kRotation, kCullResult, kCachedPlanes, kCachedVertices, kCachedViewPoint, bDirtyVertices, bDirtyPlanes
		NiPoint3          kCenter;             // 08
		NiPoint2          kHalfExtents;        // 14
		std::uint8_t      pad1C[0xC8];         // 1C
		bool              bDisabledPlanes[4];  // E4
		bool              bTwoSided;           // E8
		std::uint8_t      padE9[0x3];          // E9
		BSOcclusionPlane* pLinkedPlanes[4];    // EC
	};
	static_assert(sizeof(BSOcclusionPlane) == 0xFC);
}
