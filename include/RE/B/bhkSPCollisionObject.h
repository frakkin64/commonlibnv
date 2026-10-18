#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkPCollisionObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class bhkSPCollisionObject :
		public bhkPCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkSPCollisionObject };
		static constexpr auto VTABLE{ VTABLE::bhkSPCollisionObject };

		// override (bhkPCollisionObject)
		virtual ~bhkSPCollisionObject() = default;                                    // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void AddViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 19
		virtual void hktoNiTransform() override;                                      // 29
		virtual void NitohkTransform() override;                                      // 2A

		bhkSPCollisionObject* ctor(NiAVObject* apObject)
		{
			using func_t = bhkSPCollisionObject*(__thiscall*)(bhkSPCollisionObject*, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::bhkSPCollisionObject::ctor };
			return func(this, apObject);
		}
	};
	static_assert(sizeof(bhkSPCollisionObject) == 0x14);
}
