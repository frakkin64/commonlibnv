#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class MemoryLevelManager_MEM_FREE_DATA
	{
	public:
		// members
		bool         bOldInstantResourceRelease;    // 00
		bool         bOldInstantVertexDeclRelease;  // 01
		bool         bOldInstantTextureRelease;     // 02
		bool         bLockedRenderer;               // 03
		bool         bRunHeapClean;                 // 04
		std::uint8_t pad05[0x3];                    // 05
		std::int32_t iTexturePurgeCount;            // 08?
	};
}
