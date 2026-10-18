#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class BoltShader_SegmentData;
	class NiGeometry;

	class BoltShaderProperty :
		public BSShaderProperty  // 00
	{
	public:
		// members
		BoltShader_SegmentData* pSegmentData;              // 60?
		NiPoint3                TargetLocation;            // 64?
		float                   fTimer;                    // 70?
		std::int32_t            iLookBack;                 // 74?
		std::int32_t            iBoltStartSegment;         // 78?
		std::int32_t            iBoltEndSegment;           // 7C?
		std::int32_t            iTotalSegmentCount;        // 80?
		float                   fDistanceLong;             // 84?
		float                   fTortuosity[40];           // 88?
		std::int32_t            iNumBolts;                 // 128?
		float                   fBoltLength;               // 12C?
		float                   fBoltsRadius;              // 130?
		float                   fBoltsRadiusStrength;      // 134?
		float                   fBoltSmallWidth;           // 138?
		float                   fBoltGrowWidth;            // 13C?
		std::int32_t            iSegmentsPerBolt;          // 140?
		float                   fSegmentLength;            // 144?
		float                   fSegmentVariance;          // 148?
		std::int32_t            iSubSegments;              // 14C?
		float                   fSubSegmentVariance;       // 150?
		NiColorA                CoreColor;                 // 154?
		NiColorA                GlowColor;                 // 164?
		bool                    bWrapped;                  // 174?
		bool                    bMoving;                   // 175?
		bool                    bGuided;                   // 176?
		bool                    bStartFromPoint;           // 177?
		NiGeometry*             pMyGeometry;               // 178?
		std::int32_t            iBoltMidSegment;           // 17C?
		float                   fDistanceShort;            // 180?
		std::int32_t            iBoltCurrentSegmentCount;  // 184?
		std::int32_t            iTotalAddedSegments;       // 188?
		float                   fAlpha;                    // 18C?
	};
}
