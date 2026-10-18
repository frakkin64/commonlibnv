#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) BSTaskletData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTaskletData };
		static constexpr auto VTABLE{ VTABLE::BSTaskletData };

		// add
		virtual ~BSTaskletData() = default;  // 00
		virtual bool OnStartup();            // 01
		virtual void Process();              // 02
		virtual void OnComplete();           // 03

		// members
		bool         bYielding;   // 04?
		std::uint8_t pad05[0x3];  // 05
	};
}
