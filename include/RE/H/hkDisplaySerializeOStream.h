#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkOArchive.h"

namespace RE
{
	class hkStreamWriter;
	class hkTransform;
	class hkVector4;

	class hkDisplaySerializeOStream :
		public hkOArchive  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDisplaySerializeOStream };
		static constexpr auto VTABLE{ VTABLE::hkDisplaySerializeOStream };

		// override (hkOArchive)
		virtual ~hkDisplaySerializeOStream() = default;  // 00

		hkDisplaySerializeOStream* ctor(hkArray<char, hkContainerHeapAllocator>& buf)
		{
			using func_t = hkDisplaySerializeOStream*(__thiscall*)(hkDisplaySerializeOStream*, hkArray<char, hkContainerHeapAllocator>&);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySerializeOStream::ctor };
			return func(this, buf);
		}

		hkDisplaySerializeOStream* ctor(hkStreamWriter* writer)
		{
			using func_t = hkDisplaySerializeOStream*(__thiscall*)(hkDisplaySerializeOStream*, hkStreamWriter*);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySerializeOStream::ctor_1 };
			return func(this, writer);
		}

		void writeQuadVector4(hkVector4 const& v)
		{
			using func_t = decltype(&hkDisplaySerializeOStream::writeQuadVector4);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySerializeOStream::writeQuadVector4 };
			func(this, v);
		}

		void writeTransform(hkTransform const& t)
		{
			using func_t = decltype(&hkDisplaySerializeOStream::writeTransform);
			static REL::Relocation<func_t> func{ Offsets::hkDisplaySerializeOStream::writeTransform };
			func(this, t);
		}
	};
}
