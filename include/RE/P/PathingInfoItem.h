#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PATHING_INFO_TYPE.h"
#include "RE/P/PATHING_MESSAGE_ID.h"
#include "RE/P/PATHING_PARAMETER_ID.h"
#include "RE/P/PathingMessageParameter.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathingInfoItem
	{
	public:
		// members
		PATHING_INFO_TYPE       InfoType;   // 00?
		PATHING_MESSAGE_ID      MessageID;  // 04?
		PATHING_PARAMETER_ID    ParamID;    // 08?
		PathingMessageParameter Params;     // 0C?
	};
}
