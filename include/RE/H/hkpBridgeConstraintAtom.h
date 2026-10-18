#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpConstraintAtom.h"

namespace RE
{
	class hkpConstraintData;

	class hkpBridgeConstraintAtom :
		public hkpConstraintAtom  // 00
	{
	public:
		void init(hkpConstraintData* constraintData)
		{
			using func_t = decltype(&hkpBridgeConstraintAtom::init);
			static REL::Relocation<func_t> func{ Offsets::hkpBridgeConstraintAtom::init };
			func(this, constraintData);
		}

	public:
		// members
		void*              m_buildJacobianFunc;  // 04
		hkpConstraintData* m_constraintData;     // 08
	};
}
