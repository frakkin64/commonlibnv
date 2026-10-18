#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) hkaRagdollRaycastInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaRagdollRaycastInterface };
		static constexpr auto VTABLE{ VTABLE::hkaRagdollRaycastInterface };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
	};
}
