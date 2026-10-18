#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRefVariant.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkxAttribute_Hint.h"

namespace RE
{
	class hkxAttribute
	{
	public:
		using Hint = hkxAttribute_Hint;

		// members
		hkStringPtr  m_name;   // 00?
		hkRefVariant m_value;  // 04?
	};
}
