#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerDebugAllocator.h"
#include "RE/H/hkFlags.h"
#include "RE/H/hkMemorySystem_FlagBits.h"
#include "RE/H/hkMemorySystem_FrameInfo.h"
#include "RE/H/hkMemorySystem_MemoryStatistics.h"
#include "RE/H/hkResult.h"

namespace RE
{
	class hkDebugMemorySnapshot;
	class hkMemoryAllocator;
	class hkMemoryPointerInfo;
	class hkMemoryRouter;
	class hkOstream;
	class hkStackMemory;
	class hkThreadMemory;

	class __declspec(novtable) hkMemorySystem
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemorySystem };
		static constexpr auto VTABLE{ VTABLE::hkMemorySystem };

		using FlagBits = hkMemorySystem_FlagBits;
		using FrameInfo = hkMemorySystem_FrameInfo;
		using MemoryStatistics = hkMemorySystem_MemoryStatistics;

		class _PrintStatisticsInput;

		class _PrintStatisticsInput
		{
		public:
			// members
			hkMemoryAllocator*                                  m_heapAllocator;            // 00?
			hkArray<hkThreadMemory*, hkContainerDebugAllocator> m_threadMemories;           // 04?
			hkArray<hkStackMemory*, hkContainerDebugAllocator>  m_stacks;                   // 10?
			std::uint32_t                                       m_sumAllocatedStackMemory;  // 1C?
			std::uint32_t                                       m_softLimit;                // 20?
		};

		// add
		virtual ~hkMemorySystem() = default;                                                                                              // 00
		virtual hkMemoryRouter* mainInit(const hkMemorySystem_FrameInfo* a_arg1, hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg2);  // 01
		virtual hkResult mainQuit(hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg1);                                                 // 02
		virtual void threadInit(hkMemoryRouter* a_arg1, const char* a_arg2, hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg3);       // 03
		virtual void threadQuit(hkMemoryRouter* a_arg1, hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg2);                           // 04
		virtual void printStatistics(hkOstream* a_arg1);                                                                                  // 05
		virtual hkResult walkMemory(void* a_arg1, void* a_arg2);                                                                          // 06
		virtual void garbageCollect();                                                                                                    // 07
		virtual void advanceFrame();                                                                                                      // 08
		virtual void const* debugFindBaseAddress(void const* p, std::int32_t nbytes);                                                     // 09
		virtual hkResult getMemorySnapshot(hkDebugMemorySnapshot& snapshot);                                                              // 0A
		virtual void debugLockBaseAddress(void const* baseAddress);                                                                       // 0B
		virtual void debugUnlockBaseAddress(void const* baseAddress);                                                                     // 0C
		virtual void debugTagAddress(void const* baseAddress, void const* tag);                                                           // 0D
		virtual hkResult getAllocationCallStack(void* ptr, hkMemoryPointerInfo& info);                                                    // 0E
		virtual void getMemoryStatistics(hkMemorySystem_MemoryStatistics& out);                                                           // 0F

		static hkMemorySystem& getInstance()
		{
			using func_t = decltype(&hkMemorySystem::getInstance);
			static REL::Relocation<func_t> func{ Offsets::hkMemorySystem::getInstance };
			return func();
		}

	protected:
		void _printStatistics(hkOstream& ostr, hkMemorySystem::_PrintStatisticsInput const& input)
		{
			using func_t = decltype(&hkMemorySystem::_printStatistics);
			static REL::Relocation<func_t> func{ Offsets::hkMemorySystem::_printStatistics };
			func(this, ostr, input);
		}
	};
}
