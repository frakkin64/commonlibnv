#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiGPUProgramCache.h"
#include "RE/N/NiGPUProgram_ProgramType.h"

namespace RE
{
	class NiD3DGPUProgramCache :
		public NiGPUProgramCache  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DGPUProgramCache };
		static constexpr auto VTABLE{ VTABLE::NiD3DGPUProgramCache };

		// add
		virtual void Unk_26();  // 26

		NiD3DGPUProgramCache* ctor(std::uint32_t uiVersion, char const* pcWorkingDir, NiGPUProgram_ProgramType eType, NiFixedString const& kShaderProfile, char const* pcMaterialIdentifier, bool bAutoWriteCacheToDisk, bool bWriteDebugHLSLFile, bool bLocked, bool bLoad)
		{
			using func_t = NiD3DGPUProgramCache*(__thiscall*)(NiD3DGPUProgramCache*, std::uint32_t, char const*, NiGPUProgram_ProgramType, NiFixedString const&, char const*, bool, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::NiD3DGPUProgramCache::ctor };
			return func(this, uiVersion, pcWorkingDir, eType, kShaderProfile, pcMaterialIdentifier, bAutoWriteCacheToDisk, bWriteDebugHLSLFile, bLocked, bLoad);
		}

	public:
		// members
		NiGPUProgram_ProgramType m_eType;                // 3C
		bool                     m_bWriteDebugHLSLFile;  // 40
		std::uint8_t             pad41[0x3];             // 41
		NiFixedString            m_kMaterialIdentifier;  // 44
	};
}
