#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFile.h"

namespace RE
{
	class AttachDistant3DTask;
	class Model;
	class NiAVObject;
	class NiNode;
	class QueuedModel;
	class TESObjectREFR;

	class QueuedReference :
		public QueuedFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedReference };
		static constexpr auto VTABLE{ VTABLE::QueuedReference };

		// override (QueuedFile)
		virtual ~QueuedReference() = default;                                                   // 00
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void PostProcess() override;                                                    // 05
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A

		// add
		virtual void QueueModels();                    // 0B
		virtual void UseDistant3D();                   // 0C
		virtual void AttachDistant3D(NiNode* apNode);  // 0D
		virtual bool BackgroundClone();                // 0E
		virtual void Attach();                         // 0F
		virtual void FinishAttach();                   // 10

		QueuedReference* ctor(TESObjectREFR* apRef, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedReference*(__thiscall*)(QueuedReference*, TESObjectREFR*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedReference::ctor };
			return func(this, apRef, aePriority);
		}

	public:
		// members
		TESObjectREFR*                 pRef;                   // 28
		NiPointer<QueuedModel>         spQueuedModel;          // 2C
		NiPointer<Model>               spModel;                // 30
		NiPointer<NiAVObject>          spCloned3D;             // 34
		NiPointer<AttachDistant3DTask> spAttachDistant3DTask;  // 38
		std::uint32_t                  pad3C;                  // 3C
	};
	static_assert(sizeof(QueuedReference) == 0x40);
}
