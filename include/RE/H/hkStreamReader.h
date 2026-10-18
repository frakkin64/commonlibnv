#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamReader_SeekWhence.h"

namespace RE
{
	class hkBool;

	class hkStreamReader :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStreamReader };
		static constexpr auto VTABLE{ VTABLE::hkStreamReader };

		using SeekWhence = hkStreamReader_SeekWhence;

		// override (hkReferencedObject)
		virtual ~hkStreamReader() = default;  // 00

		// add
		virtual hkBool* isOk(hkBool* a_arg1);                                          // 03
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2);                  // 04
		virtual std::int32_t skip(std::int32_t nbytes);                                // 05
		virtual hkBool* markSupported(hkBool* a_arg1) const;                           // 06
		virtual hkResult setMark(std::int32_t markLimit);                              // 07
		virtual hkResult rewindToMark();                                               // 08
		virtual hkBool* seekTellSupported(hkBool* a_arg1) const;                       // 09
		virtual hkResult seek(std::int32_t offset, hkStreamReader_SeekWhence whence);  // 0A
		virtual std::int32_t tell() const;                                             // 0B

		hkStreamReader* ctor()
		{
			using func_t = hkStreamReader*(__thiscall*)(hkStreamReader*);
			static REL::Relocation<func_t> func{ Offsets::hkStreamReader::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(hkStreamReader) == 0x8);
}
