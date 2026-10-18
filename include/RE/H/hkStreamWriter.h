#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkBool;

	class hkStreamWriter :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkStreamWriter };

		using SeekWhence = hkStreamWriter_SeekWhence;

		// override (hkReferencedObject)
		virtual ~hkStreamWriter() = default;  // 00

		// add
		virtual hkBool* isOk(hkBool* a_arg1);                                          // 03
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2);           // 04
		virtual void flush();                                                          // 05
		virtual hkBool* seekTellSupported(hkBool* a_arg1) const;                       // 06
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence);  // 07
		virtual std::int32_t tell() const;                                             // 08

		hkStreamWriter* ctor()
		{
			using func_t = hkStreamWriter*(__thiscall*)(hkStreamWriter*);
			static REL::Relocation<func_t> func{ Offsets::hkStreamWriter::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(hkStreamWriter) == 0x8);
}
