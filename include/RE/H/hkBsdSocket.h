#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkSocket.h"
#include "RE/H/hkSocket_SOCKET_EVENTS.h"

namespace RE
{
	class hkBsdSocket :
		public hkSocket  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBsdSocket };
		static constexpr auto VTABLE{ VTABLE::hkBsdSocket };

		// override (hkSocket)
		virtual ~hkBsdSocket() = default;                                                                                       // 00
		virtual void close() override;                                                                                          // 04
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2) override;                                                  // 05
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;                                           // 06
		virtual hkResult connect(const char* a_arg1, std::int32_t a_arg2) override;                                             // 07
		virtual hkResult listen(std::int32_t a_arg1) override;                                                                  // 08
		virtual hkResult asyncSelect(void* notificationHandle, std::uint32_t message, hkSocket_SOCKET_EVENTS events) override;  // 09
		virtual hkSocket* pollForNewClient() override;                                                                          // 0A

		hkBsdSocket* ctor(std::uint32_t s)
		{
			using func_t = hkBsdSocket*(__thiscall*)(hkBsdSocket*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkBsdSocket::ctor };
			return func(this, s);
		}

	public:
		// members
		std::uint32_t m_socket;  // 20
	};
}
