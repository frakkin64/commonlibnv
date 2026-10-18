#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkSerializeUtil_ErrorDetails_ErrorID.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkSerializeUtil_ErrorDetails
	{
	public:
		using ErrorID = hkSerializeUtil_ErrorDetails_ErrorID;

		// members
		hkEnum<hkSerializeUtil_ErrorDetails_ErrorID, std::int32_t> id;              // 00
		hkStringPtr                                                defaultMessage;  // 04?
	};
}
