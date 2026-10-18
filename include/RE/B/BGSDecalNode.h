#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSTempEffect;
	class NiAVObject;
	class NiCloningProcess;
	class NiCullingProcess;
	class NiObject;

	class BGSDecalNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDecalNode };
		static constexpr auto VTABLE{ VTABLE::BGSDecalNode };

		// override (NiNode)
		virtual ~BGSDecalNode() = default;                                          // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;      // 12
		virtual void ProcessClone(NiCloningProcess& kCloning) override;             // 1A
		virtual void OnVisible(NiCullingProcess& kCuller) override;                 // 35
		virtual void AttachChild(NiAVObject* apChild, bool abFirstAvail) override;  // 37

		// add
		virtual bool IsDecalNode();                                            // 40
		virtual void AttachChild_41(BSTempEffect* apDecal, bool bFirstAvail);  // 41

		BGSDecalNode* ctor()
		{
			using func_t = BGSDecalNode*(__thiscall*)(BGSDecalNode*);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalNode::ctor };
			return func(this);
		}

		BGSDecalNode* ctor(NiNode* apNode, bool abSkinnedNode)
		{
			using func_t = BGSDecalNode*(__thiscall*)(BGSDecalNode*, NiNode*, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalNode::ctor_1 };
			return func(this, apNode, abSkinnedNode);
		}

		void Init()
		{
			using func_t = decltype(&BGSDecalNode::Init);
			static REL::Relocation<func_t> func{ Offsets::BGSDecalNode::Init };
			func(this);
		}

	public:
		// members
		BSSimpleList<NiPointer<BSTempEffect>>* pDecalList;    // AC
		bool                                   bSkinnedNode;  // B0
		std::uint8_t                           padB1[0x3];    // B1
	};
	static_assert(sizeof(BGSDecalNode) == 0xB4);
}
