#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSNiNode.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class BSRangeNode :
		public BSNiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSRangeNode };
		static constexpr auto VTABLE{ VTABLE::BSRangeNode };

		// override (BSNiNode)
		virtual ~BSRangeNode() = default;                                             // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		// add
		virtual void ParseNameForRanges();  // 41

		BSRangeNode* ctor()
		{
			using func_t = BSRangeNode*(__thiscall*)(BSRangeNode*);
			static REL::Relocation<func_t> func{ Offsets::BSRangeNode::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: bEnabled, cCurrent, cMin, cMax
	};
}
