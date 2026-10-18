#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiTexturingProperty_ClampMode.h"
#include "RE/N/NiTexturingProperty_FilterMode.h"

namespace RE
{
	class NiObject;

	// not confirmed: no named code in the executable refers to this type
	class ImageSpaceTexture
	{
	public:
		// members
		bool                           bForceAniso;         // 00?
		bool                           bIsRenderedTexture;  // 01?
		bool                           bIsTextureBorrowed;  // 02?
		std::uint8_t                   pad03;               // 03
		NiPointer<NiObject>            pTexture;            // 04?
		NiTexturingProperty_FilterMode iFilterMode;         // 08?
		NiTexturingProperty_ClampMode  iClampMode;          // 0C?
	};
}
