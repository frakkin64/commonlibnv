#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResource_Export.h"
#include "RE/H/hkResource_Import.h"

namespace RE
{
	class hkResource :
		public hkReferencedObject  // 00
	{
	public:
		using Export = hkResource_Export;
		using Import = hkResource_Import;

	};
	static_assert(sizeof(hkResource) == 0x8);
}
