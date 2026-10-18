#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkp2dAngConstraintAtom.h"
#include "RE/H/hkpAngFrictionConstraintAtom.h"
#include "RE/H/hkpAngLimitConstraintAtom.h"
#include "RE/H/hkpAngMotorConstraintAtom.h"
#include "RE/H/hkpBallSocketConstraintAtom.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpConstraintMotor;

	class alignas(16) hkpLimitedHingeConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpLimitedHingeConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpLimitedHingeConstraintData };

		class Atoms;

		class alignas(16) Atoms
		{
		public:
			// members
			hkpSetLocalTransformsConstraintAtom m_transforms;   // 00?
			hkpAngMotorConstraintAtom           m_angMotor;     // 10?
			hkpAngFrictionConstraintAtom        m_angFriction;  // 14?
			hkpAngLimitConstraintAtom           m_angLimit;     // 18?
			hkp2dAngConstraintAtom              m_2dAng;        // 1C?
			hkpBallSocketConstraintAtom         m_ballSocket;   // 20?
			std::uint8_t                        pad24[0xC];     // 24
		};

		// override (hkpConstraintData)
		virtual ~hkpLimitedHingeConstraintData() = default;  // 00

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

		void setMotor(hkpConstraintMotor* motor)
		{
			using func_t = decltype(&hkpLimitedHingeConstraintData::setMotor);
			static REL::Relocation<func_t> func{ Offsets::hkpLimitedHingeConstraintData::setMotor };
			func(this, motor);
		}

		hkpLimitedHingeConstraintData* ctor()
		{
			using func_t = hkpLimitedHingeConstraintData*(__thiscall*)(hkpLimitedHingeConstraintData*);
			static REL::Relocation<func_t> func{ Offsets::hkpLimitedHingeConstraintData::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t                        pad0C;    // 0C
		hkpLimitedHingeConstraintData::Atoms m_atoms;  // 10
	};
}
