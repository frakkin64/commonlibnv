#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpWorld;

	class __declspec(novtable) hkpWorldDeletionListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorldDeletionListener };
		static constexpr auto VTABLE{ VTABLE::hkpWorldDeletionListener };

		// add
		virtual ~hkpWorldDeletionListener() = default;         // 00
		virtual void worldDeletedCallback(hkpWorld* a_arg1);   // 01
		virtual void worldRemoveAllCallback(hkpWorld* world);  // 02
	};
}
