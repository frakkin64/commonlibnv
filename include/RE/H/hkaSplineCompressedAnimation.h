#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkaAnimation.h"
#include "RE/H/hkaSplineCompressedAnimation_TrackCompressionParams.h"
#include "RE/H/hkaSplineCompressedAnimation_TrackCompressionParams_RotationQuantization.h"
#include "RE/H/hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization.h"

namespace RE
{
	class hkaInterleavedUncompressedAnimation;

	class hkaSplineCompressedAnimation :
		public hkaAnimation  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaSplineCompressedAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaSplineCompressedAnimation };

		using TrackCompressionParams = hkaSplineCompressedAnimation_TrackCompressionParams;

		class AnimationCompressionParams;
		class PerTrackCompressionParams;

		class AnimationCompressionParams
		{
		public:
			// members
			std::uint16_t m_maxFramesPerBlock;         // 00?
			hkBool        m_enableSampleSingleTracks;  // 02?
			std::uint8_t  pad03;                       // 03
		};

		class PerTrackCompressionParams
		{
		public:
			// members
			hkArray<hkaSplineCompressedAnimation_TrackCompressionParams, hkContainerHeapAllocator> m_parameterPalette;               // 00?
			hkArray<std::int32_t, hkContainerHeapAllocator>                                        m_trackIndexToPaletteIndex;       // 0C?
			hkArray<std::int32_t, hkContainerHeapAllocator>                                        m_floatTrackIndexToPaletteIndex;  // 18?
		};

		// override (hkaAnimation)
		virtual ~hkaSplineCompressedAnimation() = default;  // 00

		hkaSplineCompressedAnimation* ctor(hkaInterleavedUncompressedAnimation const& raw, hkaSplineCompressedAnimation_TrackCompressionParams const& trackParams, hkaSplineCompressedAnimation::AnimationCompressionParams const& animationParams)
		{
			using func_t = hkaSplineCompressedAnimation*(__thiscall*)(hkaSplineCompressedAnimation*, hkaInterleavedUncompressedAnimation const&, hkaSplineCompressedAnimation_TrackCompressionParams const&, hkaSplineCompressedAnimation::AnimationCompressionParams const&);
			static REL::Relocation<func_t> func{ Offsets::hkaSplineCompressedAnimation::ctor };
			return func(this, raw, trackParams, animationParams);
		}

	private:
		void writeRotation(std::uint8_t mask, hkaSplineCompressedAnimation_TrackCompressionParams_RotationQuantization type, hkVector4 const& mean, std::int32_t n, hkArray<hkVector4, hkContainerHeapAllocator> const& P)
		{
			using func_t = decltype(&hkaSplineCompressedAnimation::writeRotation);
			static REL::Relocation<func_t> func{ Offsets::hkaSplineCompressedAnimation::writeRotation };
			func(this, mask, type, mean, n, P);
		}

		void writePoints(std::uint8_t mask, hkaSplineCompressedAnimation_TrackCompressionParams_ScalarQuantization type, hkVector4 const& mean, hkVector4 const& minp, hkVector4 const& maxp, std::int32_t n, hkArray<hkVector4, hkContainerHeapAllocator>& P)
		{
			using func_t = decltype(&hkaSplineCompressedAnimation::writePoints);
			static REL::Relocation<func_t> func{ Offsets::hkaSplineCompressedAnimation::writePoints };
			func(this, mask, type, mean, minp, maxp, n, P);
		}

		void initialize(hkaInterleavedUncompressedAnimation const& raw, hkaSplineCompressedAnimation::PerTrackCompressionParams const& trackParams, hkaSplineCompressedAnimation::AnimationCompressionParams const& animationParams)
		{
			using func_t = decltype(&hkaSplineCompressedAnimation::initialize);
			static REL::Relocation<func_t> func{ Offsets::hkaSplineCompressedAnimation::initialize };
			func(this, raw, trackParams, animationParams);
		}

	public:
		// members
		std::int32_t                                     m_numFrames;                // 28
		std::int32_t                                     m_numBlocks;                // 2C?
		std::int32_t                                     m_maxFramesPerBlock;        // 30?
		std::int32_t                                     m_maskAndQuantizationSize;  // 34?
		float                                            m_blockDuration;            // 38?
		float                                            m_blockInverseDuration;     // 3C?
		float                                            m_frameDuration;            // 40?
		std::uint8_t                                     pad44[0x30];                // 44
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_blockOffsets;             // 74
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_floatBlockOffsets;        // 80?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_transformOffsets;         // 8C?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_floatOffsets;             // 98?
		hkArray<std::uint8_t, hkContainerHeapAllocator>  m_data;                     // A4?
		std::int32_t                                     m_endian;                   // B0?
	};
}
