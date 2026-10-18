#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ARCHIVE_TYPE.h"
#include "RE/A/ARCHIVE_TYPE_INDEX.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/Q/QueuedFile.h"

namespace RE
{
	class BSFile;
	class BSFileEntry;

	class QueuedFileEntry :
		public QueuedFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedFileEntry };
		static constexpr auto VTABLE{ VTABLE::QueuedFileEntry };

		// override (QueuedFile)
		virtual ~QueuedFileEntry() = default;  // 00
		virtual void GenerateKey() override;   // 06

		// add
		virtual std::uint8_t GetFileIndex();  // 0B

		QueuedFileEntry* ctor(IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedFileEntry*(__thiscall*)(QueuedFileEntry*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileEntry::ctor };
			return func(this, aePriority);
		}

		void SetFileName(char const* apFileName)
		{
			using func_t = decltype(&QueuedFileEntry::SetFileName);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileEntry::SetFileName };
			func(this, apFileName);
		}

		void LookupFileEntry(ARCHIVE_TYPE_INDEX aeArchiveTypeIndex)
		{
			using func_t = decltype(&QueuedFileEntry::LookupFileEntry);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileEntry::LookupFileEntry };
			func(this, aeArchiveTypeIndex);
		}

		BSFile* GetFile(ARCHIVE_TYPE_INDEX aeArchiveTypeIndex, ARCHIVE_TYPE aeArchiveType)
		{
			using func_t = decltype(&QueuedFileEntry::GetFile);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileEntry::GetFile };
			return func(this, aeArchiveTypeIndex, aeArchiveType);
		}

		void GetLookupFileName(ARCHIVE_TYPE_INDEX aeArchiveTypeIndex, char* apLookupFileName)
		{
			using func_t = decltype(&QueuedFileEntry::GetLookupFileName);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileEntry::GetLookupFileName };
			func(this, aeArchiveTypeIndex, apLookupFileName);
		}

		bool GetDescription(char* apDescription, std::uint32_t aiBufferSize, char* apFileEntryTypeDescription)
		{
			using func_t = decltype(&QueuedFileEntry::GetDescription);
			static REL::Relocation<func_t> func{ Offsets::QueuedFileEntry::GetDescription };
			return func(this, apDescription, aiBufferSize, apFileEntryTypeDescription);
		}

	public:
		// members
		char*        pFileName;   // 28
		BSFileEntry* pFileEntry;  // 2C
	};
	static_assert(sizeof(QueuedFileEntry) == 0x30);
}
