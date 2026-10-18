#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCullingProcess_BSCPCullingType.h"
#include "RE/B/BSMultiBoundShape_BSMBIntersectResult.h"
#include "RE/B/BSNiNode.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BSMultiBound;
	class BSMultiBoundRoom;
	class NiBound;
	class NiCloningProcess;
	class NiCullingProcess;
	class NiObject;
	class NiPoint3;
	class NiStream;
	class NiUpdateData;

	class BSMultiBoundNode :
		public BSNiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundNode };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundNode };

		// override (BSNiNode)
		virtual ~BSMultiBoundNode() = default;                                                     // 00
		virtual BSMultiBoundNode* IsMultiBoundNode() override;                                     // 05
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                     // 12
		virtual void LoadBinary(NiStream& arStream) override;                                      // 13
		virtual void LinkObject(NiStream& arStream) override;                                      // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                             // 15
		virtual void SaveBinary(NiStream& arStream) override;                                      // 16
		virtual bool IsEqual(NiObject* apObject) override;                                         // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;               // 18
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;  // 29
		virtual void UpdateWorldBound() override;                                                  // 2F
		virtual void OnVisible(NiCullingProcess& kCuller) override;                                // 35
		virtual void UpdateUpwardPass() override;                                                  // 3F

		// add
		virtual BSMultiBoundRoom* GetMultiBoundRoom();                                               // 41
		virtual bool QPointWithin(NiPoint3& aPoint);                                                 // 42
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(NiBound const& aTargetBound);       // 44 (reversed overload group)
		virtual BSMultiBoundShape_BSMBIntersectResult CheckBound(BSMultiBound const& aTargetBound);  // 43 (reversed overload group)

		void SetCullingMode(BSCullingProcess_BSCPCullingType aCullingMode)
		{
			using func_t = decltype(&BSMultiBoundNode::SetCullingMode);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundNode::SetCullingMode };
			func(this, aCullingMode);
		}

		BSMultiBoundNode* ctor()
		{
			using func_t = BSMultiBoundNode*(__thiscall*)(BSMultiBoundNode*);
			static REL::Relocation<func_t> func{ Offsets::BSMultiBoundNode::ctor };
			return func(this);
		}

	public:
		// members
		NiPointer<BSMultiBound>          spMultiBound;  // AC
		BSCullingProcess_BSCPCullingType CullingMode;   // B0
	};
	static_assert(sizeof(BSMultiBoundNode) == 0xB4);
}
