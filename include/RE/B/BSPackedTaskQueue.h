#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSPackedTask.h"
#include "RE/B/BSSemaphore.h"
#include "RE/B/BSTCommonScrapHeapMessageQueue.h"

namespace RE
{
	class ScrapHeap;

	class BSPackedTaskQueue
	{
	public:
		void ThreadBeginInput()
		{
			using func_t = decltype(&BSPackedTaskQueue::ThreadBeginInput);
			static REL::Relocation<func_t> func{ Offsets::BSPackedTaskQueue::ThreadBeginInput };
			func(this);
		}

		BSPackedTaskQueue* ctor(ScrapHeap* apScrapHeap, void* apUnpackFunc)
		{
			using func_t = BSPackedTaskQueue*(__thiscall*)(BSPackedTaskQueue*, ScrapHeap*, void*);
			static REL::Relocation<func_t> func{ Offsets::BSPackedTaskQueue::ctor };
			return func(this, apScrapHeap, apUnpackFunc);
		}

		void ThreadEndInput()
		{
			using func_t = decltype(&BSPackedTaskQueue::ThreadEndInput);
			static REL::Relocation<func_t> func{ Offsets::BSPackedTaskQueue::ThreadEndInput };
			func(this);
		}

	public:
		// members
		BSTCommonScrapHeapMessageQueue<BSPackedTask> Queue;         // 00
		BSSemaphore                                  InputSources;  // 14
		void*                                        pUnpackFunc;   // 20
		bool                                         bProcessing;   // 24
		std::uint8_t                                 pad25[0x3];    // 25
	};
}
