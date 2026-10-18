#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiAVObject;
	class NiNode;

	// not confirmed: no named code in the executable refers to this type
	class PathingDebugGeometry :
		public NiRefObject  // 00
	{
	public:
		// members
		NiPointer<NiNode>     spBaseGeometry;        // 08?
		NiPointer<NiAVObject> spRequest;             // 0C?
		NiPointer<NiAVObject> spUnloadedPathBefore;  // 10?
		NiPointer<NiAVObject> spLoadedPath;          // 14?
		NiPointer<NiAVObject> spUnloadedPathAfter;   // 18?
		NiPointer<NiAVObject> spHighLevelPath;       // 1C?
		NiPointer<NiAVObject> spTether;              // 20?
		NiPointer<NiAVObject> spTarget;              // 24?
		NiPointer<NiAVObject> spLookAtPoint;         // 28?
		NiPointer<NiAVObject> spRotateGoal;          // 2C?
		NiPointer<NiAVObject> spActorRotation;       // 30?
		NiPointer<NiAVObject> spAvoidNodes;          // 34?
		NiPointer<NiAVObject> spSearchData;          // 38?
		NiPointer<NiAVObject> spSmoothingData;       // 3C?
		bool                  bForceUpdate;          // 40?
		std::uint8_t          pad41[0x3];            // 41
	};
}
