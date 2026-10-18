#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class BGSDistantTreeBlock;
	class TESWorldSpace;

	class BGSDistantTreeBlockLoadTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSDistantTreeBlockLoadTask };
		static constexpr auto VTABLE{ VTABLE::BGSDistantTreeBlockLoadTask };

		// override (QueuedFileEntry)
		virtual ~BGSDistantTreeBlockLoadTask() = default;                                       // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		BGSDistantTreeBlockLoadTask* ctor(BGSDistantTreeBlock* apBlock, TESWorldSpace* apWorld, std::int32_t aiX, std::int32_t aiY, std::int32_t aiLevel, bool abPostApocalypse)
		{
			using func_t = BGSDistantTreeBlockLoadTask*(__thiscall*)(BGSDistantTreeBlockLoadTask*, BGSDistantTreeBlock*, TESWorldSpace*, std::int32_t, std::int32_t, std::int32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::BGSDistantTreeBlockLoadTask::ctor };
			return func(this, apBlock, apWorld, aiX, aiY, aiLevel, abPostApocalypse);
		}

	public:
		// members
		BGSDistantTreeBlock* pBlock;            // 30
		bool                 bFinishedQueuing;  // 34
		std::uint8_t         pad35[0x3];        // 35
		std::int32_t         iX;                // 38
		std::int32_t         iY;                // 3C
		std::int32_t         iLevel;            // 40
		bool                 bCanceled;         // 44
		bool                 bFileExists;       // 45
		std::uint16_t        pad46;             // 46
	};
}
