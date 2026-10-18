#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiShaderDeclaration.h"
#include "RE/N/NiShaderDeclaration_ShaderParameter.h"
#include "RE/N/NiShaderDeclaration_ShaderParameterType.h"
#include "RE/N/NiShaderDeclaration_ShaderParameterUsage.h"

namespace RE
{
	class NiDX9Renderer;
	class NiDX9VertexBufferManager;

	class NiD3DShaderDeclaration :
		public NiShaderDeclaration  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderDeclaration };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderDeclaration };

		class ShaderRegisterEntry;
		class ShaderRegisterStream;

		enum class ShaderParameterTesselator : std::int32_t
		{
			kSPTESS_DEFAULT = 0x0,
			kSPTESS_PARTIALU = 0x1,
			kSPTESS_PARTIALV = 0x2,
			kSPTESS_CROSSUV = 0x3,
			kSPTESS_UV = 0x4,
			kSPTESS_LOOKUP = 0x5,
			kSPTESS_LOOKUPPRESAMPLED = 0x6,
			kSPTESS_COUNT = 0x7,
		};

		class ShaderRegisterEntry
		{
		public:
			// members
			std::uint32_t                                     m_uiRegister;       // 00?
			std::uint32_t                                     m_uiPackingOffset;  // 04?
			NiShaderDeclaration_ShaderParameter               m_eInput;           // 08?
			NiShaderDeclaration_ShaderParameterType           m_eType;            // 0C?
			NiD3DShaderDeclaration::ShaderParameterTesselator m_eTesselator;      // 10?
			NiShaderDeclaration_ShaderParameterUsage          m_eUsage;           // 14?
			std::uint32_t                                     m_uiUsageIndex;     // 18?
		};

		class ShaderRegisterStream
		{
		public:
			// members
			bool                                         m_bValid;        // 00?
			std::uint8_t                                 pad01[0x3];      // 01
			std::uint32_t                                m_uiEntryCount;  // 04?
			NiD3DShaderDeclaration::ShaderRegisterEntry* m_pkEntries;     // 08?
			std::uint32_t                                m_uiStride;      // 0C?
		};

		// add
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C
		virtual void Unk_2D();  // 2D

		// members
		NiDX9Renderer*                                m_pkRenderer;             // 08?
		NiDX9VertexBufferManager*                     m_pkVBManager;            // 0C?
		void*                                         m_pkD3DDevice;            // 10?
		std::uint32_t                                 m_uiDeclSize;             // 14?
		std::uint32_t                                 m_uiCurrDeclIndex;        // 18?
		std::uint32_t                                 m_uiMaxStreamEntryCount;  // 1C?
		std::uint32_t                                 m_uiStreamCount;          // 20?
		NiD3DShaderDeclaration::ShaderRegisterStream* m_pkStreamEntries;        // 24?
		bool                                          m_bModified;              // 28?
		std::uint8_t                                  pad29[0x3];               // 29
	};
}
