#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMap.h"

namespace RE
{
	class IMemoryHeap;
	class ScrapHeap;

	class MemoryManager
	{
	public:
		static MemoryManager& Instance()
		{
			using func_t = decltype(&MemoryManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::MemoryManager::Instance };
			return func();
		}

		ScrapHeap* GetThreadScrapHeap()
		{
			using func_t = decltype(&MemoryManager::GetThreadScrapHeap);
			static REL::Relocation<func_t> func{ Offsets::MemoryManager::GetThreadScrapHeap };
			return func(this);
		}

	protected:
		void SpecifyPools()
		{
			using func_t = decltype(&MemoryManager::SpecifyPools);
			static REL::Relocation<func_t> func{ Offsets::MemoryManager::SpecifyPools };
			func(this);
		}

		std::uint32_t ProcessMemoryProblem(IMemoryHeap* apHeap, std::int32_t aiMemoryPass, bool* apbAllowSystemAllocs)
		{
			using func_t = decltype(&MemoryManager::ProcessMemoryProblem);
			static REL::Relocation<func_t> func{ Offsets::MemoryManager::ProcessMemoryProblem };
			return func(this, apHeap, aiMemoryPass, apbAllowSystemAllocs);
		}

		void SpecifyMemoryLayout()
		{
			using func_t = decltype(&MemoryManager::SpecifyMemoryLayout);
			static REL::Relocation<func_t> func{ Offsets::MemoryManager::SpecifyMemoryLayout };
			func(this);
		}

	public:
		// members
		bool                             bInitialized;          // 00
		std::uint8_t                     pad01;                 // 01
		std::uint16_t                    iNumHeaps;             // 02
		std::uint16_t                    iNumPhysicalHeaps;     // 04
		std::uint16_t                    pad06;                 // 06
		IMemoryHeap**                    ppHeaps;               // 08
		IMemoryHeap*                     pHeapsByContextA[66];  // 0C
		BSMap<std::uint32_t, ScrapHeap*> kThreadScrapHeapMap;   // 114
		IMemoryHeap**                    ppPhysicalHeaps;       // 124?
		bool                             bSpecialHeaps;         // 128?
		bool                             bAllowPoolUse;         // 129?
		std::uint16_t                    pad12A;                // 12A
		std::uint32_t                    iSysAllocBytes;        // 12C?
		std::uint32_t                    iMallocBytes;          // 130?
	};
}
