#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class MagicItem_CannotCastReason : std::int32_t
	{
		kNOCAST_OK = 0x0,
		kNOCAST_MAGICKA = 0x1,
		kNOCAST_SILENCED = 0x2,
		kNOCAST_SKILLCHECK = 0x3,
		kNOCAST_POWERUSED = 0x4,
		kNOCAST_MULTIPLEBOUNDEFFECTS = 0x5,
		kNOCAST_RANGEDUNDERWATER = 0x6,
	};
}
