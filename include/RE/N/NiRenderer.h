#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiCriticalSection.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderer_ClearFlags.h"

namespace RE
{
	class NiAccumulator;
	class NiDynamicEffectState;
	class NiPropertyState;
	class NiShader;

	class NiRenderer :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRenderer };
		static constexpr auto VTABLE{ VTABLE::NiRenderer };

		using ClearFlags = NiRenderer_ClearFlags;

		enum class EFrameState : std::int32_t
		{
			kFRAMESTATE_OUTSIDE_FRAME = 0x0,
			kFRAMESTATE_INSIDE_FRAME = 0x1,
			kFRAMESTATE_INSIDE_OFFSCREEN_FRAME = 0x2,
			kFRAMESTATE_WAITING_FOR_DISPLAY = 0x3,
		};

		// add
		virtual void Unk_23();  // 23

		[[nodiscard]] static NiRenderer* GetSingleton() noexcept
		{
			static REL::Relocation<NiRenderer**> singleton{ Offsets::NiRenderer::ms_pkRenderer };
			return *singleton;
		}

		NiRenderer::EFrameState GetFrameState() const
		{
			using func_t = decltype(&NiRenderer::GetFrameState);
			static REL::Relocation<func_t> func{ Offsets::NiRenderer::GetFrameState };
			return func(this);
		}

	public:
		// members
		NiPointer<NiAccumulator> m_spAccum;                     // 08
		NiPropertyState*         m_pkCurrProp;                  // 0C
		NiDynamicEffectState*    m_pkCurrEffects;               // 10
		NiPointer<NiShader>      m_spErrorShader;               // 14
		std::uint8_t             pad18[0x68];                   // 18
		NiCriticalSection        m_kRendererLock;               // 80
		std::uint8_t             padA4[0x5C];                   // A4
		NiCriticalSection        m_kPrecacheCriticalSection;    // 100
		std::uint8_t             pad124[0x5C];                  // 124
		NiCriticalSection        m_kSourceDataCriticalSection;  // 180
		std::uint8_t             pad1A4[0x5C];                  // 1A4
		NiRenderer::EFrameState  m_eFrameState;                 // 200
		std::uint32_t            m_uiFrameID;                   // 204
		bool                     m_bRenderTargetGroupActive;    // 208
		bool                     m_bBatchRendering;             // 209?
		std::uint16_t            pad20A;                        // 20A
	};
}
