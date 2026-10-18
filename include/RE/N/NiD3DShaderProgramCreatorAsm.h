#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderProgramCreator.h"

namespace RE
{
	class NiD3DShaderProgramCreatorAsm :
		public NiD3DShaderProgramCreator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderProgramCreatorAsm };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderProgramCreatorAsm };

		// add
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A

		// members
		std::uint32_t m_uiShaderCreationFlags;  // 04
		void*         m_pvConstantBuffer;       // 08
		std::uint32_t m_uiConstantBufferSize;   // 0C?
	};
}
