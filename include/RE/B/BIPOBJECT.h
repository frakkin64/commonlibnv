#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiAVObject;
	class TESForm;
	class TESModel;

	class BIPOBJECT
	{
	public:
		// members
		TESForm*     pParent;     // 00
		TESModel*    pPart;       // 04
		NiAVObject*  pPartClone;  // 08
		bool         bSkinned;    // 0C?
		std::uint8_t pad0D[0x3];  // 0D
	};
}
