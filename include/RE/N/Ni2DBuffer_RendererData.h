#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/Ni2DBuffer_MultiSamplePreference.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class Ni2DBuffer;
	class NiPixelFormat;

	class Ni2DBuffer_RendererData :
		public NiRefObject  // 00
	{
	public:
		// members
		Ni2DBuffer*                      m_pkBuffer;       // 08?
		const NiPixelFormat*             m_pkPixelFormat;  // 0C?
		Ni2DBuffer_MultiSamplePreference m_eMSAAPref;      // 10?
	};
}
