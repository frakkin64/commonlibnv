#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSocket_ReaderAdapter.h"
#include "RE/H/hkSocket_SOCKET_EVENTS.h"
#include "RE/H/hkSocket_WriterAdapter.h"

namespace RE
{
	class hkBool;

	class hkSocket :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSocket };
		static constexpr auto VTABLE{ VTABLE::hkSocket };

		using ReaderAdapter = hkSocket_ReaderAdapter;
		using SOCKET_EVENTS = hkSocket_SOCKET_EVENTS;
		using WriterAdapter = hkSocket_WriterAdapter;

		// override (hkReferencedObject)
		virtual ~hkSocket() = default;  // 00

		// add
		virtual hkBool* isOk(hkBool* a_arg1);                                                                          // 03
		virtual void close();                                                                                          // 04
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2);                                                  // 05
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2);                                           // 06
		virtual hkResult connect(const char* a_arg1, std::int32_t a_arg2);                                             // 07
		virtual hkResult listen(std::int32_t a_arg1);                                                                  // 08
		virtual hkResult asyncSelect(void* notificationHandle, std::uint32_t message, hkSocket_SOCKET_EVENTS events);  // 09
		virtual hkSocket* pollForNewClient();                                                                          // 0A

	protected:
		hkSocket* ctor()
		{
			using func_t = hkSocket*(__thiscall*)(hkSocket*);
			static REL::Relocation<func_t> func{ Offsets::hkSocket::ctor };
			return func(this);
		}

	public:
		// members
		hkSocket_ReaderAdapter m_reader;  // 08
		hkSocket_WriterAdapter m_writer;  // 14
	};
	static_assert(sizeof(hkSocket) == 0x20);
}
