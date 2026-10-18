#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CIdvBezierSpline;

	// not confirmed: no named code in the executable refers to this type
	class SIdvBranchInfo
	{
	public:
		// members
		std::int32_t      m_nCrossSectionSegments;     // 00?
		std::int32_t      m_nSegments;                 // 04?
		float             m_fFirstBranch;              // 08?
		float             m_fLastBranch;               // 0C?
		float             m_fFrequency;                // 10?
		float             m_fSTile;                    // 14?
		float             m_fTTile;                    // 18?
		bool              m_bSTileAbsolute;            // 1C?
		bool              m_bTTileAbsolute;            // 1D?
		bool              m_bRandomTCoordOffset;       // 1E?
		std::uint8_t      pad1F;                       // 1F
		float             m_fTwist;                    // 20?
		float             m_fSegmentPackingExponent;   // 24?
		std::int32_t      m_nNumFlares;                // 28?
		float             m_fFlareBalance;             // 2C?
		float             m_fRadialInfluence;          // 30?
		float             m_fRadialInfluenceVariance;  // 34?
		float             m_fRadialExponent;           // 38?
		float             m_fRadialDistance;           // 3C?
		float             m_fRadialVariance;           // 40?
		float             m_fLengthDistance;           // 44?
		float             m_fLengthVariance;           // 48?
		float             m_fLengthExponent;           // 4C?
		CIdvBezierSpline* m_pDisturbance;              // 50?
		CIdvBezierSpline* m_pGravity;                  // 54?
		CIdvBezierSpline* m_pFlexibility;              // 58?
		CIdvBezierSpline* m_pFlexibilityScale;         // 5C?
		CIdvBezierSpline* m_pLength;                   // 60?
		CIdvBezierSpline* m_pRadius;                   // 64?
		CIdvBezierSpline* m_pRadiusScale;              // 68?
		CIdvBezierSpline* m_pStartAngle;               // 6C?
		CIdvBezierSpline* m_pAngleProfile;             // 70?
	};
}
