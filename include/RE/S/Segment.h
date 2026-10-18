#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class Segment
	{
	public:
		void Offset(NiPoint3 const& aOffset)
		{
			using func_t = decltype(&Segment::Offset);
			static REL::Relocation<func_t> func{ Offsets::Segment::Offset };
			func(this, aOffset);
		}

	public:
		// members
		NiPoint3 Start;  // 00
		NiPoint3 End;    // 0C?
	};
}
