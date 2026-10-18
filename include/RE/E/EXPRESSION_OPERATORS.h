#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class EXPRESSION_OPERATORS : std::int32_t
	{
		kEXP_LEFTPAREN = 0x0,
		kEXP_RIGHTPAREN = 0x1,
		kEXP_AND = 0x2,
		kEXP_OR = 0x3,
		kEXP_LESSEQUAL = 0x4,
		kEXP_LESS = 0x5,
		kEXP_GREATEREQUAL = 0x6,
		kEXP_GREATER = 0x7,
		kEXP_EQUAL = 0x8,
		kEXP_NOTEQUAL = 0x9,
		kEXP_SUBTRACT = 0xA,
		kEXP_ADD = 0xB,
		kEXP_MULTIPLY = 0xC,
		kEXP_DIVIDE = 0xD,
		kEXP_MODULUS = 0xE,
		kEXP_UNARYMINUS = 0xF,
		kEXP_COUNT = 0x10,
	};
}
