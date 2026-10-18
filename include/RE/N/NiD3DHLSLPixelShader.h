#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DPixelShader.h"

namespace RE
{
	class NiD3DHLSLPixelShader :
		public NiD3DPixelShader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DHLSLPixelShader };
		static constexpr auto VTABLE{ VTABLE::NiD3DHLSLPixelShader };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28

		// members
		char* m_pcEntryPoint;     // 30
		char* m_pcShaderTarget;   // 34
		void* m_pkConstantTable;  // 38
	};
}
