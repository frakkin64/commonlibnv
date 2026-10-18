#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSArchive.h"
#include "RE/B/BSFile.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class Archive :
		public BSFile,  // 00
		public NiRefObject,  // 158
		public BSArchive  // 160
	{
	public:
		static constexpr auto RTTI{ RTTI::Archive };
		static constexpr auto VTABLE{ VTABLE::Archive };

		// members
		// not placed: ArchiveFileTime, iFileNameArrayOffset, iLastDirectoryIndex, iLastFileIndex, ArchiveCriticalSection, cArchiveFlags, pDirectoryStringArray, pDirectoryStringOffsets, pFileNameStringArray, pFileNameStringOffsets, m_iRuntimeID
	};
}
