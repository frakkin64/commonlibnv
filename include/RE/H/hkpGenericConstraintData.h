#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkpBridgeAtoms.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpGenericConstraintDataScheme.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpConstraintQueryIn;
	class hkpConstraintQueryOut;

	class hkpGenericConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGenericConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpGenericConstraintData };

		// override (hkpConstraintData)
		virtual ~hkpGenericConstraintData() = default;  // 00

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

		hkpGenericConstraintData* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkpGenericConstraintData*(__thiscall*)(hkpGenericConstraintData*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpGenericConstraintData::ctor };
			return func(this, f);
		}

		hkpGenericConstraintData* ctor()
		{
			using func_t = hkpGenericConstraintData*(__thiscall*)(hkpGenericConstraintData*);
			static REL::Relocation<func_t> func{ Offsets::hkpGenericConstraintData::ctor_1 };
			return func(this);
		}

	public:
		// members
		hkpBridgeAtoms                 m_atoms;   // 0C
		hkpGenericConstraintDataScheme m_scheme;  // 18
	};
}
