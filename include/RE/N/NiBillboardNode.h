#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBillboardNode_FaceMode.h"
#include "RE/N/NiNode.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiCullingProcess;
	class NiObject;
	class NiStream;
	class NiUpdateData;

	class NiBillboardNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBillboardNode };
		static constexpr auto VTABLE{ VTABLE::NiBillboardNode };

		using FaceMode = NiBillboardNode_FaceMode;

		// override (NiNode)
		virtual ~NiBillboardNode() = default;                                                              // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                             // 12
		virtual void LoadBinary(NiStream& arStream) override;                                              // 13
		virtual void LinkObject(NiStream& arStream) override;                                              // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                     // 15
		virtual void SaveBinary(NiStream& arStream) override;                                              // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                 // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                       // 18
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;          // 29
		virtual void UpdateSelectedDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;  // 2A
		virtual void UpdateRigidDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;     // 2B
		virtual void UpdateWorldBound() override;                                                          // 2F
		virtual void OnVisible(NiCullingProcess& kCuller) override;                                        // 35

		NiBillboardNode* ctor()
		{
			using func_t = NiBillboardNode*(__thiscall*)(NiBillboardNode*);
			static REL::Relocation<func_t> func{ Offsets::NiBillboardNode::ctor };
			return func(this);
		}

		static char* GetViewerString(char const* pcPrefix, NiBillboardNode_FaceMode eMode)
		{
			using func_t = decltype(&NiBillboardNode::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiBillboardNode::GetViewerString };
			return func(pcPrefix, eMode);
		}

	public:
		// members
		std::uint16_t m_uFlags;      // AC
		std::uint16_t padAE;         // AE
		float         m_fSavedTime;  // B0
	};
	static_assert(sizeof(NiBillboardNode) == 0xB4);
}
