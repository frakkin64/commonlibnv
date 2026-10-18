#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkTagfileWriter.h"

namespace RE
{
	class hkDataObject;
	class hkStreamWriter;
	class hkTagfileWriter_AddDataObjectListener;

	class hkBinaryTagfileWriter :
		public hkTagfileWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBinaryTagfileWriter };
		static constexpr auto VTABLE{ VTABLE::hkBinaryTagfileWriter };

		// override (hkTagfileWriter)
		virtual ~hkBinaryTagfileWriter() = default;  // 00

		// add
		virtual hkResult save(hkDataObject const& obj, hkStreamWriter* stream, hkTagfileWriter_AddDataObjectListener* userListener);  // 03
	};
}
