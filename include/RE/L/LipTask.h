#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class LipSyncBackgroundManager;
	class LipSynchAnim;
	class MobileObject;

	class LipTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LipTask };
		static constexpr auto VTABLE{ VTABLE::LipTask };

		// override (QueuedFileEntry)
		virtual ~LipTask() = default;                                                           // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		LipTask* ctor(LipSyncBackgroundManager* apOwner, MobileObject* apActor, char const* apFilename)
		{
			using func_t = LipTask*(__thiscall*)(LipTask*, LipSyncBackgroundManager*, MobileObject*, char const*);
			static REL::Relocation<func_t> func{ Offsets::LipTask::ctor };
			return func(this, apOwner, apActor, apFilename);
		}

	public:
		// members
		MobileObject*             pActor;         // 30
		LipSynchAnim*             pLipSynicAnim;  // 34
		LipSyncBackgroundManager* pOwner;         // 38
		std::uint32_t             pad3C;          // 3C
	};
	static_assert(sizeof(LipTask) == 0x40);
}
