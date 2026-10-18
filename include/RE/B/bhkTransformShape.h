#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiColor;
	class NiNode;
	class NiObject;
	class NiStream;
	class bhkSerializable;
	class hkSerializableCinfo;
	class hkTransformShapeCinfo;

	class bhkTransformShape :
		public bhkShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkTransformShape };
		static constexpr auto VTABLE{ VTABLE::bhkTransformShape };

		// override (bhkShape)
		virtual ~bhkTransformShape() = default;                                                     // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                      // 12
		virtual void LoadBinary(NiStream& arStream) override;                                       // 13
		virtual void LinkObject(NiStream& arStream) override;                                       // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                              // 15
		virtual void SaveBinary(NiStream& arStream) override;                                       // 16
		virtual bool IsEqual(NiObject* apObject) override;                                          // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void Link(bool abAttach) override;                                                  // 24
		virtual void KillCinfo(bool abCreated) override;                                            // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                              // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;                            // 2D
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31
		virtual void BuildDisplayGeometry(NiNode* __formal, NiColor const& __formal) override;      // 35

		bhkTransformShape* ctor(hkTransformShapeCinfo const& arInfo)
		{
			using func_t = bhkTransformShape*(__thiscall*)(bhkTransformShape*, hkTransformShapeCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkTransformShape::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkTransformShape) == 0x14);
}
