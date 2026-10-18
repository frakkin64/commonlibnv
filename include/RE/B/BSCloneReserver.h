#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiAVObject;

	class BSCloneReserver
	{
	public:
		void DecRefCount()
		{
			using func_t = decltype(&BSCloneReserver::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::BSCloneReserver::DecRefCount };
			func(this);
		}

	public:
		// members
		NiAVObject*  pModel;       // 00
		std::int32_t iCloneCount;  // 04
		std::int32_t iRefCount;    // 08
	};
}
