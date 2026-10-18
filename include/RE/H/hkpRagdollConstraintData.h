#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpAngFrictionConstraintAtom.h"
#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpConeLimitConstraintAtom.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpRagdollMotorConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"
#include "RE/H/hkpTwistLimitConstraintAtom.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;

	class alignas(16) hkpRagdollConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRagdollConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpRagdollConstraintData };

		class Atoms;

		class alignas(16) Atoms
		{
		public:
			// members
			hkpSetLocalTransformsConstraintAtom m_transforms;     // 00?
			hkpRagdollMotorConstraintAtom       m_ragdollMotors;  // 10?
			hkpAngFrictionConstraintAtom        m_angFriction;    // 20?
			hkpTwistLimitConstraintAtom         m_twistLimit;     // 24?
			hkpConeLimitConstraintAtom          m_coneLimit;      // 28?
			hkpConeLimitConstraintAtom          m_planesLimit;    // 2C?
			hkpBallSocketConstraintAtom         m_ballSocket;     // 30?
			std::uint8_t                        pad34[0xC];       // 34
		};

		// override (hkpConstraintData)
		virtual ~hkpRagdollConstraintData() = default;  // 00

		// add
		virtual void setMaxLinearImpulse(float maxImpulse);                                          // 03
		virtual float getMaxLinearImpulse() const;                                                   // 04
		virtual void setBodyToNotify(std::int32_t bodyIdx);                                          // 05
		virtual std::uint8_t getNotifiedBodyIndex();                                                 // 06
		virtual hkBool* isValid(hkBool* a_arg1) const;                                               // 07
		virtual std::int32_t getType() const;                                                        // 08
		virtual void getRuntimeInfo(hkBool a_arg1, hkpConstraintData_RuntimeInfo* a_arg2) const;     // 09
		virtual void Unk_0A();                                                                       // 0A
		virtual void addInstance(hkpConstraintInstance* a_arg1, void* a_arg2, std::int32_t a_arg3);  // 0B
		virtual void Unk_0C();                                                                       // 0C
		virtual hkBool* isBuildJacobianCallbackRequired(hkBool* a_arg1);                             // 0D
		virtual void Unk_0E();                                                                       // 0E
		virtual void getConstraintInfo(hkpConstraintData_ConstraintInfo* a_arg1) const;              // 0F

		hkpRagdollConstraintData* ctor()
		{
			using func_t = hkpRagdollConstraintData*(__thiscall*)(hkpRagdollConstraintData*);
			static REL::Relocation<func_t> func{ Offsets::hkpRagdollConstraintData::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t                   pad0C;    // 0C
		hkpRagdollConstraintData::Atoms m_atoms;  // 10
	};
}
