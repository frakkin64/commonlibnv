#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiAlphaProperty;
	class NiStencilProperty;
	class NiTexture;
	class NiTriBasedGeomData;

	class DistantLODShaderProperty_CachedGeometry :
		public NiRefObject  // 00
	{
	public:
		// members
		NiPointer<NiTriBasedGeomData> spTriGeomData;       // 08?
		bool                          bTristrip;           // 0C?
		std::uint8_t                  pad0D[0x3];          // 0D
		float*                        pInstanceIndex;      // 10?
		std::int32_t                  iVertices;           // 14?
		NiPointer<NiTexture>          spBaseTexture;       // 18?
		NiPointer<NiAlphaProperty>    spAlphaBlend;        // 1C?
		NiPointer<NiAlphaProperty>    spAlphaNoBlend;      // 20?
		NiPointer<NiStencilProperty>  spStencil;           // 24?
		float                         fBoundRadius;        // 28?
		std::int32_t                  iMaxInstanceCount;   // 2C?
		bool                          bBillboard;          // 30?
		std::uint8_t                  pad31;               // 31
		std::uint16_t                 usInstanceTriCount;  // 32?
	};
}
