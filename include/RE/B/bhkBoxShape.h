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
	class NiPoint3;
	class NiStream;
	class bhkSerializable;
	class hkSerializableCinfo;
	class hkVector4;

	class bhkBoxShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkBoxShape };
		static constexpr auto VTABLE{ VTABLE::bhkBoxShape };

		// override (bhkConvexShape)
		virtual ~bhkBoxShape() = default;                                                           // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                      // 12
		virtual void LoadBinary(NiStream& arStream) override;                                       // 13
		virtual void SaveBinary(NiStream& arStream) override;                                       // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void KillCinfo(bool abCreated) override;                                            // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                              // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;                            // 2D
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31
		virtual void BuildDisplayGeometry(NiNode* __formal, NiColor const& __formal) override;      // 35

		bhkBoxShape* ctor(hkVector4 const& arExt)
		{
			using func_t = bhkBoxShape*(__thiscall*)(bhkBoxShape*, hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkBoxShape::ctor };
			return func(this, arExt);
		}

		void Init(hkVector4 const& arExt)
		{
			using func_t = void (bhkBoxShape::*)(hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkBoxShape::Init };
			func(this, arExt);
		}

		bhkBoxShape* ctor(NiPoint3 const& arExt)
		{
			using func_t = bhkBoxShape*(__thiscall*)(bhkBoxShape*, NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkBoxShape::ctor_1 };
			return func(this, arExt);
		}
	};
	static_assert(sizeof(bhkBoxShape) == 0x14);
}
