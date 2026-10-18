#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiD3DRenderStateGroup
	{
	public:
		class NiD3DRSEntry;

		class NiD3DRSEntry
		{
		public:
			// members
			std::uint32_t                        m_uiRenderState;  // 00?
			std::uint32_t                        m_uiValue;        // 04?
			NiD3DRenderStateGroup::NiD3DRSEntry* m_pkNext;         // 08?
			NiD3DRenderStateGroup::NiD3DRSEntry* m_pkPrev;         // 0C?
		};

		// members
		bool                                 m_bRendererOwned;       // 00?
		std::uint8_t                         pad01[0x3];             // 01
		std::uint32_t                        m_uiStateCount;         // 04?
		NiD3DRenderStateGroup::NiD3DRSEntry* m_pkRenderStates;       // 08?
		std::uint32_t                        m_uiSavedStateCount;    // 0C?
		NiD3DRenderStateGroup::NiD3DRSEntry* m_pkSavedRenderStates;  // 10?
	};
}
