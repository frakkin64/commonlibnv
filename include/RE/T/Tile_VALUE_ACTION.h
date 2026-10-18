#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class Tile_VALUE_ACTION : std::int32_t
	{
		kVA_COPY = 0x7D0,
		kVA_ADD = 0x7D1,
		kVA_SUB = 0x7D2,
		kVA_MULT = 0x7D3,
		kVA_DIV = 0x7D4,
		kVA_MIN = 0x7D5,
		kVA_MAX = 0x7D6,
		kVA_MOD = 0x7D7,
		kVA_FLOOR = 0x7D8,
		kVA_CEIL = 0x7D9,
		kVA_ABS = 0x7DA,
		kVA_ROUND = 0x7DB,
		kVA_GT = 0x7DC,
		kVA_GTE = 0x7DD,
		kVA_EQ = 0x7DE,
		kVA_NEQ = 0x7DF,
		kVA_LT = 0x7E0,
		kVA_LTE = 0x7E1,
		kVA_AND = 0x7E2,
		kVA_OR = 0x7E3,
		kVA_NOT = 0x7E4,
		kVA_ONLYIF = 0x7E5,
		kVA_ONLYIFNOT = 0x7E6,
		kVA_REF = 0x7E7,
		kVA_LEFT_PAREN = 0x7E8,
		kVA_RIGHT_PAREN = 0x7E9,
		kVA_FIRST_ACTION = 0x7D0,
		kVA_LAST_ACTION = 0x7E9,
	};
}
