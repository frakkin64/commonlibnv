#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IOTask.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiNode;
	class TESObjectREFR;

	class AttachDistant3DTask :
		public IOTask  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AttachDistant3DTask };
		static constexpr auto VTABLE{ VTABLE::AttachDistant3DTask };

		// override (IOTask)
		virtual ~AttachDistant3DTask() = default;  // 00
		virtual void Run() override;               // 01
		virtual void Finish() override;            // 02
		virtual void PostProcess() override;       // 05

		AttachDistant3DTask* ctor(TESObjectREFR* apRef, NiNode* apNode)
		{
			using func_t = AttachDistant3DTask*(__thiscall*)(AttachDistant3DTask*, TESObjectREFR*, NiNode*);
			static REL::Relocation<func_t> func{ Offsets::AttachDistant3DTask::ctor };
			return func(this, apRef, apNode);
		}

	public:
		// members
		TESObjectREFR*    pRef;    // 18
		NiPointer<NiNode> spNode;  // 1C
	};
	static_assert(sizeof(AttachDistant3DTask) == 0x20);
}
