#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class MoveData
	{
	public:
		// members
		float         fTime;           // 00?
		NiPoint3      Angle;           // 04?
		NiPoint3      Displacement;    // 10?
		std::uint32_t iMoveDirection;  // 1C?
		float         fCurrMoveSpeed;  // 20?
		bool          bVisible;        // 24?
		std::uint8_t  pad25[0x3];      // 25
	};
}
