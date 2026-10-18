#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpEntity;

	class __declspec(novtable) hkpSaveContactPointsUtil_EntitySelector
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSaveContactPointsUtil_EntitySelector };
		static constexpr auto VTABLE{ VTABLE::hkpSaveContactPointsUtil_EntitySelector };

		// add
		virtual ~hkpSaveContactPointsUtil_EntitySelector() = default;  // 00
		virtual std::int32_t isEntityOk(const hkpEntity* a_arg1);      // 01
	};
}
