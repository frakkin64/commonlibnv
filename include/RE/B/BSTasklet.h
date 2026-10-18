#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSTaskletData;

	class __declspec(novtable) BSTasklet
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTasklet };
		static constexpr auto VTABLE{ VTABLE::BSTasklet };

		// add
		virtual ~BSTasklet() = default;  // 00

		// members
		BSTaskletData* pData;  // 04?
	};
}
