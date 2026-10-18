#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkIArchive.h"

namespace RE
{
	class hkStreamReader;
	class hkVector4;

	class hkDisplaySerializeIStream :
		public hkIArchive  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplaySerializeIStream };
		static constexpr auto VTABLE{ VTABLE::hkDisplaySerializeIStream };

		// override (hkIArchive)
		virtual ~hkDisplaySerializeIStream() = default;  // 00

		hkDisplaySerializeIStream* ctor(hkStreamReader* reader)
		{
			using func_t = hkDisplaySerializeIStream*(__thiscall*)(hkDisplaySerializeIStream*, hkStreamReader*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySerializeIStream::ctor };
			return func(this, reader);
		}

		void readQuadVector4(hkVector4& v)
		{
			using func_t = decltype(&hkDisplaySerializeIStream::readQuadVector4);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySerializeIStream::readQuadVector4 };
			func(this, v);
		}
	};
}
