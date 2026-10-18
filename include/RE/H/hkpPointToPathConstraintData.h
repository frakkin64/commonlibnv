#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkpBridgeAtoms.h"
#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;
	class hkpConstraintQueryIn;
	class hkpConstraintQueryOut;
	class hkpParametricCurve;

	class alignas(16) hkpPointToPathConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPointToPathConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPointToPathConstraintData };

		enum class OrientationConstraintType : std::int32_t
		{
			kCONSTRAIN_ORIENTATION_INVALID = 0x0,
			kCONSTRAIN_ORIENTATION_NONE = 0x1,
			kCONSTRAIN_ORIENTATION_ALLOW_SPIN = 0x2,
			kCONSTRAIN_ORIENTATION_TO_PATH = 0x3,
			kCONSTRAIN_ORIENTATION_MAX_ID = 0x4,
		};

		// override (hkpConstraintData)
		virtual ~hkpPointToPathConstraintData() = default;  // 00

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

		// members
		hkpBridgeAtoms                                                               m_atoms;                  // 0C
		hkpParametricCurve*                                                          m_path;                   // 18?
		float                                                                        m_maxFrictionForce;       // 1C?
		hkEnum<hkpPointToPathConstraintData::OrientationConstraintType, std::int8_t> m_angularConstrainedDOF;  // 20?
		std::uint8_t                                                                 pad21[0xF];               // 21
		hkTransform                                                                  m_transform_OS_KS[2];     // 30?
	};
}
