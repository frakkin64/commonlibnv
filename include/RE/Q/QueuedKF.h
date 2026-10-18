#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class KFModel;

	class QueuedKF :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedKF };
		static constexpr auto VTABLE{ VTABLE::QueuedKF };

		// override (QueuedFileEntry)
		virtual ~QueuedKF() = default;                                                          // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		QueuedKF* ctor(char const* apFileName, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedKF*(__thiscall*)(QueuedKF*, char const*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedKF::ctor };
			return func(this, apFileName, aePriority);
		}

		QueuedKF* ctor(KFModel* apKFModel, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedKF*(__thiscall*)(QueuedKF*, KFModel*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedKF::ctor_1 };
			return func(this, apKFModel, aePriority);
		}

	public:
		// members
		NiPointer<KFModel> spKFModel;   // 30
		std::uint8_t       cFlags;      // 34
		std::uint8_t       pad35[0x3];  // 35
	};
	static_assert(sizeof(QueuedKF) == 0x38);
}
