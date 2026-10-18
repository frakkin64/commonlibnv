#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderProgramCreatorAsm.h"

namespace RE
{
	class NiD3DShaderProgramCreatorObj :
		public NiD3DShaderProgramCreatorAsm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderProgramCreatorObj };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderProgramCreatorObj };

	};
}
