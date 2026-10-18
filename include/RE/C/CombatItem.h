#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESBoundObject;
	class TESObjectREFR;

	class CombatItem
	{
	public:
		// members
		TESObjectREFR*  pRef;          // 00
		TESBoundObject* pBoundObject;  // 04?
	};
}
