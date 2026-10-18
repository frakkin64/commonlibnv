#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESObjectREFR;

	class REF_DECAL_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&REF_DECAL_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::REF_DECAL_DATA::Endian };
			func(this);
		}

	public:
		// members
		TESObjectREFR* pDecalRef;  // 00
		NiPoint3       Intersect;  // 04
		NiPoint3       Normal;     // 10?
	};
}
