#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResourceBase_Type.h"

namespace RE
{
	class hkResourceBase :
		public hkReferencedObject  // 00
	{
	public:
		using Type = hkResourceBase_Type;

	};
}
