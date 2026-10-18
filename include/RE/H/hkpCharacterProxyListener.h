#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) hkpCharacterProxyListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCharacterProxyListener };
		static constexpr auto VTABLE{ VTABLE::hkpCharacterProxyListener };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
	};
	static_assert(sizeof(hkpCharacterProxyListener) == 0x4);
}
