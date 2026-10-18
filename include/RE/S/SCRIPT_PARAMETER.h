#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SCRIPT_PARAM_TYPE.h"

namespace RE
{
	class SCRIPT_PARAMETER
	{
	public:
		// members
		char*             pParamName;  // 00?
		SCRIPT_PARAM_TYPE eParamType;  // 04
		bool              bOptional;   // 08?
		std::uint8_t      pad09[0x3];  // 09
	};
}
