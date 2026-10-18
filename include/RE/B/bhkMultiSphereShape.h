#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSphereRepShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class bhkSerializable;
	class hkMultiSphereShapeCinfo;
	class hkSerializableCinfo;

	class bhkMultiSphereShape :
		public bhkSphereRepShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkMultiSphereShape };
		static constexpr auto VTABLE{ VTABLE::bhkMultiSphereShape };

		// override (bhkSphereRepShape)
		virtual ~bhkMultiSphereShape() = default;                                                   // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                      // 12
		virtual void LoadBinary(NiStream& arStream) override;                                       // 13
		virtual void SaveBinary(NiStream& arStream) override;                                       // 16
		virtual bool IsEqual(NiObject* apObject) override;                                          // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void KillCinfo(bool abCreated) override;                                            // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                              // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;                            // 2D
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31

		bhkMultiSphereShape* ctor(hkMultiSphereShapeCinfo const& arInfo)
		{
			using func_t = bhkMultiSphereShape*(__thiscall*)(bhkMultiSphereShape*, hkMultiSphereShapeCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkMultiSphereShape::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkMultiSphereShape) == 0x14);
}
