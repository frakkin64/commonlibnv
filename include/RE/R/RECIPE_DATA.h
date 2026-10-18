#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class RECIPE_DATA
	{
	public:
		// members
		std::int32_t ReqSkillId;     // 00
		std::int32_t ReqSkillLevel;  // 04
		std::int32_t CategoryID;     // 08
		std::int32_t SubCategoryID;  // 0C
	};
	static_assert(sizeof(RECIPE_DATA) == 0x10);
}
