#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStreamWriter.h"

namespace RE
{
	class hkSocket;

	class hkSocket_WriterAdapter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSocket_WriterAdapter };
		static constexpr auto VTABLE{ VTABLE::hkSocket_WriterAdapter };

		// override (hkStreamWriter)
		virtual ~hkSocket_WriterAdapter() = default;                                   // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;  // 04

		// members
		hkSocket* m_socket;  // 08?
	};
}
