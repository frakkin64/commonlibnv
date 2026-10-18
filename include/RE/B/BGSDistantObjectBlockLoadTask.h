#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class BGSDistantObjectBlock;
	class BSMultiBoundNode;
	class NiGeometry;
	class TESWorldSpace;

	class BGSDistantObjectBlockLoadTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDistantObjectBlockLoadTask };
		static constexpr auto VTABLE{ VTABLE::BGSDistantObjectBlockLoadTask };

		// override (QueuedFileEntry)
		virtual ~BGSDistantObjectBlockLoadTask() = default;                                     // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		BGSDistantObjectBlockLoadTask* ctor(BGSDistantObjectBlock* apBlock, TESWorldSpace* apWorld, std::int32_t aiX, std::int32_t aiY, std::int32_t aiLevel, bool abPostApocalypse, bool abHighPriority, bool abStingerVersion)
		{
			using func_t = BGSDistantObjectBlockLoadTask*(__thiscall*)(BGSDistantObjectBlockLoadTask*, BGSDistantObjectBlock*, TESWorldSpace*, std::int32_t, std::int32_t, std::int32_t, bool, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantObjectBlockLoadTask::ctor };
			return func(this, apBlock, apWorld, aiX, aiY, aiLevel, abPostApocalypse, abHighPriority, abStingerVersion);
		}

	public:
		// members
		bool                        bFinishedQueuing;  // 30
		std::uint8_t                pad31[0x3];        // 31
		std::int32_t                iX;                // 34
		std::int32_t                iY;                // 38
		std::int32_t                iLevel;            // 3C
		BGSDistantObjectBlock*      pBlock;            // 40
		TESWorldSpace*              pWorldSpace;       // 44
		NiPointer<NiGeometry>       spMesh;            // 48
		NiPointer<BSMultiBoundNode> spNode;            // 4C
		bool                        bCanceled;         // 50
		bool                        bStingerVersion;   // 51
		std::uint8_t                pad52[0x6];        // 52
	};
}
