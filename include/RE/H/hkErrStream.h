#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkOstream.h"

namespace RE
{
	class hkErrStream :
		public hkOstream  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkErrStream };
		static constexpr auto VTABLE{ VTABLE::hkErrStream };

		// override (hkOstream)
		virtual ~hkErrStream() = default;  // 00

		hkErrStream* ctor(void* buf, std::int32_t bufSize)
		{
			using func_t = hkErrStream*(__thiscall*)(hkErrStream*, void*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkErrStream::ctor };
			return func(this, buf, bufSize);
		}
	};
}
