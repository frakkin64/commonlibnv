#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMultiBoundShape_BSMBIntersectResult.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMultiBound;
	class NiBound;
	class NiCloningProcess;
	class NiFrustumPlanes;
	class NiLines;
	class NiPoint3;
	class NiStream;
	class NiTriShape;

	class BSMultiBoundShape :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundShape };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundShape };

		using BSMBIntersectResult = BSMultiBoundShape_BSMBIntersectResult;

		enum class BSMBCullResult : std::int32_t
		{
			kBS_CULL_UNTESTED = 0x0,
			kBS_CULL_VISIBLE = 0x1,
			kBS_CULL_CULLED = 0x2,
			kBS_CULL_OCCLUDED = 0x3,
		};

		enum class BSMBShapeType : std::int32_t
		{
			kBS_SHAPE_INVALID = 0x0,
			kBS_SHAPE_AABB = 0x1,
			kBS_SHAPE_OBB = 0x2,
			kBS_SHAPE_SPHERE = 0x3,
			kBS_SHAPE_CAPSULE = 0x4,
		};

		// override (NiObject)
		virtual ~BSMultiBoundShape() = default;                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// add
		virtual BSMultiBoundShape::BSMBShapeType QType();                                      // 23
		virtual float QMultiBoundRadius();                                                     // 24
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(const NiBound* a_arg1);       // 26 (reversed overload group)
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(const BSMultiBound* a_arg1);  // 25 (reversed overload group)
		virtual bool WithinFrustum(const NiFrustumPlanes* a_arg1);                             // 27
		virtual bool CompletelyWithinFrustum(const NiFrustumPlanes* a_arg1);                   // 28
		virtual void GetNiBound(NiBound* a_arg1);                                              // 29
		virtual void MakeDebugGeom(NiLines* a_arg1, NiTriShape* a_arg2, NiColorA a_arg3);      // 2A
		virtual std::int32_t QDebugGeomLineSize();                                             // 2B
		virtual std::int32_t QDebugGeomShapeSize();                                            // 2C
		virtual bool QPointWithin(NiPoint3& aPoint);                                           // 2D
		virtual void SetCenter(NiPoint3 const& aPoint);                                        // 2E

		BSMultiBoundShape* ctor()
		{
			using func_t = BSMultiBoundShape*(__thiscall*)(BSMultiBoundShape*);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundShape::ctor };
			return func(this);
		}

	protected:
		void CopyMembers(BSMultiBoundShape* pDest, NiCloningProcess& arCloneData)
		{
			using func_t = decltype(&BSMultiBoundShape::CopyMembers);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundShape::CopyMembers };
			func(this, pDest, arCloneData);
		}

	public:
		// members
		BSMultiBoundShape::BSMBCullResult kCullResult;  // 08
	};
	static_assert(sizeof(BSMultiBoundShape) == 0xC);
}
