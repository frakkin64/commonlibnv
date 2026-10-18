#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResourceBase.h"

namespace RE
{
	class hkStringBuf;

	class hkResourceContainer :
		public hkResourceBase  // 00
	{
	public:
		void getPath(hkStringBuf& pathOut)
		{
			using func_t = decltype(&hkResourceContainer::getPath);
			static REL::Relocation<func_t> func{ Offsets::hkResourceContainer::getPath };
			func(this, pathOut);
		}
	};
	static_assert(sizeof(hkResourceContainer) == 0x8);
}
