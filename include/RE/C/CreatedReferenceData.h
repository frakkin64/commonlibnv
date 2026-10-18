#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/ReferenceData.h"
#include "RE/T/TESCreatedReferenceType.h"

namespace RE
{
	class CreatedReferenceData
	{
	public:
		// members
		TESCreatedReferenceType eType;     // 00
		std::uint32_t           iBoundID;  // 04?
		ReferenceData           RefData;   // 08?
	};
}
