#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkWorld.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) bhkWorldM :
		public bhkWorld  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWorldM };
		static constexpr auto VTABLE{ VTABLE::bhkWorldM };

		// members
		hkVector4 WorldTotalSize;  // A0
		hkVector4 BorderSize;      // B0
		hkVector4 BroadPhaseSize;  // C0
	};
}
