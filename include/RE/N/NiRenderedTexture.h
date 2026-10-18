#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/Ni2DBuffer_MultiSamplePreference.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture.h"

namespace RE
{
	class Ni2DBuffer;

	class NiRenderedTexture :
		public NiTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiRenderedTexture };
		static constexpr auto VTABLE{ VTABLE::NiRenderedTexture };

		// add
		virtual void Unk_29();  // 29

		// members
		NiPointer<Ni2DBuffer>            m_spBuffer;        // 30
		std::uint32_t                    uiAliasOffset;     // 34?
		NiRenderedTexture*               pAliasTexture;     // 38?
		Ni2DBuffer_MultiSamplePreference eMSAA;             // 3C?
		bool                             bRenderedTexture;  // 40?
		bool                             bForceD3DFormat;   // 41?
		std::uint16_t                    pad42;             // 42
		std::uint32_t                    iForcedD3DFormat;  // 44?
	};
}
