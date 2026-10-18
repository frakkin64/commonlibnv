#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IO_FILE_INDEX.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class LoadedFile;

	class QueuedFileLoad :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedFileLoad };
		static constexpr auto VTABLE{ VTABLE::QueuedFileLoad };

		// override (QueuedFileEntry)
		virtual ~QueuedFileLoad() = default;           // 00
		virtual void Run() override;                   // 01
		virtual void Finish() override;                // 02
		virtual void QueueMe() override;               // 08
		virtual std::uint8_t GetFileIndex() override;  // 0B

		QueuedFileLoad* ctor(char const* apFileName, IO_TASK_PRIORITY aePriority, IO_FILE_INDEX aeFileIndex)
		{
			using func_t = QueuedFileLoad*(__thiscall*)(QueuedFileLoad*, char const*, IO_TASK_PRIORITY, IO_FILE_INDEX);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileLoad::ctor };
			return func(this, apFileName, aePriority, aeFileIndex);
		}

		QueuedFileLoad* ctor(LoadedFile* apLoadedFile, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedFileLoad*(__thiscall*)(QueuedFileLoad*, LoadedFile*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileLoad::ctor_1 };
			return func(this, apLoadedFile, aePriority);
		}

	public:
		// members
		NiPointer<LoadedFile> spLoadedFile;  // 30
		IO_FILE_INDEX         eFileIndex;    // 34
	};
}
