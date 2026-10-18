#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConvexShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiColor;
	class NiNode;
	class NiObject;
	class bhkSerializable;
	class hkSerializableCinfo;

	class bhkSphereShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkSphereShape };
		static constexpr auto VTABLE{ VTABLE::bhkSphereShape };

		// override (bhkConvexShape)
		virtual ~bhkSphereShape() = default;                                                        // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                      // 12
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void KillCinfo(bool abCreated) override;                                            // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                              // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;                            // 2D
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31
		virtual void BuildDisplayGeometry(NiNode* __formal, NiColor const& __formal) override;      // 35

		bhkSphereShape* ctor(float a_arg1, bool a_arg2)
		{
			using func_t = bhkSphereShape*(__thiscall*)(bhkSphereShape*, float, bool);
			static REL::Relocation<func_t> func{ Offsets::bhkSphereShape::ctor };
			return func(this, a_arg1, a_arg2);
		}
	};
	static_assert(sizeof(bhkSphereShape) == 0x14);
}
