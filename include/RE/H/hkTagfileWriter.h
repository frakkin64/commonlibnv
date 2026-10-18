#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkTagfileWriter_AddDataObjectListener.h"

namespace RE
{
	class hkTagfileWriter :
		public hkReferencedObject  // 00
	{
	public:
		using AddDataObjectListener = hkTagfileWriter_AddDataObjectListener;

	};
}
