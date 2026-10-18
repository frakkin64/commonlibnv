#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/bhkEntity.h"
#include "RE/H/hkpMotion_MotionType.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiNode;
	class NiObject;
	class NiPoint3;
	class NiQuaternion;
	class NiStream;
	class bhkRigidBodyCinfo;
	class bhkSerializable;
	class bhkWorld;
	class hkAabb;
	class hkQuaternion;
	class hkSerializableCinfo;
	class hkTransform;
	class hkVector4;
	class hkpMotion;
	class hkpRigidBody;
	class hkpWorldObject;

	class bhkRigidBody :
		public bhkEntity  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRigidBody };
		static constexpr auto VTABLE{ VTABLE::bhkRigidBody };

		// override (bhkEntity)
		virtual ~bhkRigidBody() = default;                                            // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual bool Add(bhkWorld* __formal) override;                                // 27
		virtual bool Remove() override;                                               // 28
		virtual void KillCinfo(bool abCreated) override;                              // 29
		virtual std::int32_t LoadCInfo(NiStream& arStream) override;                  // 2B
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;              // 2D
		virtual void Kill() override;                                                 // 2E
		virtual bool ForceAdd(bhkWorld* apWorld) override;                            // 32
		virtual NiAVObject* CreateDisplayGeometry(NiNode* apNode) override;           // 33

		// add
		virtual hkVector4& GetPosition(hkVector4& arPos);                           // 35
		virtual hkQuaternion& GetRotation(hkQuaternion& arRot);                     // 36
		virtual void SetPosition(hkVector4 const& arPos);                           // 37
		virtual void SetRotation(hkQuaternion const& arRot);                        // 38
		virtual bool SetMotionType(hkpMotion_MotionType aeMotion);                  // 39
		virtual void SetPosRot(hkVector4 const& arPos, hkQuaternion const& arRot);  // 3A
		virtual hkVector4& GetCenterOfMassLocal(hkVector4& arCOM);                  // 3B
		virtual hkVector4& GetCenterOfMassInWorld(hkVector4& arCOM);                // 3C
		virtual hkTransform& GetTransform(hkTransform& arTrans);                    // 3D
		virtual void GetAabb(hkAabb& arOut);                                        // 3E
		virtual void SetHavokAssertState(bool abEnabled);                           // 3F

		hkpRigidBody* operator_call() const
		{
			using func_t = decltype(&bhkRigidBody::operator_call);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::operator_call };
			return func(this);
		}

		float GetMass()
		{
			using func_t = decltype(&bhkRigidBody::GetMass);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetMass };
			return func(this);
		}

		static bhkRigidBody* Getbhk(hkpWorldObject const* apBody)
		{
			using func_t = decltype(&bhkRigidBody::Getbhk);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::Getbhk };
			return func(apBody);
		}

		hkpMotion_MotionType GetMotionType()
		{
			using func_t = decltype(&bhkRigidBody::GetMotionType);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetMotionType };
			return func(this);
		}

		bool IsActive()
		{
			using func_t = decltype(&bhkRigidBody::IsActive);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::IsActive };
			return func(this);
		}

		void GetPosition(NiPoint3& arPos)
		{
			using func_t = void (bhkRigidBody::*)(NiPoint3&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetPosition };
			func(this, arPos);
		}

		void GetLinearVelocity(NiPoint3& arPos)
		{
			using func_t = void (bhkRigidBody::*)(NiPoint3&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetLinearVelocity };
			func(this, arPos);
		}

		hkVector4 const& GetLinearVelocity()
		{
			using func_t = hkVector4 const& (bhkRigidBody::*)();
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetLinearVelocity_1 };
			return func(this);
		}

		void GetAngularVelocity(NiPoint3& arPos)
		{
			using func_t = void (bhkRigidBody::*)(NiPoint3&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetAngularVelocity };
			func(this, arPos);
		}

		hkVector4 const& GetAngularVelocity()
		{
			using func_t = hkVector4 const& (bhkRigidBody::*)();
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetAngularVelocity_1 };
			return func(this);
		}

		void SetPosition(NiPoint3 const& arPos)
		{
			using func_t = void (bhkRigidBody::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetPosition };
			func(this, arPos);
		}

		void SetRotation(NiQuaternion const& arRot)
		{
			using func_t = void (bhkRigidBody::*)(NiQuaternion const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetRotation };
			func(this, arRot);
		}

		void SetLinearVelocity(NiPoint3 const& arVel)
		{
			using func_t = void (bhkRigidBody::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetLinearVelocity };
			func(this, arVel);
		}

		void SetAngularVelocity(NiPoint3 const& arVel)
		{
			using func_t = void (bhkRigidBody::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetAngularVelocity };
			func(this, arVel);
		}

		void SetLinearVelocity(hkVector4 const& arVel)
		{
			using func_t = void (bhkRigidBody::*)(hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetLinearVelocity_1 };
			func(this, arVel);
		}

		void SetAngularVelocity(hkVector4 const& arVel)
		{
			using func_t = void (bhkRigidBody::*)(hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetAngularVelocity_1 };
			func(this, arVel);
		}

		bhkRigidBody* ctor(bhkRigidBodyCinfo const& arInfo)
		{
			using func_t = bhkRigidBody*(__thiscall*)(bhkRigidBody*, bhkRigidBodyCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::ctor };
			return func(this, arInfo);
		}

		float GethkMaxLinearVelocity()
		{
			using func_t = decltype(&bhkRigidBody::GethkMaxLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GethkMaxLinearVelocity };
			return func(this);
		}

		hkpMotion* GetStoredDynamicMotion()
		{
			using func_t = decltype(&bhkRigidBody::GetStoredDynamicMotion);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetStoredDynamicMotion };
			return func(this);
		}

		float GetDynamicMass()
		{
			using func_t = decltype(&bhkRigidBody::GetDynamicMass);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::GetDynamicMass };
			return func(this);
		}

		static void SetFixed(NiAVObject* apObject, bool abFix, bool abAddRemainingConstraints)
		{
			using func_t = decltype(&bhkRigidBody::SetFixed);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::SetFixed };
			func(apObject, abFix, abAddRemainingConstraints);
		}

	protected:
		static void AddMotionType(NiTPrimitiveArray<char*>* apStrings, hkpMotion_MotionType aeType)
		{
			using func_t = decltype(&bhkRigidBody::AddMotionType);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBody::AddMotionType };
			func(apStrings, aeType);
		}

	public:
		// members
		BSSimpleList<NiPointer<bhkSerializable>> ActionConstraint;  // 14
	};
	static_assert(sizeof(bhkRigidBody) == 0x1C);
}
