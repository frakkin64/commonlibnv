#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class TESObjectREFR;
	class bhkPhantom;

	class LOADED_REF_DATA
	{
	public:
		// members
		TESObjectREFR*        pCurrentWaterObject;   // 00?
		std::int32_t          iUnderwaterCount;      // 04?
		float                 fRelevantWaterHeight;  // 08?
		float                 fCachedRadius;         // 0C?
		std::uint32_t         iFlags;                // 10
		NiPointer<NiAVObject> m_spData3D;            // 14
		NiPointer<bhkPhantom> spPhantom;             // 18
	};
}
