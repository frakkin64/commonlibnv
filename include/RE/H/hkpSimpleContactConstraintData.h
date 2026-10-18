#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpDynamicsCpIdMgr.h"

namespace RE
{
	class hkContactPoint;
	class hkpBodyVelocity;
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpRigidBody;
	class hkpSimpleConstraintInfoInitInput;
	class hkpSimpleContactConstraintAtom;
	class hkpSolverResults;

	class hkpSimpleContactConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleContactConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleContactConstraintData };

		// override (hkpConstraintData)
		virtual ~hkpSimpleContactConstraintData() = default;  // 00

		// add
		virtual void Unk_03();                                                                                                                                                                                            // 03
		virtual float getMaxLinearImpulse();                                                                                                                                                                              // 04
		virtual void Unk_05();                                                                                                                                                                                            // 05
		virtual std::uint8_t getNotifiedBodyIndex();                                                                                                                                                                      // 06
		virtual hkBool* isValid(hkBool* a_arg1) const;                                                                                                                                                                    // 07
		virtual std::int32_t getType() const;                                                                                                                                                                             // 08
		virtual void getRuntimeInfo(hkBool a_arg1, hkpConstraintData_RuntimeInfo* a_arg2) const;                                                                                                                          // 09
		virtual hkpSolverResults* getSolverResults(void* runtime);                                                                                                                                                        // 0A
		virtual void addInstance(hkpConstraintInstance* a_arg1, void* a_arg2, std::int32_t a_arg3);                                                                                                                       // 0B
		virtual void Unk_0C();                                                                                                                                                                                            // 0C
		virtual hkBool* isBuildJacobianCallbackRequired(hkBool* a_arg1);                                                                                                                                                  // 0D
		virtual void Unk_0E();                                                                                                                                                                                            // 0E
		virtual void getConstraintInfo(hkpConstraintData_ConstraintInfo* a_arg1) const;                                                                                                                                   // 0F
		virtual void collisionResponseBeginCallback(hkContactPoint const& cp, hkpSimpleConstraintInfoInitInput& inA, hkpBodyVelocity& velA, hkpSimpleConstraintInfoInitInput& inB, hkpBodyVelocity& velB);                // 10
		virtual void collisionResponseEndCallback(hkContactPoint const& cp, float a_arg2, hkpSimpleConstraintInfoInitInput& a_arg3, hkpBodyVelocity& inA, hkpSimpleConstraintInfoInitInput& velA, hkpBodyVelocity& inB);  // 11

	private:
		hkpSimpleContactConstraintData* ctor(hkpConstraintInstance* constraint, hkpRigidBody* bodyA, hkpRigidBody* bodyB)
		{
			using func_t = hkpSimpleContactConstraintData*(__thiscall*)(hkpSimpleContactConstraintData*, hkpConstraintInstance*, hkpRigidBody*, hkpRigidBody*);
			static REL::Relocation<func_t> func{ Offsets::hkpSimpleContactConstraintData::ctor };
			return func(this, constraint, bodyA, bodyB);
		}

	public:
		// members
		hkpDynamicsCpIdMgr              m_idMgrA;      // 0C
		void*                           m_clientData;  // 20
		hkpConstraintInstance*          m_constraint;  // 24
		hkpSimpleContactConstraintAtom* m_atom;        // 28
		std::int32_t                    m_atomSize;    // 2C?
	};
}
