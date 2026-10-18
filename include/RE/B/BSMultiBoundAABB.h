#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMultiBoundShape.h"
#include "RE/B/BSMultiBoundShape_BSMBIntersectResult.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMultiBound;
	class NiBound;
	class NiCloningProcess;
	class NiFrustumPlanes;
	class NiLines;
	class NiObject;
	class NiStream;
	class NiTriShape;

	class BSMultiBoundAABB :
		public BSMultiBoundShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundAABB };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundAABB };

		// override (BSMultiBoundShape)
		virtual ~BSMultiBoundAABB() = default;                                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                          // 12
		virtual void LoadBinary(NiStream& arStream) override;                                           // 13
		virtual void LinkObject(NiStream& arStream) override;                                           // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                  // 15
		virtual void SaveBinary(NiStream& arStream) override;                                           // 16
		virtual bool IsEqual(NiObject* apObject) override;                                              // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                    // 18
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(const BSMultiBound* a_arg1) override;  // 25
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(const NiBound* a_arg1) override;       // 26
		virtual bool WithinFrustum(const NiFrustumPlanes* a_arg1) override;                             // 27
		virtual bool CompletelyWithinFrustum(const NiFrustumPlanes* a_arg1) override;                   // 28
		virtual void GetNiBound(NiBound* a_arg1) override;                                              // 29
		virtual void MakeDebugGeom(NiLines* a_arg1, NiTriShape* a_arg2, NiColorA a_arg3) override;      // 2A
		virtual std::int32_t QDebugGeomLineSize() override;                                             // 2B
		virtual std::int32_t QDebugGeomShapeSize() override;                                            // 2C
		virtual bool QPointWithin(NiPoint3& aPoint) override;                                           // 2D
		virtual void SetCenter(NiPoint3 const& aPoint) override;                                        // 2E

		void SetHalfExtents(NiPoint3 const& arHalfExtents)
		{
			using func_t = decltype(&BSMultiBoundAABB::SetHalfExtents);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundAABB::SetHalfExtents };
			func(this, arHalfExtents);
		}

		BSMultiBoundAABB* ctor(NiPoint3 const& arCenter, NiPoint3 const& arHalfExtents)
		{
			using func_t = BSMultiBoundAABB*(__thiscall*)(BSMultiBoundAABB*, NiPoint3 const&, NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundAABB::ctor };
			return func(this, arCenter, arHalfExtents);
		}

		BSMultiBoundAABB* ctor()
		{
			using func_t = BSMultiBoundAABB*(__thiscall*)(BSMultiBoundAABB*);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundAABB::ctor_1 };
			return func(this);
		}

		void GetVertices(NiPoint3* apPoints)
		{
			using func_t = decltype(&BSMultiBoundAABB::GetVertices);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundAABB::GetVertices };
			func(this, apPoints);
		}

	public:
		// members
		NiPoint3 Center;       // 0C
		NiPoint3 HalfExtents;  // 18
	};
	static_assert(sizeof(BSMultiBoundAABB) == 0x24);
}
