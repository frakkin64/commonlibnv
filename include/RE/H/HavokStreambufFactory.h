#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFileSystem.h"

namespace RE
{
	class hkStreamReader;
	class hkStreamWriter;

	class HavokStreambufFactory :
		public hkFileSystem  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HavokStreambufFactory };
		static constexpr auto VTABLE{ VTABLE::HavokStreambufFactory };

		// override (hkFileSystem)
		virtual ~HavokStreambufFactory() = default;                       // 00
		virtual hkStreamReader* openReader(const char* a_arg1) override;  // 03
		virtual hkStreamWriter* openWriter(const char* a_arg1) override;  // 04

		HavokStreambufFactory* ctor()
		{
			using func_t = HavokStreambufFactory*(__thiscall*)(HavokStreambufFactory*);
			static REL::Relocation<func_t> func{ Offsets::HavokStreambufFactory::ctor };
			return func(this);
		}
	};
}
