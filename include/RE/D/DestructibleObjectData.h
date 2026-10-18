#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class DestructibleObjectStage;
	class QueuedFile;

	class DestructibleObjectData
	{
	public:
		// members
		std::uint32_t             iHealth;                       // 00?
		std::uint8_t              cNumStages;                    // 04
		std::uint8_t              cFlags;                        // 05
		std::uint16_t             pad06;                         // 06
		DestructibleObjectStage** pStagesArray;                  // 08
		volatile std::int32_t     iReplacementModelRefCount;     // 0C?
		NiPointer<QueuedFile>     spPreloadedReplacementModels;  // 10?
	};
}
