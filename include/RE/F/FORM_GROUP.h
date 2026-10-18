#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FORM.h"

namespace RE
{
	class FORM_GROUP
	{
	public:
		// members
		FORM          GroupData;     // 00?
		std::uint32_t iGroupOffset;  // 18?
	};
}
