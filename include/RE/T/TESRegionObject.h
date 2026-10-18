#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/T/TESRegionObjectBase.h"

namespace RE
{
	class TESForm;
	class TESRegionObjectList;

	class TESRegionObject :
		public TESRegionObjectBase  // 00
	{
	public:
		class REGION_OBJECT_DATA;

		class REGION_OBJECT_DATA
		{
		public:
			// members
			float         fDensity;             // 00?
			std::uint8_t  cCluster;             // 04?
			std::uint8_t  cMinSlopeDegrees;     // 05?
			std::uint8_t  cMaxSlopeDegrees;     // 06?
			std::uint8_t  cObjectFlags;         // 07?
			std::uint16_t sParentRadius;        // 08?
			std::uint16_t sGenerateNearRadius;  // 0A?
			float         fMinimumZ;            // 0C?
			float         fMaximumZ;            // 10?
			float         fSinkBase;            // 14?
			float         fSinkVariance;        // 18?
			float         fScaleVariance;       // 1C?
			std::int16_t  sXAngleVariance;      // 20?
			std::int16_t  sYAngleVariance;      // 22?
			std::int16_t  sZAngleVariance;      // 24?
			std::uint16_t pad26;                // 26
			std::uint32_t dVertexColor;         // 28?
		};

		static float ConvertNormalToAngle(NiPoint3 aNormal)
		{
			using func_t = decltype(&TESRegionObject::ConvertNormalToAngle);
			static REL::Relocation<func_t> func{ Offsets::TESRegionObject::ConvertNormalToAngle };
			return func(aNormal);
		}

	public:
		// members
		TESForm*                            pForm;      // 04?
		TESRegionObject::REGION_OBJECT_DATA Data;       // 08?
		TESRegionObjectList*                pChildren;  // 34?
		TESRegionObject*                    pParent;    // 38?
	};
}
