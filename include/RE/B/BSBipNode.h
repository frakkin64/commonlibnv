#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"

namespace RE
{
	class NiAVObject;

	class BSBipNode :
		public NiNode  // 00
	{
	public:
		void UpdateBipOnly(float a_arg1, NiAVObject* a_arg2)
		{
			using func_t = decltype(&BSBipNode::UpdateBipOnly);
			static REL::Relocation<func_t> func{ Offsets::BSBipNode::UpdateBipOnly };
			func(this, a_arg1, a_arg2);
		}

		void UpdateAllButBip(float afTime)
		{
			using func_t = decltype(&BSBipNode::UpdateAllButBip);
			static REL::Relocation<func_t> func{ Offsets::BSBipNode::UpdateAllButBip };
			func(this, afTime);
		}

		void RemoveObject(NiAVObject* apObject)
		{
			using func_t = decltype(&BSBipNode::RemoveObject);
			static REL::Relocation<func_t> func{ Offsets::BSBipNode::RemoveObject };
			func(this, apObject);
		}
	};
}
