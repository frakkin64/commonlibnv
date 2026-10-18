#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiD3DShader.h"

namespace RE
{
	class NiDynamicEffectState;

	class NiD3DDefaultShader :
		public NiD3DShader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DDefaultShader };
		static constexpr auto VTABLE{ VTABLE::NiD3DDefaultShader };

		enum class PassFogStatus : std::int32_t
		{
			kNO_FOG = 0x0,
			kBLACK_FOG = 0x1,
			kSTANDARD_FOG = 0x2,
		};

		NiD3DDefaultShader* ctor()
		{
			using func_t = NiD3DDefaultShader*(__thiscall*)(NiD3DDefaultShader*);
			static REL::Relocation<func_t> func{ Offsets::NiD3DDefaultShader::ctor };
			return func(this);
		}

	public:
		// members
		bool                               m_bBaseTextureAlphaNeeded;  // 3C?
		bool                               m_bVertexColorAlphaNeeded;  // 3D?
		std::uint16_t                      pad3E;                      // 3E
		std::uint32_t                      m_uiMaxTextureIndex;        // 40?
		std::uint32_t                      m_uiRemainingStages;        // 44?
		std::uint32_t                      m_uiRemainingTextures;      // 48?
		std::uint32_t                      m_uiOldLightingValue;       // 4C
		NiD3DDefaultShader::PassFogStatus* m_peFogPassArray;           // 50
		std::uint32_t                      m_uiFogPassArraySize;       // 54
		const NiDynamicEffectState*        m_pkLastState;              // 58
	};
}
