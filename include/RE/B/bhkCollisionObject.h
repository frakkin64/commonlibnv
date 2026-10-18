#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkNiCollisionObject.h"
#include "RE/H/hkpMotion_MotionType.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class NiUpdateData;
	class bhkRigidBody;
	class bhkWorldObject;
	class hkpRigidBody;

	class bhkCollisionObject :
		public bhkNiCollisionObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCollisionObject };
		static constexpr auto VTABLE{ VTABLE::bhkCollisionObject };

		// override (bhkNiCollisionObject)
		virtual ~bhkCollisionObject() = default;                                                                      // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                                        // 12
		virtual void LoadBinary(NiStream& arStream) override;                                                         // 13
		virtual void LinkObject(NiStream& arStream) override;                                                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                                // 15
		virtual void SaveBinary(NiStream& arStream) override;                                                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                            // 17
		virtual void AddViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                                  // 19
		virtual void UpdateWorldData(NiUpdateData& UpdateData) override;                                              // 24
		virtual NiPoint3 GetVelocity() override;                                                                      // 28
		virtual void hktoNiTransform() override;                                                                      // 29
		virtual void NitohkTransform() override;                                                                      // 2A
		virtual void ClearVelocities() override;                                                                      // 2B
		virtual void SetMotionType(hkpMotion_MotionType __formal, bhkWorldObject* __formal, bool __formal) override;  // 2C
		virtual bool QKeyframe() override;                                                                            // 2D

		static bhkCollisionObject* GetbhkCollisionObject(NiAVObject* apObject)
		{
			using func_t = decltype(&bhkCollisionObject::GetbhkCollisionObject);
			static REL::Relocation<func_t> func{ Offsets::bhkCollisionObject::GetbhkCollisionObject };
			return func(apObject);
		}

		static bhkCollisionObject* Getbhk(hkpRigidBody const* apBody)
		{
			using func_t = decltype(&bhkCollisionObject::Getbhk);
			static REL::Relocation<func_t> func{ Offsets::bhkCollisionObject::Getbhk };
			return func(apBody);
		}

		bhkCollisionObject* ctor(NiAVObject* apObject)
		{
			using func_t = bhkCollisionObject*(__thiscall*)(bhkCollisionObject*, NiAVObject*);
			static REL::Relocation<func_t> func{ Offsets::bhkCollisionObject::ctor };
			return func(this, apObject);
		}

		bhkRigidBody* GetRigidBody()
		{
			using func_t = decltype(&bhkCollisionObject::GetRigidBody);
			static REL::Relocation<func_t> func{ Offsets::bhkCollisionObject::GetRigidBody };
			return func(this);
		}
	};
}
