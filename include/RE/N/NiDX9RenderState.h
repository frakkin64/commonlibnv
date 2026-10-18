#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiDX9RenderState :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDX9RenderState };
		static constexpr auto VTABLE{ VTABLE::NiDX9RenderState };

		class NiRenderStateSetting;

		class NiRenderStateSetting
		{
		public:
			// members
			// not placed: m_uiDefaultValue(absent)
		};

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
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C
		virtual void Unk_2D();  // 2D
		virtual void Unk_2E();  // 2E
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
		virtual void Unk_3B();  // 3B
		virtual void Unk_3C();  // 3C
		virtual void Unk_3D();  // 3D
		virtual void Unk_3E();  // 3E
		virtual void Unk_3F();  // 3F
		virtual void Unk_40();  // 40
		virtual void Unk_41();  // 41

		// members
		// not placed: m_uiFlags(absent), m_aD3DVertexBlendMappings(absent), m_auiAlphaMapping(absent), m_auiAlphaTestMapping(absent), m_uiSrcAlphaCaps(absent), m_uiDestAlphaCaps(absent), m_spDisabledAlphaProperty(absent), m_fCameraNear(absent), m_fCameraFar(absent), m_fCameraDepthRange(absent), m_fMaxFogFactor(absent), m_fMaxFogValue(absent), m_kCurrentFogColor(absent), m_uiCurrentFogColor(absent), m_auiStencilTestMapping(absent), m_auiStencilActionMapping(absent), m_auiCullModeMapping(absent), m_uiLeftHanded(absent), m_auiZBufferTestMapping(absent), m_bDeclaration(absent), m_uiCurrentFVF(absent), m_uiPreviousFVF(absent), m_hCurrentVertexDeclaration(absent), m_hPreviousVertexDeclaration(absent), m_uiMRTBlendSettings(absent), m_akRenderStateSettings(absent), bRenderStateLocks(absent), m_akSamplerStateSettings(absent), m_hCurrentVertexShader(absent), m_hPreviousVertexShader(absent), m_hCurrentPixelShader(absent), m_hPreviousPixelShader(absent), m_spShaderConstantManager(absent), m_pkD3DDevice(absent), m_pkD3DRenderer(absent), m_kD3DCaps9(absent)
	};
}
