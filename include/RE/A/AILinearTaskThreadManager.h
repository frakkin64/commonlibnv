#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSAISemaphore.h"
#include "RE/B/BSThread_StackSize.h"

namespace RE
{
	class AILinearTaskThread;

	class AILinearTaskThreadManager
	{
	public:
		enum class AI_THREAD_INDEX : std::int32_t
		{
			kAI_THREAD_1 = 0x0,
			kAI_THREAD_2 = 0x1,
			kAI_THREAD_COUNT = 0x2,
		};

		static AILinearTaskThreadManager* QInstance()
		{
			using func_t = decltype(&AILinearTaskThreadManager::QInstance);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::QInstance };
			return func();
		}

		static bool QRunningThreads()
		{
			using func_t = decltype(&AILinearTaskThreadManager::QRunningThreads);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::QRunningThreads };
			return func();
		}

		void CreateThreads()
		{
			using func_t = decltype(&AILinearTaskThreadManager::CreateThreads);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::CreateThreads };
			func(this);
		}

		void DestroyThreads()
		{
			using func_t = decltype(&AILinearTaskThreadManager::DestroyThreads);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::DestroyThreads };
			func(this);
		}

		void AddThread(AILinearTaskThreadManager::AI_THREAD_INDEX aiThreadIndex, std::uint32_t aiHWThread, void* apfnTaskFunc, char const* apThreadName, BSThread_StackSize aeStackSize)
		{
			using func_t = decltype(&AILinearTaskThreadManager::AddThread);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::AddThread };
			func(this, aiThreadIndex, aiHWThread, apfnTaskFunc, apThreadName, aeStackSize);
		}

		void WaitOnThreadStage(AILinearTaskThreadManager::AI_THREAD_INDEX aiThreadIndex, std::uint32_t aiStage)
		{
			using func_t = decltype(&AILinearTaskThreadManager::WaitOnThreadStage);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::WaitOnThreadStage };
			func(this, aiThreadIndex, aiStage);
		}

		static bool ShouldQueue3DTask()
		{
			using func_t = decltype(&AILinearTaskThreadManager::ShouldQueue3DTask);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::ShouldQueue3DTask };
			return func();
		}

		static void WaitMainRendering()
		{
			using func_t = decltype(&AILinearTaskThreadManager::WaitMainRendering);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::WaitMainRendering };
			func();
		}

		static void SetMainRendering(bool abVal)
		{
			using func_t = decltype(&AILinearTaskThreadManager::SetMainRendering);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::SetMainRendering };
			func(abVal);
		}

	protected:
		static void AIThreadCombined()
		{
			using func_t = decltype(&AILinearTaskThreadManager::AIThreadCombined);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::AIThreadCombined };
			func();
		}

		static void AIThread1TaskFunc()
		{
			using func_t = decltype(&AILinearTaskThreadManager::AIThread1TaskFunc);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::AIThread1TaskFunc };
			func();
		}

		static void AIThread2TaskFunc()
		{
			using func_t = decltype(&AILinearTaskThreadManager::AIThread2TaskFunc);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThreadManager::AIThread2TaskFunc };
			func();
		}

	public:
		// members
		AILinearTaskThread*   AITaskThreadArray[3];  // 00
		volatile std::int32_t AITaskThreadStage[3];  // 0C
		BSAISemaphore         AITaskStageSema[3];    // 18?
	};
}
