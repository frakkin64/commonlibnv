#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPointerMap.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTPrimitiveSet.h"
#include "RE/N/NiTimeController.h"

namespace RE
{
	class NiCloningProcess;
	class NiNode;
	class NiObject;
	class NiStream;
	class NiUpdateData;

	class NiBSBoneLODController :
		public NiTimeController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSBoneLODController };
		static constexpr auto VTABLE{ VTABLE::NiBSBoneLODController };

		// override (NiTimeController)
		virtual ~NiBSBoneLODController() = default;                                   // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void ProcessClone(NiCloningProcess& kCloning) override;               // 1A
		virtual void PostLinkObject(NiStream& kStream) override;                      // 1B
		virtual void Update(NiUpdateData& UpdateData) override;                       // 25

		// add
		virtual bool CanBeExtracted();  // 2D

		NiBSBoneLODController* ctor()
		{
			using func_t = NiBSBoneLODController*(__thiscall*)(NiBSBoneLODController*);
			static REL::Relocation<func_t> func{ Offsets::NiBSBoneLODController::ctor };
			return func(this);
		}

	protected:
		static void FindBoneRootNodes(NiNode* pkNode, NiTPrimitiveSet<NiNode*>& kBoneRootNodes)
		{
			using func_t = decltype(&NiBSBoneLODController::FindBoneRootNodes);
			static REL::Relocation<func_t> func{ Offsets::NiBSBoneLODController::FindBoneRootNodes };
			func(pkNode, kBoneRootNodes);
		}

		void CollectMarkedBones(NiNode* pkBone, NiTPointerMap<NiNode*, std::uint32_t>& kBoneToLOD, NiTPointerMap<std::uint32_t, bool>& kUsedLODs)
		{
			using func_t = decltype(&NiBSBoneLODController::CollectMarkedBones);
			static REL::Relocation<func_t> func{ Offsets::NiBSBoneLODController::CollectMarkedBones };
			func(this, pkBone, kBoneToLOD, kUsedLODs);
		}

	public:
		// members
		std::int32_t                                 m_iLOD;        // 34
		std::uint32_t                                m_uiNumLODs;   // 38
		NiTPrimitiveArray<NiTPrimitiveSet<NiNode*>*> m_kBoneArray;  // 3C
	};
	static_assert(sizeof(NiBSBoneLODController) == 0x4C);
}
