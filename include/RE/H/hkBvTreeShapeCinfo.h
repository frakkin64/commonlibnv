#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkShapeCinfo.h"

namespace RE
{
	class hkpShapeCollection;

	class hkBvTreeShapeCinfo :
		public hkShapeCinfo  // 00
	{
	public:
		// members
		const hkpShapeCollection* m_shapeCollection;  // 04?
	};
}
