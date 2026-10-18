#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiShaderConstantMap.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiD3DShaderProgram;
	class NiDX9RenderState;
	class NiDX9Renderer;
	class NiShaderConstantMapEntry;

	class NiD3DShaderConstantMap :
		public NiShaderConstantMap  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderConstantMap };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderConstantMap };

		// add
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
		virtual void Unk_1F();  // 1F
		virtual void Unk_20();  // 20
		virtual void Unk_21();  // 21
		virtual void Unk_22();  // 22
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28
		virtual void Unk_29();  // 29

		// members
		NiTObjectArray<NiPointer<NiShaderConstantMapEntry>> m_aspEntries;           // 0C?
		NiTObjectArray<NiPointer<NiShaderConstantMapEntry>> m_aspDefinedEntries;    // 1C?
		bool                                                m_bModified;            // 2C?
		std::uint8_t                                        pad2D[0x3];             // 2D
		NiD3DShaderProgram*                                 m_pkLastShaderProgram;  // 30
		std::uint32_t                                       m_eLastError;           // 34
		void*                                               m_pkD3DDevice;          // 38
		NiDX9Renderer*                                      m_pkD3DRenderer;        // 3C
		NiDX9RenderState*                                   m_pkD3DRenderState;     // 40?
	};
}
