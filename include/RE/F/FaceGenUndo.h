#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FaceGenUndo
	{
	public:
		// members
		FR2MatrixVTC<float> Race[2][2];        // 00?
		FR2MatrixVTC<float> NPC_Offset[2][2];  // 80?
		bool                bRaceOnly;         // 100?
		std::uint8_t        pad101[0x3];       // 101
	};
}
