#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkBool;
	class hkStreamReader;

	class hkIstream :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkIstream };
		static constexpr auto VTABLE{ VTABLE::hkIstream };

		// override (hkReferencedObject)
		virtual ~hkIstream() = default;  // 00

		hkIstream& operator_call(hkBool& b)
		{
			using func_t = decltype(&hkIstream::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkIstream::operator_call };
			return func(this, b);
		}

	public:
		// members
		hkStreamReader* m_streamReader;  // 08?
	};
}
