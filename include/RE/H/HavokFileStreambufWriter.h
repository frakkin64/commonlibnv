#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class BSFile;

	class HavokFileStreambufWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HavokFileStreambufWriter };
		static constexpr auto VTABLE{ VTABLE::HavokFileStreambufWriter };

		// override (hkStreamWriter)
		virtual ~HavokFileStreambufWriter() = default;                                 // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;  // 04
		virtual void flush() override;                                                 // 05

		// add
		virtual void Unk_09();        // 09 (seek: same declaration as an inherited virtual)
		virtual std::int32_t tell();  // 0A

		HavokFileStreambufWriter* ctor(char const* apName)
		{
			using func_t = HavokFileStreambufWriter*(__thiscall*)(HavokFileStreambufWriter*, char const*);
			static REL::Relocation<func_t> func{ Offsets::HavokFileStreambufWriter::ctor };
			return func(this, apName);
		}

	public:
		// members
		BSFile*      pFile;       // 08
		bool         bOwned;      // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
}
