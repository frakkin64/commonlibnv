#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkaAnnotationTrack_Annotation.h"

namespace RE
{
	class hkaAnnotationTrack
	{
	public:
		using Annotation = hkaAnnotationTrack_Annotation;

		hkaAnnotationTrack* ctor(hkaAnnotationTrack const& that)
		{
			using func_t = hkaAnnotationTrack*(__thiscall*)(hkaAnnotationTrack*, hkaAnnotationTrack const&);
			static REL::Relocation<func_t> func{ Offsets::hkaAnnotationTrack::ctor };
			return func(this, that);
		}

	public:
		// members
		hkStringPtr                                                      m_trackName;    // 00?
		hkArray<hkaAnnotationTrack_Annotation, hkContainerHeapAllocator> m_annotations;  // 04?
	};
}
