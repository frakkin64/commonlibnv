#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStackMemory.h"

namespace RE
{
	class hkMemoryAllocator;

	class hkMemoryRouter
	{
	public:
		static void* easyAlloc(hkMemoryAllocator& b, std::int32_t nbytes)
		{
			using func_t = decltype(&hkMemoryRouter::easyAlloc);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryRouter::easyAlloc };
			return func(b, nbytes);
		}

		static void easyFree(hkMemoryAllocator& b, void* p)
		{
			using func_t = decltype(&hkMemoryRouter::easyFree);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryRouter::easyFree };
			func(b, p);
		}

		static hkMemoryRouter& getInstance()
		{
			using func_t = decltype(&hkMemoryRouter::getInstance);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryRouter::getInstance };
			return func();
		}

		hkMemoryRouter* ctor()
		{
			using func_t = hkMemoryRouter*(__thiscall*)(hkMemoryRouter*);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryRouter::ctor };
			return func(this);
		}

	public:
		// members
		hkStackMemory      m_stack;     // 00
		hkMemoryAllocator* m_temp;      // 0C
		hkMemoryAllocator* m_heap;      // 10
		hkMemoryAllocator* m_debug;     // 14
		hkMemoryAllocator* m_solver;    // 18
		hkMemoryAllocator* m_global;    // 1C
		void*              m_userData;  // 20
	};
	static_assert(sizeof(hkMemoryRouter) == 0x24);
}
