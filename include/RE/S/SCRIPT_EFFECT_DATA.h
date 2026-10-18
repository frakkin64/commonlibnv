#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SCRIPT_EFFECT_DATA
	{
	public:
		// members
		bool          m_bScriptEffectStart;   // 00
		bool          m_bScriptEffectFinish;  // 01
		std::uint16_t pad02;                  // 02
		float         m_fSecondsElapsed;      // 04
	};
	static_assert(sizeof(SCRIPT_EFFECT_DATA) == 0x8);
}
