#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCullingProcess_BSCPCullingType.h"
#include "RE/B/BSMTRSemaphore.h"
#include "RE/B/BSThread_StackSize.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerListSingleThread.h"

namespace RE
{
	class BSCompoundFrustum;
	class BSShaderAccumulator;
	class NiAVObject;
	class NiCamera;
	class RenderingTaskThread;

	class MTRenderingSystem
	{
	public:
		class AccumTask;

		enum class THREAD_INDEX : std::int32_t
		{
			kTHREAD_1 = 0x0,
			kTHREAD_2 = 0x1,
			kTHREAD_COUNT = 0x2,
		};

		class AccumTask
		{
		public:
			// members
			NiPointer<NiCamera>                      spCamera;             // 00?
			BSCompoundFrustum*                       pFrustum;             // 04?
			NiPointer<NiAVObject>                    spScene;              // 08?
			NiTPointerListSingleThread<NiAVObject*>* pSceneList1;          // 0C?
			NiTPointerListSingleThread<NiAVObject*>* pSceneList2;          // 10?
			NiPointer<BSShaderAccumulator>           spAccum;              // 14?
			BSCullingProcess_BSCPCullingType         kCullType;            // 18?
			std::int32_t                             iBatchRendererIndex;  // 1C?
		};

		static MTRenderingSystem* QInstance()
		{
			using func_t = decltype(&MTRenderingSystem::QInstance);
			static REL::Relocation<func_t> func{ Offsets::MTRenderingSystem::QInstance };
			return func();
		}

		void AddThread(MTRenderingSystem::THREAD_INDEX aiThreadIndex, std::uint32_t aiHWThread, void* apfnTaskFunc, char const* apThreadName, BSThread_StackSize aeStackSize)
		{
			using func_t = decltype(&MTRenderingSystem::AddThread);
			static REL::Relocation<func_t> func{ Offsets::MTRenderingSystem::AddThread };
			func(this, aiThreadIndex, aiHWThread, apfnTaskFunc, apThreadName, aeStackSize);
		}

		void WaitOnThreadStage(MTRenderingSystem::THREAD_INDEX aiThreadIndex, std::int32_t aiStage)
		{
			using func_t = decltype(&MTRenderingSystem::WaitOnThreadStage);
			static REL::Relocation<func_t> func{ Offsets::MTRenderingSystem::WaitOnThreadStage };
			func(this, aiThreadIndex, aiStage);
		}

		void AddAccumTask(NiCamera* apCamera, BSCompoundFrustum* apFrustum, NiAVObject* apScene, NiTPointerListSingleThread<NiAVObject*>* apSceneList1, NiTPointerListSingleThread<NiAVObject*>* apSceneList2, BSShaderAccumulator* apAccum, BSCullingProcess_BSCPCullingType akCullType, std::int32_t aiStage, std::int32_t aiBatchRendererIndex)
		{
			using func_t = decltype(&MTRenderingSystem::AddAccumTask);
			static REL::Relocation<func_t> func{ Offsets::MTRenderingSystem::AddAccumTask };
			func(this, apCamera, apFrustum, apScene, apSceneList1, apSceneList2, apAccum, akCullType, aiStage, aiBatchRendererIndex);
		}

		void CreateThreads()
		{
			using func_t = decltype(&MTRenderingSystem::CreateThreads);
			static REL::Relocation<func_t> func{ Offsets::MTRenderingSystem::CreateThreads };
			func(this);
		}

	public:
		// members
		RenderingTaskThread*         TaskThreadArray[3];  // 00
		volatile std::int32_t        TaskThreadStage[3];  // 0C
		BSMTRSemaphore               TaskStageSema[3];    // 18
		MTRenderingSystem::AccumTask pTaskArray[24];      // 3C
	};
}
