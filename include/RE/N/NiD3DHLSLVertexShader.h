#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DVertexShader.h"

namespace RE
{
	class NiD3DHLSLVertexShader :
		public NiD3DVertexShader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DHLSLVertexShader };
		static constexpr auto VTABLE{ VTABLE::NiD3DHLSLVertexShader };

		// add
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C
		virtual void Unk_2D();  // 2D
		virtual void Unk_2E();  // 2E

		// members
		char* m_pcEntryPoint;     // 3C
		char* m_pcShaderTarget;   // 40
		void* m_pkConstantTable;  // 44
	};
}
