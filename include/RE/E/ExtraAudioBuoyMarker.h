#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class AudioBuoyMarkerData;

	class ExtraAudioBuoyMarker :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAudioBuoyMarker };
		static constexpr auto VTABLE{ VTABLE::ExtraAudioBuoyMarker };

		// override (BSExtraData)
		virtual ~ExtraAudioBuoyMarker() = default;              // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		AudioBuoyMarkerData* pAudioBuoyData;  // 0C
	};
	static_assert(sizeof(ExtraAudioBuoyMarker) == 0x10);
}
