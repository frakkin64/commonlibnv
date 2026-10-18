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
	class NiStream;
	class bhkSerializable;
	class hkCapsuleShapeCinfo;
	class hkSerializableCinfo;

	class bhkCapsuleShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCapsuleShape };
		static constexpr auto VTABLE{ VTABLE::bhkCapsuleShape };

		// override (bhkConvexShape)
		virtual ~bhkCapsuleShape() = default;                                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                      // 12
		virtual void LoadBinary(NiStream& arStream) override;                                       // 13
		virtual void SaveBinary(NiStream& arStream) override;                                       // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void KillCinfo(bool abCreated) override;                                            // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                              // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;                            // 2D
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31
		virtual void BuildDisplayGeometry(NiNode* __formal, NiColor const& __formal) override;      // 35

		bhkCapsuleShape* ctor(hkCapsuleShapeCinfo const& arInfo)
		{
			using func_t = bhkCapsuleShape*(__thiscall*)(bhkCapsuleShape*, hkCapsuleShapeCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkCapsuleShape::ctor };
			return func(this, arInfo);
		}

	protected:
		void CopyCinfo(hkCapsuleShapeCinfo& arInfo)
		{
			using func_t = decltype(&bhkCapsuleShape::CopyCinfo);
			static REL::Relocation<func_t> func{ Offsets::bhkCapsuleShape::CopyCinfo };
			func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkCapsuleShape) == 0x14);
}
