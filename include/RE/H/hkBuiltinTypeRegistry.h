#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkBuiltinTypeRegistry :
		public hkReferencedObject,  // 00
		public hkSingleton<hkBuiltinTypeRegistry>  // 08
	{
	public:
	};
}
