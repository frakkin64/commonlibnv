#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ExpressionOperand
	{
	public:
		// members
		char         Type;        // 00
		std::uint8_t pad01[0x3];  // 01
		union
		{
			std::int32_t eoLong;
			double eoDouble;
		} ___u1;  // 04?
	};
}
