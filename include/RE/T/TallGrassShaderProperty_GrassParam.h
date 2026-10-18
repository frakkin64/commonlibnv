#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TallGrassShaderProperty_GrassParam
	{
	public:
		// members
		const char*   pcGeomFilename;    // 00?
		std::uint32_t iGrassID;          // 04?
		float         fPositionRange;    // 08?
		float         fHeightRange;      // 0C?
		float         fColorRange;       // 10?
		float         fWaveOffsetRange;  // 14?
		float         fWavePeriod;       // 18?
		bool          bVertexLighting;   // 1C?
		bool          bUniformScaing;    // 1D?
		bool          bFitToSlope;       // 1E?
		bool          bWind;             // 1F?
	};
}
