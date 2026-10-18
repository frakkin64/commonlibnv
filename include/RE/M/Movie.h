#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PLAYING_STATE.h"

namespace RE
{
	class BINK;
	class BINKTEXTURESET;

	class Movie
	{
	public:
		bool Update(bool abAllowInterruption, bool abLoop, bool abLetterBoxed)
		{
			using func_t = decltype(&Movie::Update);
			static REL::Relocation<func_t> func{ Offsets::Movie::Update };
			return func(this, abAllowInterruption, abLoop, abLetterBoxed);
		}

	public:
		// members
		BINK*           pBink;              // 00?
		void*           dxDevice;           // 04
		std::uint8_t    pad08[0x18];        // 08
		BINKTEXTURESET* pTextureSet;        // 20
		std::uint32_t   iFrameCount;        // 24?
		std::uint32_t   iNumFramesSkipped;  // 28?
		float           fScale;             // 2C?
		float           fXCoordOffset;      // 30?
		float           fYCoordOffset;      // 34?
		PLAYING_STATE   ePlayingState;      // 38?
		bool            bLoading;           // 3C?
		std::uint8_t    pad3D[0x3];         // 3D
	};
}
