#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint2.h"
#include "RE/T/TESRegionPoint.h"

namespace RE
{
	class TESFile;

	class TESRegionPointList :
		public BSSimpleList<TESRegionPoint*>  // 00
	{
	public:
		class ScaleResult;

		class ScaleResult
		{
		public:
			// members
			TESRegionPoint point;   // 00?
			float          fdist;   // 08?
			float          fscale;  // 0C?
		};

		bool LoadPoints(TESFile* apFile)
		{
			using func_t = decltype(&TESRegionPointList::LoadPoints);
			static REL::Relocation<func_t> func{ Offsets::TESRegionPointList::LoadPoints };
			return func(this, apFile);
		}

	public:
		// members
		TESRegionPointList::ScaleResult* pLastScaleResult;      // 08
		bool                             bOwnsPointMemory;      // 0C
		std::uint8_t                     pad0D[0x3];            // 0D
		NiPoint2                         Minimums;              // 10
		NiPoint2                         Maximums;              // 18
		std::uint32_t                    iDistanceInsideAtMax;  // 20
		std::uint32_t                    iCount;                // 24
	};
}
