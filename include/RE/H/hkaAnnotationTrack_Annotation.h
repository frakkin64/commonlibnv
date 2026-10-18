#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaAnnotationTrack_Annotation
	{
	public:
		// members
		float       m_time;  // 00?
		hkStringPtr m_text;  // 04?
	};
}
