#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) InterfacedClass
	{
	public:
		static constexpr auto RTTI{ RTTI::InterfacedClass };
		static constexpr auto VTABLE{ VTABLE::InterfacedClass };

		// add
		virtual ~InterfacedClass() = default;                   // 00
		virtual void* AllocateInterface(std::uint32_t a_arg1);  // 01
	};
	static_assert(sizeof(InterfacedClass) == 0x4);
}
