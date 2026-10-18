#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkArrayBase.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpConstraintInstance_CloningMode.h"

namespace RE
{
	class hkaSkeleton;
	class hkpConstraintInstance;
	class hkpRigidBody;

	class hkaRagdollInstance :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaRagdollInstance };
		static constexpr auto VTABLE{ VTABLE::hkaRagdollInstance };

		// override (hkReferencedObject)
		virtual ~hkaRagdollInstance() = default;  // 00

		// add
		virtual hkaRagdollInstance* clone(hkpConstraintInstance_CloningMode a_arg1);  // 03

		hkaRagdollInstance* ctor(hkArrayBase<hkpRigidBody*> const& rigidBodies, hkArrayBase<hkpConstraintInstance*> const& constraints, hkaSkeleton const* skeleton)
		{
			using func_t = hkaRagdollInstance*(__thiscall*)(hkaRagdollInstance*, hkArrayBase<hkpRigidBody*> const&, hkArrayBase<hkpConstraintInstance*> const&, hkaSkeleton const*);
			static REL::Relocation<func_t> func{ Offsets::hkaRagdollInstance::ctor };
			return func(this, rigidBodies, constraints, skeleton);
		}

		hkaRagdollInstance* ctor(hkArrayBase<hkpRigidBody*> const& rigidBodies, hkArrayBase<hkpConstraintInstance*> const& constraints, hkaSkeleton const* skeleton, hkArrayBase<std::int32_t> const& boneToRigidBodyMap)
		{
			using func_t = hkaRagdollInstance*(__thiscall*)(hkaRagdollInstance*, hkArrayBase<hkpRigidBody*> const&, hkArrayBase<hkpConstraintInstance*> const&, hkaSkeleton const*, hkArrayBase<std::int32_t> const&);
			static REL::Relocation<func_t> func{ Offsets::hkaRagdollInstance::ctor_1 };
			return func(this, rigidBodies, constraints, skeleton, boneToRigidBodyMap);
		}

	public:
		// members
		hkArray<hkpRigidBody*, hkContainerHeapAllocator>          m_rigidBodies;         // 08?
		hkArray<hkpConstraintInstance*, hkContainerHeapAllocator> m_constraints;         // 14?
		hkArray<std::int32_t, hkContainerHeapAllocator>           m_boneToRigidBodyMap;  // 20?
		hkRefPtr<const hkaSkeleton>                               m_skeleton;            // 2C?
	};
}
