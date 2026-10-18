#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"

namespace RE
{
	class hkpConstraintAtom
	{
	public:
		enum class AtomType : std::int32_t
		{
			kTYPE_SIMPLE_CONSTRAINT_CONTACT_MGR = 0x0,
			kTYPE_REPORT_CONTACT_MGR = 0x1,
			kTYPE_CONVEX_LIST_CONTACT_MGR = 0x2,
			kTYPE_NULL_CONTACT_MGR = 0x3,
			kTYPE_USER_CONTACT_MGR = 0x4,
			kTYPE_MAX = 0x5,
		};

		// members
		hkEnum<hkpConstraintAtom::AtomType, std::uint16_t> m_type;  // 00?
		std::uint16_t                                      pad02;   // 02
	};
}
