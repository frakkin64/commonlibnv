#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_FACEGEN_LOD.h"
#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSFaceGenAnimationData;
	class FaceGenUpdateData;
	class NiCloningProcess;
	class NiCullingProcess;
	class NiMatrix3;
	class NiObject;
	class NiUpdateData;

	class BSFaceGenNiNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenNiNode };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenNiNode };

		// override (NiNode)
		virtual ~BSFaceGenNiNode() = default;                                                      // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                     // 12
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;               // 18
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;  // 29
		virtual void UpdateTransformAndBounds(NiUpdateData& UpdateData) override;                  // 30
		virtual void OnVisible(NiCullingProcess& kCuller) override;                                // 35

		// add
		virtual BSFaceGenAnimationData* GetAnimationData() const;          // 40
		virtual void SetAnimationData(BSFaceGenAnimationData* apData);     // 41
		virtual NiMatrix3* GetBaseRotation(NiMatrix3* a_arg1) const;       // 42
		virtual void SetBaseRotation(NiMatrix3 const& aRot);               // 43
		virtual bool GetAnimationUpdate() const;                           // 44
		virtual void SetAnimationUpdate(bool abUpdate);                    // 45
		virtual bool GetApplyRotToParent() const;                          // 46
		virtual void SetApplyRotToParent(bool abApply);                    // 47
		virtual bool GetFixedNormals() const;                              // 48
		virtual void SetFixedNormals(bool abFixedNormals);                 // 49
		virtual void FixSkinInstances(NiNode* apRoot, bool abWarnOnFail);  // 4A

		BSFaceGenNiNode* ctor()
		{
			using func_t = BSFaceGenNiNode*(__thiscall*)(BSFaceGenNiNode*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::ctor };
			return func(this);
		}

		void ApplyFacialExpressions(FaceGenUpdateData& arObjData)
		{
			using func_t = decltype(&BSFaceGenNiNode::ApplyFacialExpressions);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::ApplyFacialExpressions };
			func(this, arObjData);
		}

		void ApplyFacialModifiers(FaceGenUpdateData& arObjData)
		{
			using func_t = decltype(&BSFaceGenNiNode::ApplyFacialModifiers);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::ApplyFacialModifiers };
			func(this, arObjData);
		}

		void ApplyFacialPhonemes(FaceGenUpdateData& arObjData)
		{
			using func_t = decltype(&BSFaceGenNiNode::ApplyFacialPhonemes);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::ApplyFacialPhonemes };
			func(this, arObjData);
		}

		void ApplyFacialCustomMorphs(FaceGenUpdateData& arObjData)
		{
			using func_t = decltype(&BSFaceGenNiNode::ApplyFacialCustomMorphs);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::ApplyFacialCustomMorphs };
			func(this, arObjData);
		}

		void UpdateAllChildrenMorphData(bool abChanged)
		{
			using func_t = decltype(&BSFaceGenNiNode::UpdateAllChildrenMorphData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::UpdateAllChildrenMorphData };
			func(this, abChanged);
		}

		void CheckLOD(BS_FACEGEN_LOD aiForceLOD)
		{
			using func_t = decltype(&BSFaceGenNiNode::CheckLOD);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::CheckLOD };
			func(this, aiForceLOD);
		}

	protected:
		void UpdateMorphing(NiUpdateData& UpdateData)
		{
			using func_t = decltype(&BSFaceGenNiNode::UpdateMorphing);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenNiNode::UpdateMorphing };
			func(this, UpdateData);
		}

	public:
		// members
		// not placed: BaseRotation, bForceBaseMorph, bFixedNormals, bAnimationUpdate, bRotatedLastUpdate, bApplyRotationToParent, fLastTime, bUsingLoResHead, bIAmPlayerCharacter, bIAmInDialogue, bDisableMorphUpdates, bForceMorphUpdates, pActor, bCycleFaceGenCoord
		std::uint32_t                     padAC;            // AC
		NiPointer<BSFaceGenAnimationData> spAnimationData;  // B0
		std::uint8_t                      padB4[0x3C];      // B4
	};
	static_assert(sizeof(BSFaceGenNiNode) == 0xF0);
}
