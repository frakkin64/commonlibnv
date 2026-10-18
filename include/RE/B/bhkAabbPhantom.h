#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkPhantom.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class hkAabbPhantomCinfo;
	class hkSerializableCinfo;

	class bhkAabbPhantom :
		public bhkPhantom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkAabbPhantom };
		static constexpr auto VTABLE{ VTABLE::bhkAabbPhantom };

		// override (bhkPhantom)
		virtual ~bhkAabbPhantom() = default;                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void KillCinfo(bool abCreated) override;                              // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;              // 2D

		bhkAabbPhantom* ctor(hkAabbPhantomCinfo const& arInfo)
		{
			using func_t = bhkAabbPhantom*(__thiscall*)(bhkAabbPhantom*, hkAabbPhantomCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkAabbPhantom::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkAabbPhantom) == 0x18);
}
