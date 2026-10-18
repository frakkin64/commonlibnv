#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class BGSTerrainChunk;
	class BSMultiBoundNode;
	class NiGeometry;
	class TESWorldSpace;

	class BGSTerrainChunkLoadTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSTerrainChunkLoadTask };
		static constexpr auto VTABLE{ VTABLE::BGSTerrainChunkLoadTask };

		// override (QueuedFileEntry)
		virtual ~BGSTerrainChunkLoadTask() = default;                                           // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		// members
		bool                        bFinishedQueuing;           // 30
		std::uint8_t                pad31[0x3];                 // 31
		std::int32_t                iX;                         // 34
		std::int32_t                iY;                         // 38
		std::int32_t                iLevel;                     // 3C
		BGSTerrainChunk*            pChunk;                     // 40
		TESWorldSpace*              pWorldSpace;                // 44
		NiPointer<NiGeometry>       spMesh;                     // 48
		NiPointer<NiGeometry>       spWater;                    // 4C
		NiPointer<NiGeometry>       spWaterAtReflectionHeight;  // 50
		NiPointer<BSMultiBoundNode> spNode;                     // 54
		bool                        bCanceled;                  // 58
		std::uint8_t                pad59[0x7];                 // 59
	};
}
