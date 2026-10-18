#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMultiBoundAABB.h"
#include "RE/B/BSMultiBoundShape_BSMBIntersectResult.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMultiBound;
	class NiBound;
	class NiCloningProcess;
	class NiFrustumPlanes;
	class NiLines;
	class NiObject;
	class NiPoint3;
	class NiStream;
	class NiTriShape;

	class BSMultiBoundOBB :
		public BSMultiBoundAABB  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundOBB };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundOBB };

		// override (BSMultiBoundAABB)
		virtual ~BSMultiBoundOBB() = default;                                                           // 00
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
		virtual bool QPointWithin(NiPoint3& aPoint) override;                                           // 2D

		void SetAxis(NiMatrix3 const& arAxis)
		{
			using func_t = decltype(&BSMultiBoundOBB::SetAxis);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundOBB::SetAxis };
			func(this, arAxis);
		}

		BSMultiBoundOBB* ctor()
		{
			using func_t = BSMultiBoundOBB*(__thiscall*)(BSMultiBoundOBB*);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundOBB::ctor };
			return func(this);
		}

		void GetVertices(NiPoint3* apPoints)
		{
			using func_t = decltype(&BSMultiBoundOBB::GetVertices);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundOBB::GetVertices };
			func(this, apPoints);
		}

	public:
		// members
		NiMatrix3 Axis;  // 24
	};
	static_assert(sizeof(BSMultiBoundOBB) == 0x48);
}
