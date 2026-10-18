#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkaSplineCompressedAnimation_TrackCompressionParams_RotationQuantization.h"
#include "RE/H/hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization.h"

namespace RE
{
	class hkaSplineCompressedAnimation_TrackCompressionParams
	{
	public:
		using RotationQuantization = hkaSplineCompressedAnimation_TrackCompressionParams_RotationQuantization;
		using ScalarQuantization = hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization;

		// members
		float                                                                                          m_rotationTolerance;            // 00?
		float                                                                                          m_translationTolerance;         // 04?
		float                                                                                          m_scaleTolerance;               // 08?
		float                                                                                          m_floatingTolerance;            // 0C?
		std::uint16_t                                                                                  m_rotationDegree;               // 10?
		std::uint16_t                                                                                  m_translationDegree;            // 12?
		std::uint16_t                                                                                  m_scaleDegree;                  // 14?
		std::uint16_t                                                                                  m_floatingDegree;               // 16?
		hkEnum<hkaSplineCompressedAnimation_TrackCompressionParams_RotationQuantization, std::uint8_t> m_rotationQuantizationType;     // 18?
		std::uint8_t                                                                                   pad19[0x3];                     // 19
		hkEnum<hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization, std::uint8_t>   m_translationQuantizationType;  // 1C?
		std::uint8_t                                                                                   pad1D[0x3];                     // 1D
		hkEnum<hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization, std::uint8_t>   m_scaleQuantizationType;        // 20?
		std::uint8_t                                                                                   pad21[0x3];                     // 21
		hkEnum<hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization, std::uint8_t>   m_floatQuantizationType;        // 24?
		std::uint8_t                                                                                   pad25[0x3];                     // 25
	};
}
