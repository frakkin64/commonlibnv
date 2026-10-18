#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class InterfaceManager_TutorialManager_MessageData
	{
	public:
		// members
		// not placed: uiMenuOffset(misaligned), bMessageShown(misaligned), bShowMessage(misaligned)
		std::uint32_t bitfield00;  // uiShowDelay:24
	};
}
