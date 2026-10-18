#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpEntity;

	class __declspec(novtable) hkpEntityActivationListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpEntityActivationListener };
		static constexpr auto VTABLE{ VTABLE::hkpEntityActivationListener };

		// add
		virtual ~hkpEntityActivationListener() = default;           // 00
		virtual void entityDeactivatedCallback(hkpEntity* a_arg1);  // 01
		virtual void entityActivatedCallback(hkpEntity* a_arg1);    // 02
	};
}
