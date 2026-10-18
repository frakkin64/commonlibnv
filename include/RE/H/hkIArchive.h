#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkStreamReader;

	class hkIArchive :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkIArchive };
		static constexpr auto VTABLE{ VTABLE::hkIArchive };

		// override (hkReferencedObject)
		virtual ~hkIArchive() = default;  // 00

		hkIArchive* ctor(hkStreamReader* sb, hkBool bs)
		{
			using func_t = hkIArchive*(__thiscall*)(hkIArchive*, hkStreamReader*, hkBool);
			static REL::Relocation<func_t> func{ Offsets::hkIArchive::ctor };
			return func(this, sb, bs);
		}

	public:
		// members
		hkStreamReader* m_streamReader;  // 08?
		hkBool          m_byteSwap;      // 0C?
		std::uint8_t    pad0D[0x3];      // 0D
	};
}
