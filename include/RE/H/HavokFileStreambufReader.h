#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamReader.h"
#include "RE/H/hkStreamReader_SeekWhence.h"

namespace RE
{
	class BSFile;

	class HavokFileStreambufReader :
		public hkStreamReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HavokFileStreambufReader };
		static constexpr auto VTABLE{ VTABLE::HavokFileStreambufReader };

		// override (hkStreamReader)
		virtual ~HavokFileStreambufReader() = default;                          // 00
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2) override;  // 04

		// add
		virtual void Unk_0C();                  // 0C (seek: same declaration as an inherited virtual)
		virtual std::int32_t tell();            // 0D
		virtual std::int32_t sysGetFileSize();  // 0E

		HavokFileStreambufReader* ctor(char const* apName)
		{
			using func_t = HavokFileStreambufReader*(__thiscall*)(HavokFileStreambufReader*, char const*);
			static REL::Relocation<func_t> func{ Offsets::HavokFileStreambufReader::ctor };
			return func(this, apName);
		}

	public:
		// members
		BSFile*      pFile;       // 08
		bool         bOwned;      // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
}
