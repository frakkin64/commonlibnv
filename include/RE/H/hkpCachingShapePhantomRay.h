#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCachingShapePhantom.h"

namespace RE
{
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class alignas(16) hkpCachingShapePhantomRay :
		public hkpCachingShapePhantom  // 00
	{
	public:
		void castRay(hkpWorldRayCastInput const& arInput, hkpWorldRayCastOutput& arOutput)
		{
			using func_t = decltype(&hkpCachingShapePhantomRay::castRay);
			static REL::Relocation<func_t> func{ Offsets::hkpCachingShapePhantomRay::castRay };
			func(this, arInput, arOutput);
		}
	};
}
