#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderProgramCreator.h"

namespace RE
{
	class NiD3DShaderProgramCreatorHLSL :
		public NiD3DShaderProgramCreator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderProgramCreatorHLSL };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderProgramCreatorHLSL };

		// add
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A

	protected:
		bool LoadShaderCodeFromFile(char const* pcFileName, char const* pcEntryPoint, char const* pcShaderTarget, void*& pvCode, std::uint32_t& uiCodeSize, void** pkConstantTable, bool bRecoverable)
		{
			using func_t = decltype(&NiD3DShaderProgramCreatorHLSL::LoadShaderCodeFromFile);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShaderProgramCreatorHLSL::LoadShaderCodeFromFile };
			return func(this, pcFileName, pcEntryPoint, pcShaderTarget, pvCode, uiCodeSize, pkConstantTable, bRecoverable);
		}

		bool LoadShaderCodeFromBuffer(void const* pvBuffer, std::uint32_t uiBufferSize, char const* pcEntryPoint, char const* pcShaderTarget, void*& pvCode, std::uint32_t& uiCodeSize, void** pkConstantTable, bool bRecoverable)
		{
			using func_t = decltype(&NiD3DShaderProgramCreatorHLSL::LoadShaderCodeFromBuffer);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShaderProgramCreatorHLSL::LoadShaderCodeFromBuffer };
			return func(this, pvBuffer, uiBufferSize, pcEntryPoint, pcShaderTarget, pvCode, uiCodeSize, pkConstantTable, bRecoverable);
		}

	public:
		// members
		std::uint32_t m_uiShaderCreationFlags;  // 04
	};
}
