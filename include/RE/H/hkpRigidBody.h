#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkWorldOperation_Result.h"
#include "RE/H/hkpEntity.h"
#include "RE/H/hkpMotion_MotionType.h"

namespace RE
{
	class hkMotionState;
	class hkTransform;
	class hkVector4;
	class hkpMotion;
	class hkpRigidBodyCinfo;
	class hkpShape;

	class alignas(16) hkpRigidBody :
		public hkpEntity  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRigidBody };
		static constexpr auto VTABLE{ VTABLE::hkpRigidBody };

		// override (hkpEntity)
		virtual ~hkpRigidBody() = default;                                         // 00
		virtual hkWorldOperation_Result setShape(hkpShape const* shape) override;  // 03
		virtual hkMotionState* getMotionState() override;                          // 04

		// add
		virtual hkpRigidBody* clone() const;  // 06

		float getMass() const
		{
			using func_t = decltype(&hkpRigidBody::getMass);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getMass };
			return func(this);
		}

		hkVector4 const& getPosition() const
		{
			using func_t = decltype(&hkpRigidBody::getPosition);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getPosition };
			return func(this);
		}

		hkTransform const& getTransform() const
		{
			using func_t = decltype(&hkpRigidBody::getTransform);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getTransform };
			return func(this);
		}

		hkpMotion_MotionType getMotionType() const
		{
			using func_t = decltype(&hkpRigidBody::getMotionType);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getMotionType };
			return func(this);
		}

		hkVector4 const& getLinearVelocity() const
		{
			using func_t = decltype(&hkpRigidBody::getLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getLinearVelocity };
			return func(this);
		}

		hkVector4 const& getAngularVelocity() const
		{
			using func_t = decltype(&hkpRigidBody::getAngularVelocity);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getAngularVelocity };
			return func(this);
		}

		hkpMotion* getStoredDynamicMotion()
		{
			using func_t = decltype(&hkpRigidBody::getStoredDynamicMotion);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getStoredDynamicMotion };
			return func(this);
		}

		hkpRigidBody* ctor(hkpRigidBodyCinfo const& info)
		{
			using func_t = hkpRigidBody*(__thiscall*)(hkpRigidBody*, hkpRigidBodyCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::ctor };
			return func(this, info);
		}

		void getCinfo(hkpRigidBodyCinfo& info) const
		{
			using func_t = decltype(&hkpRigidBody::getCinfo);
			static REL::Relocation<func_t> func{ Offsets::hkpRigidBody::getCinfo };
			func(this, info);
		}
	};
}
