#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGPUProgram.h"

namespace RE
{
	class NiD3DShaderProgramCreator;
	class NiDX9RenderState;
	class NiDX9Renderer;

	class NiD3DShaderProgram :
		public NiGPUProgram  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderProgram };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderProgram };

		// add
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A
		virtual void Unk_0B();  // 0B
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F
		virtual void Unk_10();  // 10
		virtual void Unk_11();  // 11
		virtual void Unk_12();  // 12
		virtual void Unk_13();  // 13
		virtual void Unk_14();  // 14
		virtual void Unk_15();  // 15
		virtual void Unk_16();  // 16
		virtual void Unk_17();  // 17
		virtual void Unk_18();  // 18
		virtual void Unk_19();  // 19
		virtual void Unk_1A();  // 1A
		virtual void Unk_1B();  // 1B
		virtual void Unk_1C();  // 1C
		virtual void Unk_1D();  // 1D
		virtual void Unk_1E();  // 1E

		// members
		char*                      m_pszName;               // 0C
		char*                      m_pszShaderProgramName;  // 10
		std::uint32_t              m_uiCodeSize;            // 14
		void*                      m_pvCode;                // 18
		NiD3DShaderProgramCreator* m_pkCreator;             // 1C
		void*                      m_pkD3DDevice;           // 20?
		NiDX9Renderer*             m_pkD3DRenderer;         // 24?
		NiDX9RenderState*          m_pkD3DRenderState;      // 28?
	};
}
