#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BIPED_OBJECT.h"
#include "RE/B/BS_TASK_STATE.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFile.h"

namespace RE
{
	class BSFaceGenModel;
	class BipedAnim;
	class NiNode;
	class QueuedModel;
	class TESObjectREFR;

	class QueuedHelmet :
		public QueuedFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedHelmet };
		static constexpr auto VTABLE{ VTABLE::QueuedHelmet };

		// override (QueuedFile)
		virtual ~QueuedHelmet() = default;                                                      // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void PostProcess() override;                                                    // 05
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A

		QueuedHelmet* ctor(BipedAnim* apBipedAnim, IO_TASK_PRIORITY aePriority, BIPED_OBJECT aeBipedObject)
		{
			using func_t = QueuedHelmet*(__thiscall*)(QueuedHelmet*, BipedAnim*, IO_TASK_PRIORITY, BIPED_OBJECT);
			static REL::Relocation<func_t> func{ Offsets::QueuedHelmet::ctor };
			return func(this, apBipedAnim, aePriority, aeBipedObject);
		}

		void Attach()
		{
			using func_t = decltype(&QueuedHelmet::Attach);
			static REL::Relocation<func_t> func{ Offsets::QueuedHelmet::Attach };
			func(this);
		}

	public:
		// members
		BipedAnim*                pBipedAnim;                // 28
		NiPointer<QueuedModel>    spQueuedHelmetModel[20];   // 2C
		NiPointer<BSFaceGenModel> spHelmetFaceGenModel[20];  // 7C
		NiPointer<NiNode>         spClonedHelmetNode[20];    // CC
		TESObjectREFR*            pRef;                      // 11C
		std::uint8_t              cFlags;                    // 120
		std::uint8_t              pad121[0x7];               // 121
	};
	static_assert(sizeof(QueuedHelmet) == 0x128);
}
