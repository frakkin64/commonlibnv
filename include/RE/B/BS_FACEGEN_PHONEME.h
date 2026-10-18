#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BS_FACEGEN_PHONEME : std::int32_t
	{
		kBS_FG_PHONEME_NONE = -1,
		kBS_FG_PHONEME_AAH = 0x0,
		kBS_FG_PHONEME_BIG_AAH = 0x1,
		kBS_FG_PHONEME_B_M_P = 0x2,
		kBS_FG_PHONEME_CH_J_SH = 0x3,
		kBS_FG_PHONEME_D_S_T = 0x4,
		kBS_FG_PHONEME_EEE = 0x5,
		kBS_FG_PHONEME_EH = 0x6,
		kBS_FG_PHONEME_F_V = 0x7,
		kBS_FG_PHONEME_I = 0x8,
		kBS_FG_PHONEME_K = 0x9,
		kBS_FG_PHONEME_N = 0xA,
		kBS_FG_PHONEME_OH = 0xB,
		kBS_FG_PHONEME_OOH_Q = 0xC,
		kBS_FG_PHONEME_R = 0xD,
		kBS_FG_PHONEME_TH = 0xE,
		kBS_FG_PHONEME_W = 0xF,
		kBS_FG_PHONEME_COUNT = 0x10,
	};
}
