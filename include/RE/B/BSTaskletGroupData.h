#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) BSTaskletGroupData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTaskletGroupData };
		static constexpr auto VTABLE{ VTABLE::BSTaskletGroupData };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02

		// members
		bool         bComplete;   // 04?
		std::uint8_t pad05[0x3];  // 05
	};
}
