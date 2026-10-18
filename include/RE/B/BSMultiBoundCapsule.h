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

	class BSMultiBoundCapsule :
		public BSMultiBoundShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundCapsule };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundCapsule };

		// override (BSMultiBoundShape)
		virtual ~BSMultiBoundCapsule() = default;                                                       // 00
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

		// members
		NiPoint3 PointA;  // 0C
		NiPoint3 PointB;  // 18
		float    Radius;  // 24
	};
	static_assert(sizeof(BSMultiBoundCapsule) == 0x28);
}
