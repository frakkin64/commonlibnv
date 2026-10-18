#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTriShape.h"

namespace RE
{
	class NiScreenElements :
		public NiTriShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiScreenElements };
		static constexpr auto VTABLE{ VTABLE::NiScreenElements };

	};
}
