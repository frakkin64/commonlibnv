#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BINKSND
	{
	public:
		// members
		std::uint8_t* sndwritepos;      // 00?
		std::uint32_t audiodecompsize;  // 04?
		std::uint32_t sndbufsize;       // 08?
		std::uint8_t* sndbuf;           // 0C?
		std::uint8_t* sndend;           // 10?
		std::uint32_t sndcomp;          // 14?
		std::uint8_t* sndreadpos;       // 18?
		std::uint32_t orig_freq;        // 1C?
		std::uint32_t freq;             // 20?
		std::int32_t  bits;             // 24?
		std::int32_t  chans;            // 28?
		std::int32_t  BestSizeIn16;     // 2C?
		std::uint32_t BestSizeMask;     // 30?
		std::int32_t  OnOff;            // 34?
		std::uint32_t Latency;          // 38?
		std::uint32_t VideoScale;       // 3C?
		std::uint32_t sndendframe;      // 40?
		std::uint32_t sndpad;           // 44?
		std::int32_t  sndprime;         // 48?
		std::int32_t  NoThreadService;  // 4C?
		std::uint32_t SoundDroppedOut;  // 50?
		std::uint32_t sndconvert8;      // 54?
		std::uint8_t  snddata[256];     // 58?
		void*         Ready;            // 158?
		void*         Lock;             // 15C?
		void*         Unlock;           // 160?
		void*         Volume;           // 164?
		void*         Pan;              // 168?
		void*         Pause;            // 16C?
		void*         SetOnOff;         // 170?
		void*         Close;            // 174?
		void*         MixBins;          // 178?
		void*         MixBinVols;       // 17C?
	};
}
