#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpMoppAssembler_hkpMoppAssemblerParams.h"

namespace RE
{
	class hkpMoppAssembler :
		public hkReferencedObject  // 00
	{
	public:
		using hkpMoppAssemblerParams = hkpMoppAssembler_hkpMoppAssemblerParams;

	};
}
