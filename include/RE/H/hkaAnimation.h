#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkaAnnotationTrack.h"
#include "RE/H/hkaAnnotationTrack_Annotation.h"

namespace RE
{
	class hkQsTransform;
	class hkaAnimatedReferenceFrame;
	class hkaChunkCache;

	class hkaAnimation :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaAnimation };

		class DataChunk;
		class TrackAnnotation;

		enum class AnimationType : std::int32_t
		{
			kHK_UNKNOWN_ANIMATION = 0x0,
			kHK_INTERLEAVED_ANIMATION = 0x1,
			kHK_DELTA_COMPRESSED_ANIMATION = 0x2,
			kHK_WAVELET_COMPRESSED_ANIMATION = 0x3,
			kHK_MIRRORED_ANIMATION = 0x4,
			kHK_SPLINE_COMPRESSED_ANIMATION = 0x5,
		};

		class DataChunk
		{
		public:
			// members
			const void*   m_data;      // 00?
			std::uint32_t m_size;      // 04?
			std::uint8_t  m_offset;    // 08?
			std::uint8_t  pad09[0x3];  // 09
		};

		class TrackAnnotation
		{
		public:
			// members
			std::uint16_t                 m_trackID;     // 00?
			std::uint16_t                 pad02;         // 02
			hkaAnnotationTrack_Annotation m_annotation;  // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkaAnimation() = default;  // 00

		// add
		virtual void sampleTracks(float a_arg1, hkQsTransform* a_arg2, float* a_arg3, hkaChunkCache* a_arg4);                                                           // 03
		virtual void samplePartialTracks(float a_arg1, std::uint32_t a_arg2, hkQsTransform* a_arg3, std::uint32_t a_arg4, float* a_arg5, hkaChunkCache* a_arg6) const;  // 04
		virtual void clearAllCacheKeys(hkaChunkCache* a_arg1) const;                                                                                                    // 05
		virtual void sampleIndividualTransformTracks(float a_arg1, const std::int16_t* a_arg2, std::uint32_t a_arg3, hkQsTransform* a_arg4);                            // 06
		virtual void sampleIndividualFloatTracks(float a_arg1, const std::int16_t* a_arg2, std::uint32_t a_arg3, float* a_arg4);                                        // 07
		virtual std::int32_t getNumOriginalFrames();                                                                                                                    // 08
		virtual std::int32_t getNumDataChunks(std::uint32_t a_arg1, float a_arg2);                                                                                      // 09
		virtual void getDataChunks(std::uint32_t a_arg1, float a_arg2, hkaAnimation::DataChunk* a_arg3, std::int32_t a_arg4) const;                                     // 0A
		virtual std::int32_t getMaxSizeOfCombinedDataChunks();                                                                                                          // 0B
		virtual void getExtractedMotionReferenceFrame(float a_arg1, hkQsTransform* a_arg2) const;                                                                       // 0C
		virtual void getExtractedMotionDeltaReferenceFrame(float a_arg1, float a_arg2, std::int32_t a_arg3, hkQsTransform* a_arg4) const;                               // 0D
		virtual std::uint32_t getNumAnnotations(float a_arg1, float a_arg2) const;                                                                                      // 0E
		virtual std::uint32_t getAnnotations(float a_arg1, float a_arg2, hkaAnimation::TrackAnnotation* a_arg3, std::uint32_t a_arg4) const;                            // 0F

	protected:
		hkaAnimation* ctor(hkaAnimation const& that)
		{
			using func_t = hkaAnimation*(__thiscall*)(hkaAnimation*, hkaAnimation const&);
			static REL::Relocation<func_t> func{ Offsets::hkaAnimation::ctor };
			return func(this, that);
		}

	public:
		// members
		hkEnum<hkaAnimation::AnimationType, std::int32_t>     m_type;                     // 08
		float                                                 m_duration;                 // 0C
		std::int32_t                                          m_numberOfTransformTracks;  // 10
		std::int32_t                                          m_numberOfFloatTracks;      // 14
		hkRefPtr<const hkaAnimatedReferenceFrame>             m_extractedMotion;          // 18
		hkArray<hkaAnnotationTrack, hkContainerHeapAllocator> m_annotationTracks;         // 1C
	};
	static_assert(sizeof(hkaAnimation) == 0x28);
}
