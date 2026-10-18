#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFadeNode.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSTreeModel;
	class CSpeedTreeRT;
	class NiCullingProcess;
	class NiNode;
	class NiTexturingProperty;
	class NiTriBasedGeom;
	class NiUpdateData;
	class bhkRigidBody;

	class BSTreeNode :
		public BSFadeNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTreeNode };
		static constexpr auto VTABLE{ VTABLE::BSTreeNode };

		// override (BSFadeNode)
		virtual ~BSTreeNode() = default;                                                          // 00
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* pkStrings);                       // 18
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags);          // 29
		virtual void UpdateSelectedDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags);  // 2A
		virtual void OnVisible(NiCullingProcess& arCuller);                                       // 35

		// add
		virtual BSTreeModel* GetModel();                                                 // 40
		virtual NiNode* GetBranchNode();                                                 // 41
		virtual NiNode* GetLeafNode();                                                   // 42
		virtual NiNode* GetBillboardNode();                                              // 43
		virtual NiTriBasedGeom* GetBranchLevel(std::uint16_t asLevel);                   // 44
		virtual NiTriBasedGeom* GetLeafLevel(std::uint16_t asLevel);                     // 45
		virtual NiTriBasedGeom* GetBillboard();                                          // 46
		virtual bool AddBranchLevel(std::uint16_t asLevel, NiTriBasedGeom* apGeom);      // 47
		virtual bool AddLeafLevel(std::uint16_t asLevel, NiTriBasedGeom* apGeom);        // 48
		virtual void SetBillboard(NiTriBasedGeom* apGeom);                               // 49
		virtual bool SetVisibilityForBranches(bool abVisible);                           // 4A
		virtual bool SetVisibilityForLeaves(bool abVisible);                             // 4B
		virtual bool SetVisibilityForBillboards(bool abVisible);                         // 4C
		virtual bool SetVisibilityOnBranch(std::uint16_t asLevel, std::uint8_t acTest);  // 4D
		virtual bool SetVisibilityOnLeaf(std::uint16_t asLevel, std::uint8_t acTest);    // 4E
		virtual bool SetVisibilityOnBillboard(std::uint8_t acTest);                      // 4F
		virtual bool SetTexturePropOnBillboard(NiTexturingProperty* apProp);             // 50
		virtual void UpdateBSTreeNode(float afTime);                                     // 51

		BSTreeNode* ctor(BSTreeModel* apModel, bhkRigidBody* apRigid)
		{
			using func_t = BSTreeNode*(__thiscall*)(BSTreeNode*, BSTreeModel*, bhkRigidBody*);
			static REL::Relocation<func_t> func{ Offsets::BSTreeNode::ctor };
			return func(this, apModel, apRigid);
		}

		void MakeHavokLeaves(CSpeedTreeRT* apST, float afScale)
		{
			using func_t = decltype(&BSTreeNode::MakeHavokLeaves);
			static REL::Relocation<func_t> func{ Offsets::BSTreeNode::MakeHavokLeaves };
			func(this, apST, afScale);
		}

	protected:
		bool CheckForCollision(float afTime)
		{
			using func_t = decltype(&BSTreeNode::CheckForCollision);
			static REL::Relocation<func_t> func{ Offsets::BSTreeNode::CheckForCollision };
			return func(this, afTime);
		}

	public:
		// members
		NiPointer<BSTreeModel>     spModel;              // E4
		NiPointer<NiTriBasedGeom>* pspBranches;          // E8
		NiPointer<NiTriBasedGeom>* pspLeaves;            // EC
		NiPointer<NiTriBasedGeom>  spBillboard;          // F0
		float                      fNextCollisionCheck;  // F4
	};
	static_assert(sizeof(BSTreeNode) == 0xF8);
}
