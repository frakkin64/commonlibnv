#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSOcclusionQuery
	{
	public:
		bool GetResult(std::uint32_t* pResult, bool bFlush)
		{
			using func_t = decltype(&BSOcclusionQuery::GetResult);
			static REL::Relocation<func_t> func{ Offsets::BSOcclusionQuery::GetResult };
			return func(this, pResult, bFlush);
		}

	public:
		// members
		std::uint32_t uiNumTiles;  // 00
		void*         pQuery;      // 04?
	};
}
