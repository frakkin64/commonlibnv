#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTriShape.h"

namespace RE
{
	class BSSegmentedTriShape :
		public NiTriShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSegmentedTriShape };
		static constexpr auto VTABLE{ VTABLE::BSSegmentedTriShape };

		class Segment;

		class Segment
		{
		public:
			// members
			std::uint32_t iStartIndex;           // 00?
			std::uint32_t iNumPrimitives;        // 04?
			bool          bEnabled;              // 08?
			std::uint8_t  pad09[0x3];            // 09
			std::uint32_t iNumPrimitivesMerged;  // 0C?
			bool          bEnabledPostMerge;     // 10?
			std::uint8_t  pad11[0x3];            // 11
		};

		std::uint32_t GetNumSegments()
		{
			using func_t = decltype(&BSSegmentedTriShape::GetNumSegments);
			static REL::Relocation<func_t> func{ Offsets::BSSegmentedTriShape::GetNumSegments };
			return func(this);
		}

	public:
		// members
		// not placed: pSegments, iNumSegments, bSegmentsChanged, bIgnoreSegments
	};
}
