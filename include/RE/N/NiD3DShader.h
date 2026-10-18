#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShaderInterface.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DRenderStateGroup;
	class NiD3DShaderConstantMap;
	class NiD3DShaderDeclaration;

	class NiD3DShader :
		public NiD3DShaderInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShader };
		static constexpr auto VTABLE{ VTABLE::NiD3DShader };

		// add
		virtual void Unk_3B();  // 3B

		static void _SDMInit()
		{
			using func_t = decltype(&NiD3DShader::_SDMInit);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShader::_SDMInit };
			func();
		}

	public:
		// members
		bool                              m_bUsesNiRenderState;   // 24
		bool                              m_bUsesNiLightState;    // 25
		std::uint16_t                     pad26;                  // 26
		NiPointer<NiD3DShaderDeclaration> m_spShaderDecl;         // 28
		NiD3DRenderStateGroup*            m_pkRenderStateGroup;   // 2C
		NiPointer<NiD3DShaderConstantMap> m_spPixelConstantMap;   // 30
		NiPointer<NiD3DShaderConstantMap> m_spVertexConstantMap;  // 34
		std::uint32_t                     m_uiCurrentPass;        // 38
	};
}
