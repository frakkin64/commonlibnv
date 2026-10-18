#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpRemoveTerminalsMoppModifier.h"

namespace RE
{
	class hkBitField;

	class hkpRemoveTerminalsMoppModifier2 :
		public hkpRemoveTerminalsMoppModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRemoveTerminalsMoppModifier2 };
		static constexpr auto VTABLE{ VTABLE::hkpRemoveTerminalsMoppModifier2 };

		// override (hkpRemoveTerminalsMoppModifier)
		virtual ~hkpRemoveTerminalsMoppModifier2() = default;  // 00

		// members
		const hkBitField* m_enabledKeys;  // 1C?
	};
}
