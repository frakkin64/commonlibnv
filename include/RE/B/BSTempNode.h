#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"

namespace RE
{
	class BSTempNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempNode };
		static constexpr auto VTABLE{ VTABLE::BSTempNode };

		// override (NiNode)
		virtual ~BSTempNode() = default;  // 00

		BSTempNode* ctor(float afTime)
		{
			using func_t = BSTempNode*(__thiscall*)(BSTempNode*, float);
			static REL::Relocation<func_t> func{ Offsets::BSTempNode::ctor };
			return func(this, afTime);
		}

	public:
		// members
		float fTime;  // AC
	};
	static_assert(sizeof(BSTempNode) == 0xB0);
}
