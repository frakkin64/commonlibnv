#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool;

	class __declspec(novtable) hkpMoppModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppModifier };
		static constexpr auto VTABLE{ VTABLE::hkpMoppModifier };

		// add
		virtual ~hkpMoppModifier() = default;                                                                        // 00
		virtual hkBool* shouldTerminalBeRemoved(hkBool* a_arg1, std::uint32_t a_arg2, const std::uint32_t* a_arg3);  // 01
		virtual void addTerminalRemoveInfo(std::int32_t a_arg1);                                                     // 02
	};
}
