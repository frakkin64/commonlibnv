#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkCriticalSection.h"
#include "RE/H/hkFlags.h"
#include "RE/H/hkFreeListAllocator.h"
#include "RE/H/hkLeakDetectAllocator.h"
#include "RE/H/hkMemoryRouter.h"
#include "RE/H/hkMemorySystem.h"
#include "RE/H/hkMemorySystem_FlagBits.h"
#include "RE/H/hkMemorySystem_FrameInfo.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSolverAllocator.h"
#include "RE/H/hkSystemMemoryBlockServer.h"
#include "RE/H/hkThreadMemory.h"

namespace RE
{
	class hkDebugMemorySnapshot;
	class hkMemoryAllocator;
	class hkMemorySystem_MemoryStatistics;
	class hkOstream;
	class hkStackMemory;

	class hkFreeListMemorySystem :
		public hkMemorySystem  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkFreeListMemorySystem };
		static constexpr auto VTABLE{ VTABLE::hkFreeListMemorySystem };

		class ThreadData;

		class ThreadData
		{
		public:
			// members
			hkThreadMemory  m_heapThreadMemory;      // 00?
			hkMemoryRouter* m_memoryRouter;          // 124?
			const char*     m_name;                  // 128?
			hkBool          m_inUse;                 // 12C?
			std::uint8_t    pad12D[0x3];             // 12D
			std::uint32_t   m_stackMemoryAllocated;  // 130?
			hkStackMemory*  m_stackMemory;           // 134?
		};

		// override (hkMemorySystem)
		virtual ~hkFreeListMemorySystem() = default;                                                                                               // 00
		virtual hkMemoryRouter* mainInit(const hkMemorySystem_FrameInfo* a_arg1, hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg2) override;  // 01
		virtual hkResult mainQuit(hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg1) override;                                                 // 02
		virtual void threadInit(hkMemoryRouter* a_arg1, const char* a_arg2, hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg3) override;       // 03
		virtual void threadQuit(hkMemoryRouter* a_arg1, hkFlags<hkMemorySystem_FlagBits, std::int32_t> a_arg2) override;                           // 04
		virtual void printStatistics(hkOstream* a_arg1) override;                                                                                  // 05
		virtual hkResult walkMemory(void* a_arg1, void* a_arg2) override;                                                                          // 06
		virtual void garbageCollect() override;                                                                                                    // 07
		virtual hkResult getMemorySnapshot(hkDebugMemorySnapshot& snapshot) override;                                                              // 0A
		virtual void getMemoryStatistics(hkMemorySystem_MemoryStatistics& out) override;                                                           // 0F

		hkFreeListMemorySystem* ctor()
		{
			using func_t = hkFreeListMemorySystem*(__thiscall*)(hkFreeListMemorySystem*);
			static REL::Relocation<func_t> func{ Offsets::hkFreeListMemorySystem::ctor };
			return func(this);
		}

	public:
		// members
		hkMemoryAllocator*                 m_systemAllocator;       // 04?
		hkSystemMemoryBlockServer          m_freeListMemoryServer;  // 08?
		hkFreeListAllocator                m_freeListAllocator;     // 1C?
		hkLeakDetectAllocator              m_leakDetectAllocator;   // AA8?
		hkMemorySystem_FrameInfo           m_frameInfo;             // AF4?
		hkMemoryAllocator*                 m_heapAllocator;         // AFC?
		hkMemoryRouter                     m_mainRouter;            // B00?
		hkSolverAllocator                  m_solverAllocator;       // B24?
		hkFreeListMemorySystem::ThreadData m_threadData[32];        // C64?
		hkCriticalSection                  m_threadDataLock;        // 3364?
	};
}
