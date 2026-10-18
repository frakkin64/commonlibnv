#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) hkaRaycastInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaRaycastInterface };
		static constexpr auto VTABLE{ VTABLE::hkaRaycastInterface };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
	};
}
