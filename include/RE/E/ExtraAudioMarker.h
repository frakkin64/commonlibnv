#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class AudioMarkerData;

	class ExtraAudioMarker :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAudioMarker };
		static constexpr auto VTABLE{ VTABLE::ExtraAudioMarker };

		// override (BSExtraData)
		virtual ~ExtraAudioMarker() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		AudioMarkerData* pAudioData;  // 0C
	};
	static_assert(sizeof(ExtraAudioMarker) == 0x10);
}
