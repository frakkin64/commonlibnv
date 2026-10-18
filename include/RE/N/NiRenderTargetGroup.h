#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderTargetGroup_RendererData.h"

namespace RE
{
	class Ni2DBuffer;
	class NiDepthStencilBuffer;

	class NiRenderTargetGroup :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRenderTargetGroup };
		static constexpr auto VTABLE{ VTABLE::NiRenderTargetGroup };

		using RendererData = NiRenderTargetGroup_RendererData;

		// add
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

		// members
		bool                              bForceNoMSAASurface;     // 08
		bool                              bAddDSRestoreSurface;    // 09
		std::uint16_t                     pad0A;                   // 0A
		std::uint32_t                     uiDepthBase;             // 0C
		bool                              bResolveDepth;           // 10
		std::uint8_t                      pad11[0x3];              // 11
		NiPointer<Ni2DBuffer>             m_aspBuffers[4];         // 14
		std::uint32_t                     m_uiNumBuffers;          // 24
		NiPointer<NiDepthStencilBuffer>   m_spDepthStencilBuffer;  // 28?
		NiRenderTargetGroup_RendererData* m_pkRendererData;        // 2C?
	};
}
