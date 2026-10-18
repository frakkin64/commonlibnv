#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpPhantom;

	class __declspec(novtable) hkpPhantomListener
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantomListener };
		static constexpr auto VTABLE{ VTABLE::hkpPhantomListener };

		// add
		virtual ~hkpPhantomListener() = default;                    // 00
		virtual void phantomAddedCallback(hkpPhantom* __formal);    // 01
		virtual void phantomRemovedCallback(hkpPhantom* __formal);  // 02
		virtual void phantomShapeSetCallback(hkpPhantom* phantom);  // 03
		virtual void phantomDeletedCallback(hkpPhantom* __formal);  // 04
	};
}
