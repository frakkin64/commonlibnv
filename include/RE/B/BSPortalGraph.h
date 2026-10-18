#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTObjectArray.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class BSMultiBoundRoom;
	class BSOcclusionPlane;
	class BSPortal;
	class NiAVObject;
	class NiNode;

	class BSPortalGraph :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPortalGraph };
		static constexpr auto VTABLE{ VTABLE::BSPortalGraph };

		// override (NiRefObject)
		virtual ~BSPortalGraph() = default;  // 00

		// members
		NiTPointerList<BSOcclusionPlane*>           lOccluderList;             // 08
		NiTPointerList<BSPortal*>                   lPortalList;               // 14
		NiTPointerList<NiPointer<BSMultiBoundRoom>> lMultiBoundRoomList;       // 20
		NiPointer<BSMultiBoundRoom>                 spMultiBoundRoomRoot;      // 2C
		NiTPointerList<NiPointer<BSMultiBoundRoom>> lMultiBoundRoomAccumList;  // 30
		NiTObjectArray<NiPointer<NiAVObject>>       m_kAlwaysRenderChildren;   // 3C
		NiPointer<NiNode>                           spPortalNodeRoot;          // 4C
		NiTPointerList<NiPointer<NiAVObject>>       kAttachAlwaysRenderQueue;  // 50
		NiTPointerList<NiPointer<NiAVObject>>       kDetachAlwaysRenderQueue;  // 5C
		BSSimpleArray<NiPointer<NiNode>, 1024>      kUnboundNodes;             // 68
	};
	static_assert(sizeof(BSPortalGraph) == 0x78);
}
