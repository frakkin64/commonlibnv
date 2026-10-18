#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkOstream;

	class hkTraceStream :
		public hkReferencedObject,  // 00
		public hkSingleton<hkTraceStream>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkTraceStream };
		static constexpr auto VTABLE{ VTABLE::hkTraceStream };

		class Title;

		class Title
		{
		public:
			// members
			char m_value[32];  // 00?
		};

		// override (hkReferencedObject)
		virtual ~hkTraceStream() = default;  // 00

		void printf(char const* title, char const* fmt, ...)
		{
			using func_t = void(__cdecl*)(hkTraceStream*, char const*, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::hkTraceStream::printf };
			func(this, title, fmt);
		}

	public:
		// members
		hkOstream*                                              m_stream;   // 08?
		std::int32_t                                            m_counter;  // 0C?
		hkArray<hkTraceStream::Title, hkContainerHeapAllocator> m_titles;   // 10?
	};
}
