#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkpBridgeAtoms.h"
#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpConstraintQueryIn;
	class hkpConstraintQueryOut;

	class hkpBreakableConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBreakableConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpBreakableConstraintData };

		// override (hkpConstraintData)
		virtual ~hkpBreakableConstraintData() = default;  // 00

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
		virtual void buildJacobian(hkpConstraintQueryIn const& in, hkpConstraintQueryOut& out);      // 0C
		virtual hkBool* isBuildJacobianCallbackRequired(hkBool* a_arg1);                             // 0D
		virtual void buildJacobianCallback(hkpConstraintQueryIn const& in);                          // 0E
		virtual void getConstraintInfo(hkpConstraintData_ConstraintInfo* a_arg1) const;              // 0F

		hkpBreakableConstraintData* ctor(hkpConstraintData* constraintData)
		{
			using func_t = hkpBreakableConstraintData*(__thiscall*)(hkpBreakableConstraintData*, hkpConstraintData*);
			static REL::Relocation<func_t> func{ Offsets::hkpBreakableConstraintData::ctor };
			return func(this, constraintData);
		}

		hkpBreakableConstraintData* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkpBreakableConstraintData*(__thiscall*)(hkpBreakableConstraintData*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpBreakableConstraintData::ctor_1 };
			return func(this, f);
		}

	public:
		// members
		hkpBridgeAtoms     m_atoms;                      // 0C
		hkpConstraintData* m_constraintData;             // 18
		std::uint16_t      m_childRuntimeSize;           // 1C?
		std::uint16_t      m_childNumSolverResults;      // 1E?
		float              m_solverResultLimit;          // 20?
		hkBool             m_removeWhenBroken;           // 24?
		hkBool             m_revertBackVelocityOnBreak;  // 25?
		std::uint16_t      pad26;                        // 26
	};
}
