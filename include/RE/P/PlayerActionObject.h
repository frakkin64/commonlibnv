#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PLAYER_ACTION.h"

namespace RE
{
	class TESObjectREFR;

	// not confirmed: no named code in the executable refers to this type
	class PlayerActionObject
	{
	public:
		// members
		PLAYER_ACTION  eAction;  // 00?
		float          ftimer;   // 04?
		TESObjectREFR* prefObj;  // 08?
	};
}
