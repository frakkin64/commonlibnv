#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCriticalSection.h"
#include "RE/B/BSThread_StackSize.h"

namespace RE
{
	class __declspec(novtable) BSThread
	{
	public:
		static constexpr auto RTTI{ RTTI::BSThread };
		static constexpr auto VTABLE{ VTABLE::BSThread };

		using StackSize = BSThread_StackSize;

		// add
		virtual ~BSThread() = default;       // 00
		virtual std::uint32_t ThreadProc();  // 01

		BSThread* ctor()
		{
			using func_t = BSThread*(__thiscall*)(BSThread*);
			static REL::Relocation<func_t> func{ Offsets::BSThread::ctor };
			return func(this);
		}

		void SetThreadProcessor(std::uint32_t aiThread)
		{
			using func_t = decltype(&BSThread::SetThreadProcessor);
			static REL::Relocation<func_t> func{ Offsets::BSThread::SetThreadProcessor };
			func(this, aiThread);
		}

		void SetThreadPriority(std::int32_t aiPriority)
		{
			using func_t = decltype(&BSThread::SetThreadPriority);
			static REL::Relocation<func_t> func{ Offsets::BSThread::SetThreadPriority };
			func(this, aiPriority);
		}

	public:
		// members
		BSCriticalSection CriticalSection;  // 04
		void*             m_ThreadHandle;   // 1C
		void*             m_ParentHandle;   // 20
		std::uint32_t     m_ThreadID;       // 24
		std::uint32_t     m_ParentID;       // 28
		bool              bThreadIsActive;  // 2C
		std::uint8_t      pad2D[0x3];       // 2D
	};
}
