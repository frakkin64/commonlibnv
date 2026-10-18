#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class TESObjectREFR;

	class LoadedReferenceMap :
		public NiTMap<std::uint32_t, TESObjectREFR*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LoadedReferenceMap };
		static constexpr auto VTABLE{ VTABLE::LoadedReferenceMap };

		// override (NiTMap<std::uint32_t, TESObjectREFR*>)
		virtual ~LoadedReferenceMap() = default;  // 00

		// members
		std::uint32_t iCount;                 // 10?
		std::uint32_t iLastChangedTimeStamp;  // 14
	};
}
