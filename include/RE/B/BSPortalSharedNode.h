#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiNode.h"

namespace RE
{
	class BSCompoundFrustum;
	class BSPortal;
	class NiCloningProcess;
	class NiCullingProcess;
	class NiObject;
	class ShadowSceneLight;

	class BSPortalSharedNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPortalSharedNode };
		static constexpr auto VTABLE{ VTABLE::BSPortalSharedNode };

		// override (NiNode)
		virtual ~BSPortalSharedNode() = default;                                // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12
		virtual void OnVisible(NiCullingProcess& kCuller) override;             // 35

		BSPortalSharedNode* ctor(BSPortal* apPortal)
		{
			using func_t = BSPortalSharedNode*(__thiscall*)(BSPortalSharedNode*, BSPortal*);
			static REL::Relocation<func_t> func{ Offsets::BSPortalSharedNode::ctor };
			return func(this, apPortal);
		}

	public:
		// members
		BSCompoundFrustum*                     pCompoundFrustum;  // AC
		BSSimpleArray<ShadowSceneLight*, 1024> kLights;           // B0
		BSPortal*                              pPortal;           // C0
	};
	static_assert(sizeof(BSPortalSharedNode) == 0xC4);
}
