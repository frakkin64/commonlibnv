#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectCELL;
	class TESWorldSpace;

	class ParentSpaceNode
	{
	public:
		// members
		bool           bWorldSpace;    // 00
		std::uint8_t   pad01[0x3];     // 01
		TESWorldSpace* pWorldSpace;    // 04
		TESObjectCELL* pInteriorCell;  // 08
	};
}
