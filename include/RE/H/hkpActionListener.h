#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpAction;

	class __declspec(novtable) hkpActionListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpActionListener };
		static constexpr auto VTABLE{ VTABLE::hkpActionListener };

		// add
		virtual ~hkpActionListener() = default;                 // 00
		virtual void actionAddedCallback(hkpAction* action);    // 01
		virtual void actionRemovedCallback(hkpAction* action);  // 02
	};
}
