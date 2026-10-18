#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpBridgeAtoms.h"
#include "RE/H/hkpConstraintChainData.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpConstraintQueryIn;
	class hkpConstraintQueryOut;

	class hkpStiffSpringChainData :
		public hkpConstraintChainData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStiffSpringChainData };
		static constexpr auto VTABLE{ VTABLE::hkpStiffSpringChainData };

		class ConstraintInfo;

		class alignas(16) ConstraintInfo
		{
		public:
			// members
			hkVector4    m_pivotInA;      // 00?
			hkVector4    m_pivotInB;      // 10?
			float        m_springLength;  // 20?
			std::uint8_t pad24[0xC];      // 24
		};

		// override (hkpConstraintChainData)
		virtual ~hkpStiffSpringChainData() = default;  // 00

		// add
		virtual void Unk_03();                                                                           // 03
		virtual float getMaxLinearImpulse();                                                             // 04
		virtual void Unk_05();                                                                           // 05
		virtual std::uint8_t getNotifiedBodyIndex();                                                     // 06
		virtual hkBool* isValid(hkBool* a_arg1);                                                         // 07
		virtual std::int32_t getType() const;                                                            // 08
		virtual void getRuntimeInfo(hkBool a_arg1, hkpConstraintData_RuntimeInfo* a_arg2) const;         // 09
		virtual void Unk_0A();                                                                           // 0A
		virtual void addInstance(hkpConstraintInstance* a_arg1, void* a_arg2, std::int32_t a_arg3);      // 0B
		virtual void buildJacobian(hkpConstraintQueryIn const& inNotValid, hkpConstraintQueryOut& out);  // 0C
		virtual hkBool* isBuildJacobianCallbackRequired(hkBool* a_arg1);                                 // 0D
		virtual void Unk_0E();                                                                           // 0E
		virtual void getConstraintInfo(hkpConstraintData_ConstraintInfo* a_arg1) const;                  // 0F
		virtual std::int32_t getNumConstraintInfos();                                                    // 10

		// members
		hkpBridgeAtoms                                                             m_atoms;    // 0C
		hkArray<hkpStiffSpringChainData::ConstraintInfo, hkContainerHeapAllocator> m_infos;    // 18
		float                                                                      m_tau;      // 24?
		float                                                                      m_damping;  // 28?
		float                                                                      m_cfm;      // 2C?
	};
}
