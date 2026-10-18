#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiDynamicEffect;
	class NiTextureEffect;

	class NiDynamicEffectState :
		public NiRefObject  // 00
	{
	public:
		class ListItem;

		class ListItem
		{
		public:
			// members
			NiDynamicEffectState::ListItem* m_pNext;  // 00?
			NiDynamicEffect*                m_pItem;  // 04?
		};

		// members
		bool                            m_bMultiTexture;    // 08
		std::uint8_t                    pad09[0x3];         // 09
		NiDynamicEffectState::ListItem* m_pLightList;       // 0C
		NiDynamicEffectState::ListItem* m_pProjLightList;   // 10
		NiDynamicEffectState::ListItem* m_pProjShadowList;  // 14
		NiTextureEffect*                m_pEnvMap;          // 18?
		NiTextureEffect*                m_pFogMap;          // 1C?
	};
}
