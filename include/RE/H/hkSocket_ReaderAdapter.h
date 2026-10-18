#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStreamReader.h"

namespace RE
{
	class hkSocket;

	class hkSocket_ReaderAdapter :
		public hkStreamReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSocket_ReaderAdapter };
		static constexpr auto VTABLE{ VTABLE::hkSocket_ReaderAdapter };

		// override (hkStreamReader)
		virtual ~hkSocket_ReaderAdapter() = default;                            // 00
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2) override;  // 04

		// members
		hkSocket* m_socket;  // 08?
	};
}
