#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpConvexListFilter_ConvexListCollisionType.h"

namespace RE
{
	class hkpConvexListFilter :
		public hkReferencedObject  // 00
	{
	public:
		using ConvexListCollisionType = hkpConvexListFilter_ConvexListCollisionType;

	};
}
