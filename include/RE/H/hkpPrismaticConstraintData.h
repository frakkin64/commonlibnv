#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpAngConstraintAtom.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpLinConstraintAtom.h"
#include "RE/H/hkpLinFrictionConstraintAtom.h"
#include "RE/H/hkpLinLimitConstraintAtom.h"
#include "RE/H/hkpLinMotorConstraintAtom.h"
#include "RE/H/hkpSetLocalTransformsConstraintAtom.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;

	class alignas(16) hkpPrismaticConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPrismaticConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPrismaticConstraintData };

		class Atoms;

		class alignas(16) Atoms
		{
		public:
			// members
			hkpSetLocalTransformsConstraintAtom m_transforms;  // 00?
			hkpLinMotorConstraintAtom           m_motor;       // 10?
			hkpLinFrictionConstraintAtom        m_friction;    // 14?
			hkpAngConstraintAtom                m_ang;         // 18?
			hkpLinConstraintAtom                m_lin0;        // 1C?
			hkpLinConstraintAtom                m_lin1;        // 20?
			hkpLinLimitConstraintAtom           m_linLimit;    // 24?
			std::uint8_t                        pad28[0x8];    // 28
		};

		// override (hkpConstraintData)
		virtual ~hkpPrismaticConstraintData() = default;  // 00

		// add
		virtual void Unk_03();                                                                       // 03
		virtual float getMaxLinearImpulse();                                                         // 04
		virtual void Unk_05();                                                                       // 05
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

		// members
		std::uint32_t                     pad0C;    // 0C
		hkpPrismaticConstraintData::Atoms m_atoms;  // 10?
	};
}
