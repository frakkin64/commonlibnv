#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEntityCinfo.h"
#include "RE/H/hkpMotion_MotionType.h"
#include "RE/H/hkpRigidBodyCinfo.h"

namespace RE
{
	class hkQuaternion;
	class hkVector4;

	class alignas(16) bhkRigidBodyCinfo :
		public hkEntityCinfo  // 00
	{
	public:
		void SetPosition(hkVector4 const& arPos)
		{
			using func_t = decltype(&bhkRigidBodyCinfo::SetPosition);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBodyCinfo::SetPosition };
			func(this, arPos);
		}

		void SetRotation(hkQuaternion const& arRot)
		{
			using func_t = decltype(&bhkRigidBodyCinfo::SetRotation);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBodyCinfo::SetRotation };
			func(this, arRot);
		}

		void SetMotionType(hkpMotion_MotionType aeType)
		{
			using func_t = decltype(&bhkRigidBodyCinfo::SetMotionType);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBodyCinfo::SetMotionType };
			func(this, aeType);
		}

		void SetCollisionFilter(std::uint32_t aiFilter)
		{
			using func_t = decltype(&bhkRigidBodyCinfo::SetCollisionFilter);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBodyCinfo::SetCollisionFilter };
			func(this, aiFilter);
		}

		char const* GetQualityTypeString()
		{
			using func_t = decltype(&bhkRigidBodyCinfo::GetQualityTypeString);
			static REL::Relocation<func_t> func{ Offsets::bhkRigidBodyCinfo::GetQualityTypeString };
			return func(this);
		}

	public:
		// members
		std::uint32_t     pad1C;  // 1C
		hkpRigidBodyCinfo hk;     // 20?
	};
	static_assert(sizeof(bhkRigidBodyCinfo) == 0xF0);
}
