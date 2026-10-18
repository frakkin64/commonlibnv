#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpPulleyConstraintAtom.h"
#include "RE/H/hkpSetLocalTranslationsConstraintAtom.h"

namespace RE
{
	class hkpConstraintData_ConstraintInfo;
	class hkpConstraintData_RuntimeInfo;
	class hkpConstraintInstance;

	class alignas(16) hkpPulleyConstraintData :
		public hkpConstraintData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPulleyConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPulleyConstraintData };

		class Atoms;

		class alignas(16) Atoms
		{
		public:
			// members
			hkpSetLocalTranslationsConstraintAtom m_translations;  // 00?
			hkpPulleyConstraintAtom               m_pulley;        // 10?
		};

		// override (hkpConstraintData)
		virtual ~hkpPulleyConstraintData() = default;  // 00

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
		std::uint32_t                  pad0C;    // 0C
		hkpPulleyConstraintData::Atoms m_atoms;  // 10
	};
}
