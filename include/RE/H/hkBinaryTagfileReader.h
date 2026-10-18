#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject.h"
#include "RE/H/hkTagfileReader.h"

namespace RE
{
	class hkDataWorld;
	class hkStreamReader;

	class hkBinaryTagfileReader :
		public hkTagfileReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBinaryTagfileReader };
		static constexpr auto VTABLE{ VTABLE::hkBinaryTagfileReader };

		// override (hkTagfileReader)
		virtual ~hkBinaryTagfileReader() = default;  // 00

		// add
		virtual hkDataObject load(hkStreamReader* result, hkDataWorld& stream);  // 03
	};
}
