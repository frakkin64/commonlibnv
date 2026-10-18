#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiShader.h"

namespace RE
{
	class NiDX9RenderState;
	class NiDX9Renderer;

	class NiD3DShaderInterface :
		public NiShader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderInterface };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderInterface };

		// add
		virtual void Unk_2F();  // 2F
		virtual void Unk_30();  // 30
		virtual void Unk_31();  // 31
		virtual void Unk_32();  // 32
		virtual void Unk_33();  // 33
		virtual void Unk_34();  // 34
		virtual void Unk_35();  // 35
		virtual void Unk_36();  // 36
		virtual void Unk_37();  // 37
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
		virtual void Unk_3A();  // 3A

		static std::uint32_t InitializeShaderSystem(NiDX9Renderer* pkD3DRenderer)
		{
			using func_t = decltype(&NiD3DShaderInterface::InitializeShaderSystem);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShaderInterface::InitializeShaderSystem };
			return func(pkD3DRenderer);
		}

	public:
		// members
		void*             m_pkD3DDevice;            // 14
		NiDX9Renderer*    m_pkD3DRenderer;          // 18
		NiDX9RenderState* m_pkD3DRenderState;       // 1C
		bool              m_bIsBestImplementation;  // 20
		std::uint8_t      pad21[0x3];               // 21
	};
}
