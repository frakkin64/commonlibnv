#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkNiCollisionObject.h"
#include "RE/H/hkpMotion_MotionType.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class bhkWorldObject;
	class hkpPhantom;

	class bhkPCollisionObject :
		public bhkNiCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkPCollisionObject };
		static constexpr auto VTABLE{ VTABLE::bhkPCollisionObject };

		// override (bhkNiCollisionObject)
		virtual ~bhkPCollisionObject() = default;                                                                     // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                                        // 12
		virtual void LoadBinary(NiStream& arStream) override;                                                         // 13
		virtual void LinkObject(NiStream& arStream) override;                                                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                                // 15
		virtual void SaveBinary(NiStream& arStream) override;                                                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                            // 17
		virtual void AddViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                                  // 19
		virtual void hktoNiTransform() override;                                                                      // 29
		virtual void NitohkTransform() override;                                                                      // 2A
		virtual void ClearVelocities() override;                                                                      // 2B
		virtual void SetMotionType(hkpMotion_MotionType __formal, bhkWorldObject* __formal, bool __formal) override;  // 2C
		virtual bool QKeyframe() override;                                                                            // 2D

		static bhkPCollisionObject* Getbhk(hkpPhantom const* apPhantom)
		{
			using func_t = decltype(&bhkPCollisionObject::Getbhk);
			static REL::Relocation<func_t> func{ Offsets::bhkPCollisionObject::Getbhk };
			return func(apPhantom);
		}

		bhkPCollisionObject* ctor(NiAVObject* apObject)
		{
			using func_t = bhkPCollisionObject*(__thiscall*)(bhkPCollisionObject*, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::bhkPCollisionObject::ctor };
			return func(this, apObject);
		}
	};
	static_assert(sizeof(bhkPCollisionObject) == 0x14);
}
