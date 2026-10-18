#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESTexture1024.h"

namespace RE
{
	class TESIconTree :
		public TESTexture1024  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESIconTree };
		static constexpr auto VTABLE{ VTABLE::TESIconTree };

	};
}
