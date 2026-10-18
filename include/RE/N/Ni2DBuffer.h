#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/Ni2DBuffer_MultiSamplePreference.h"
#include "RE/N/Ni2DBuffer_RendererData.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Ni2DBuffer :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Ni2DBuffer };
		static constexpr auto VTABLE{ VTABLE::Ni2DBuffer };

		using MultiSamplePreference = Ni2DBuffer_MultiSamplePreference;
		using RendererData = Ni2DBuffer_RendererData;

		enum class CopyFilterPreference : std::int32_t
		{
			kCOPY_FILTER_NONE = 0x0,
			kCOPY_FILTER_POINT = 0x1,
			kCOPY_FILTER_LINEAR = 0x2,
			kCOPY_FILTER_MAX = 0x3,
		};

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25

		// members
		std::uint32_t                      m_uiWidth;         // 08?
		std::uint32_t                      m_uiHeight;        // 0C?
		NiPointer<Ni2DBuffer_RendererData> m_spRendererData;  // 10
	};
}
