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

	class hkpMalleableConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMalleableConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpMalleableConstraintData };

		// override (hkpConstraintData)
		virtual ~hkpMalleableConstraintData() = default;  // 00

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
		virtual void Unk_0E();                                                                       // 0E
		virtual void getConstraintInfo(hkpConstraintData_ConstraintInfo* a_arg1) const;              // 0F

		hkpMalleableConstraintData* ctor(hkpConstraintData* constraintData)
		{
			using func_t = hkpMalleableConstraintData*(__thiscall*)(hkpMalleableConstraintData*, hkpConstraintData*);
			static REL::Relocation<func_t> func{ Offsets::hkpMalleableConstraintData::ctor_1 };
			return func(this, constraintData);
		}

		hkpMalleableConstraintData* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkpMalleableConstraintData*(__thiscall*)(hkpMalleableConstraintData*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpMalleableConstraintData::ctor_2 };
			return func(this, f);
		}

	protected:
		hkpMalleableConstraintData* ctor()
		{
			using func_t = hkpMalleableConstraintData*(__thiscall*)(hkpMalleableConstraintData*);
			static REL::Relocation<func_t> func{ Offsets::hkpMalleableConstraintData::ctor };
			return func(this);
		}

	public:
		// members
		hkpConstraintData* m_constraintData;  // 0C
		hkpBridgeAtoms     m_atoms;           // 10
		float              m_strength;        // 1C
	};
}
