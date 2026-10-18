#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShapePhantom.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class hkSerializableCinfo;
	class hkSimpleShapePhantomCinfo;

	class bhkSimpleShapePhantom :
		public bhkShapePhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkSimpleShapePhantom };
		static constexpr auto VTABLE{ VTABLE::bhkSimpleShapePhantom };

		// override (bhkShapePhantom)
		virtual ~bhkSimpleShapePhantom() = default;                                   // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void KillCinfo(bool abCreated) override;                              // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;              // 2D

		bhkSimpleShapePhantom* ctor(hkSimpleShapePhantomCinfo const& arInfo)
		{
			using func_t = bhkSimpleShapePhantom*(__thiscall*)(bhkSimpleShapePhantom*, hkSimpleShapePhantomCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkSimpleShapePhantom::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkSimpleShapePhantom) == 0x18);
}
