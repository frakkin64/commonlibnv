#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiD3DPixelShader;
	class NiD3DRenderStateGroup;
	class NiD3DShaderConstantMap;
	class NiD3DTextureStage;
	class NiD3DVertexShader;

	class __declspec(novtable) NiD3DPass
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DPass };
		static constexpr auto VTABLE{ VTABLE::NiD3DPass };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03

		// members
		char                                         m_szName[16];                 // 04?
		std::uint32_t                                m_uiCurrentStage;             // 14?
		std::uint32_t                                m_uiStageCount;               // 18
		std::uint32_t                                m_uiTexturesPerPass;          // 1C
		NiTObjectArray<NiPointer<NiD3DTextureStage>> m_kStages;                    // 20
		NiD3DRenderStateGroup*                       m_pkRenderStateGroup;         // 30
		NiPointer<NiD3DShaderConstantMap>            m_spPixelConstantMap;         // 34
		char*                                        m_pcPixelShaderProgramFile;   // 38
		char*                                        m_pcPixelShaderEntryPoint;    // 3C
		char*                                        m_pcPixelShaderTarget;        // 40
		NiPointer<NiD3DPixelShader>                  m_spPixelShader;              // 44
		NiPointer<NiD3DShaderConstantMap>            m_spVertexConstantMap;        // 48
		char                                         cEnabledStages;               // 4C
		std::uint8_t                                 pad4D[0x3];                   // 4D
		char*                                        m_pcVertexShaderProgramFile;  // 50
		char*                                        m_pcVertexShaderEntryPoint;   // 54
		char*                                        m_pcVertexShaderTarget;       // 58
		NiPointer<NiD3DVertexShader>                 m_spVertexShader;             // 5C
		bool                                         m_bSoftwareVP;                // 60
		bool                                         m_bRendererOwned;             // 61?
		std::uint16_t                                pad62;                        // 62
		std::uint32_t                                m_uiRefCount;                 // 64?
	};
}
