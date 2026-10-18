#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFile.h"

namespace RE
{
	class ArchiveFile :
		public BSFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ArchiveFile };
		static constexpr auto VTABLE{ VTABLE::ArchiveFile };

		// members
		// not placed: spArchive, iArchiveOffset
	};
}
