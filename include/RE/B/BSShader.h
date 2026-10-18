#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderManager_eBSSMPassEnum.h"
#include "RE/N/NiD3DDefaultShader.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;

	class BSShader :
		public NiD3DDefaultShader  // 00
	{
	public:
		class tshader;

		class tshader
		{
		public:
			// members
			char*        pFilename;      // 00?
			std::uint8_t pMacros[0x48];  // 04? opaque
		};

		static void MakePath(char const* apFile, char* apResult)
		{
			using func_t = decltype(&BSShader::MakePath);
			static REL::Relocation<func_t> func{ Offsets::BSShader::MakePath };
			func(apFile, apResult);
		}

	protected:
		NiD3DVertexShader* CompileVertexShaderHLSL(char const* apFilename, void const* apMacro, char const* apTarget, char const* apCacheName)
		{
			using func_t = decltype(&BSShader::CompileVertexShaderHLSL);
			static REL::Relocation<func_t> func{ Offsets::BSShader::CompileVertexShaderHLSL };
			return func(this, apFilename, apMacro, apTarget, apCacheName);
		}

		NiD3DPixelShader* CompilePixelShaderHLSL(char const* apFilename, void const* apMacro, char const* apTarget, char const* apCacheName)
		{
			using func_t = decltype(&BSShader::CompilePixelShaderHLSL);
			static REL::Relocation<func_t> func{ Offsets::BSShader::CompilePixelShaderHLSL };
			return func(this, apFilename, apMacro, apTarget, apCacheName);
		}

	public:
		// members
		NiPointer<NiD3DPass>          spPass[1];    // 5C
		BSShaderManager_eBSSMPassEnum ePass;        // 60
		bool                          bFirstPass;   // 64
		std::uint8_t                  pad65[0x3];   // 65
		std::int32_t                  iShaderType;  // 68
	};
	static_assert(sizeof(BSShader) == 0x6C);
}
