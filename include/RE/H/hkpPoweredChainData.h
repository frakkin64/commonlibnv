#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpBridgeAtoms.h"
#include "RE/H/hkpConstraintChainData.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpConstraintMotor;
	class hkpConstraintQueryIn;
	class hkpConstraintQueryOut;
	class hkpSolverResults;

	class hkpPoweredChainData :
		public hkpConstraintChainData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPoweredChainData };
		static constexpr auto VTABLE{ VTABLE::hkpPoweredChainData };

		class ConstraintInfo;

		class alignas(16) ConstraintInfo
		{
		public:
			// members
			hkVector4           m_pivotInA;      // 00?
			hkVector4           m_pivotInB;      // 10?
			hkQuaternion        m_aTc;           // 20?
			hkQuaternion        m_bTc;           // 30?
			hkpConstraintMotor* m_motors[3];     // 40?
			hkBool              m_switchBodies;  // 4C?
			std::uint8_t        pad4D[0x3];      // 4D
		};

		// override (hkpConstraintChainData)
		virtual ~hkpPoweredChainData() = default;  // 00

		// add
		virtual void Unk_03();                                                                           // 03
		virtual float getMaxLinearImpulse();                                                             // 04
		virtual void Unk_05();                                                                           // 05
		virtual std::uint8_t getNotifiedBodyIndex();                                                     // 06
		virtual hkBool* isValid(hkBool* a_arg1);                                                         // 07
		virtual std::int32_t getType() const;                                                            // 08
		virtual void getRuntimeInfo(hkBool a_arg1, hkpConstraintData_RuntimeInfo* a_arg2) const;         // 09
		virtual hkpSolverResults* getSolverResults(void* runtime);                                       // 0A
		virtual void addInstance(hkpConstraintInstance* a_arg1, void* a_arg2, std::int32_t a_arg3);      // 0B
		virtual void buildJacobian(hkpConstraintQueryIn const& inNotValid, hkpConstraintQueryOut& out);  // 0C
		virtual hkBool* isBuildJacobianCallbackRequired(hkBool* a_arg1);                                 // 0D
		virtual void Unk_0E();                                                                           // 0E
		virtual void getConstraintInfo(hkpConstraintData_ConstraintInfo* a_arg1) const;                  // 0F
		virtual std::int32_t getNumConstraintInfos();                                                    // 10

		void addConstraintInfoInBodySpace(hkVector4 const& pivotInA, hkVector4 const& pivotInB, hkQuaternion const& aTc, hkpConstraintMotor* xMotor, hkpConstraintMotor* yMotor, hkpConstraintMotor* zMotor)
		{
			using func_t = decltype(&hkpPoweredChainData::addConstraintInfoInBodySpace);
			static REL::Relocation<func_t> func{ Offsets::hkpPoweredChainData::addConstraintInfoInBodySpace };
			func(this, pivotInA, pivotInB, aTc, xMotor, yMotor, zMotor);
		}

		hkpPoweredChainData* ctor()
		{
			using func_t = hkpPoweredChainData*(__thiscall*)(hkpPoweredChainData*);
			static REL::Relocation<func_t> func{ Offsets::hkpPoweredChainData::ctor };
			return func(this);
		}

		hkpPoweredChainData* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkpPoweredChainData*(__thiscall*)(hkpPoweredChainData*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkpPoweredChainData::ctor_1 };
			return func(this, f);
		}

	public:
		// members
		hkpBridgeAtoms                                                         m_atoms;             // 0C
		hkArray<hkpPoweredChainData::ConstraintInfo, hkContainerHeapAllocator> m_infos;             // 18
		float                                                                  m_tau;               // 24?
		float                                                                  m_damping;           // 28?
		float                                                                  m_cfmLinAdd;         // 2C?
		float                                                                  m_cfmLinMul;         // 30?
		float                                                                  m_cfmAngAdd;         // 34?
		float                                                                  m_cfmAngMul;         // 38?
		float                                                                  m_maxErrorDistance;  // 3C?
	};
}
