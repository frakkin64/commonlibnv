#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkMonitorStream
	{
	public:
		static void init()
		{
			using func_t = decltype(&hkMonitorStream::init);
			static REL::Relocation<func_t> func{ Offsets::hkMonitorStream::init };
			func();
		}

		void quit()
		{
			using func_t = decltype(&hkMonitorStream::quit);
			static REL::Relocation<func_t> func{ Offsets::hkMonitorStream::quit };
			func(this);
		}

		void resize(std::int32_t newSize)
		{
			using func_t = decltype(&hkMonitorStream::resize);
			static REL::Relocation<func_t> func{ Offsets::hkMonitorStream::resize };
			func(this, newSize);
		}

	public:
		// members
		hkPadSpu<char*> m_start;                       // 00?
		hkPadSpu<char*> m_end;                         // 04?
		hkPadSpu<char*> m_capacity;                    // 08?
		hkPadSpu<char*> m_capacityMinus16;             // 0C?
		hkBool          m_isBufferAllocatedOnTheHeap;  // 10?
		std::uint8_t    pad11[0x3];                    // 11
	};
}
