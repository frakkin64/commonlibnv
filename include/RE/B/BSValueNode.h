#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSNiNode.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiNode;
	class NiObject;
	class NiStream;
	class NiUpdateData;

	class BSValueNode :
		public BSNiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSValueNode };
		static constexpr auto VTABLE{ VTABLE::BSValueNode };

		// override (BSNiNode)
		virtual ~BSValueNode() = default;                                             // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void UpdateWorldData(NiUpdateData& UpdateData) override;              // 2E

		// add
		virtual bool ParseNameForValue();  // 41

		BSValueNode* ctor()
		{
			using func_t = BSValueNode*(__thiscall*)(BSValueNode*);
			static REL::Relocation<func_t> func{ Offsets::BSValueNode::ctor };
			return func(this);
		}

		BSValueNode* ctor(NiNode* apNode)
		{
			using func_t = BSValueNode*(__thiscall*)(BSValueNode*, NiNode*);
			static REL::Relocation<func_t> func{ Offsets::BSValueNode::ctor_1 };
			return func(this, apNode);
		}

	public:
		// members
		// not placed: iType(absent)
		std::uint32_t padAC;       // AC
		std::uint8_t  m_uFlags;    // B0
		std::uint8_t  padB1[0x3];  // B1
		std::int32_t  iValue;      // B4
	};
	static_assert(sizeof(BSValueNode) == 0xB8);
}
