#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;

	class BSNiNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSNiNode };
		static constexpr auto VTABLE{ VTABLE::BSNiNode };

		// override (NiNode)
		virtual ~BSNiNode() = default;                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;  // 12

		// add
		virtual void ReparentSkinInstances(NiNode* apRoot, NiNode* apNewParent);  // 40

		BSNiNode* ctor()
		{
			using func_t = BSNiNode*(__thiscall*)(BSNiNode*);
			static REL::Relocation<func_t> func{ Offsets::BSNiNode::ctor };
			return func(this);
		}

		BSNiNode* ctor(NiNode* apNode, bool abKeepChildren)
		{
			using func_t = BSNiNode*(__thiscall*)(BSNiNode*, NiNode*, bool);
			static REL::Relocation<func_t> func{ Offsets::BSNiNode::ctor_1 };
			return func(this, apNode, abKeepChildren);
		}

	protected:
		void CopyMembers(BSNiNode* pDest, NiCloningProcess& arCloneData)
		{
			using func_t = decltype(&BSNiNode::CopyMembers);
			static REL::Relocation<func_t> func{ Offsets::BSNiNode::CopyMembers };
			func(this, pDest, arCloneData);
		}
	};
	static_assert(sizeof(BSNiNode) == 0xAC);
}
