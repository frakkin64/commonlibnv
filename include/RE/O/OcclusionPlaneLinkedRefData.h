#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	class OcclusionPlaneLinkedRefData
	{
	public:
		void Endian()
		{
			using func_t = decltype(&OcclusionPlaneLinkedRefData::Endian);
			static REL::Relocation<func_t> func{ Offsets::OcclusionPlaneLinkedRefData::Endian };
			func(this);
		}

	public:
		// members
		TESObjectREFR* pLinkedRefs[4];  // 00
	};
	static_assert(sizeof(OcclusionPlaneLinkedRefData) == 0x10);
}
