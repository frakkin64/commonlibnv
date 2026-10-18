#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BINKIO.h"
#include "RE/B/BINKRECT.h"
#include "RE/B/BUNDLEPOINTERS.h"

namespace RE
{
	class BINKFRAMEBUFFERS;
	class BINKSND;

	class BINK
	{
	public:
		// members
		std::uint32_t     Width;                      // 00?
		std::uint32_t     Height;                     // 04?
		std::uint32_t     Frames;                     // 08?
		std::uint32_t     FrameNum;                   // 0C?
		std::uint32_t     LastFrameNum;               // 10?
		std::uint32_t     FrameRate;                  // 14?
		std::uint32_t     FrameRateDiv;               // 18?
		std::uint32_t     ReadError;                  // 1C?
		std::uint32_t     OpenFlags;                  // 20?
		std::uint32_t     BinkType;                   // 24?
		std::uint32_t     Size;                       // 28?
		std::uint32_t     FrameSize;                  // 2C?
		std::uint32_t     SndSize;                    // 30?
		std::uint32_t     FrameChangePercent;         // 34?
		BINKRECT          FrameRects[8];              // 38?
		std::int32_t      NumRects;                   // B8?
		BINKFRAMEBUFFERS* FrameBuffers;               // BC?
		void*             MaskPlane;                  // C0?
		std::uint32_t     MaskPitch;                  // C4?
		std::uint32_t     MaskLength;                 // C8?
		void*             AsyncMaskPlane;             // CC?
		void*             InUseMaskPlane;             // D0?
		void*             LastMaskPlane;              // D4?
		std::uint32_t     LargestFrameSize;           // D8?
		std::uint32_t     InternalFrames;             // DC?
		std::int32_t      NumTracks;                  // E0?
		std::uint32_t     Highest1SecRate;            // E4?
		std::uint32_t     Highest1SecFrame;           // E8?
		std::int32_t      Paused;                     // EC?
		std::int32_t      async_in_progress[2];       // F0?
		std::uint32_t     soundon;                    // F8?
		std::uint32_t     videoon;                    // FC?
		void*             compframe;                  // 100?
		std::uint32_t     compframesize;              // 104?
		std::uint32_t     compframeoffset;            // 108?
		std::uint32_t     compframekey;               // 10C?
		std::uint32_t     skippedlastblit;            // 110?
		std::uint32_t     playingtracks;              // 114?
		BINKSND*          bsnd;                       // 118?
		std::int32_t*     trackindexes;               // 11C?
		BUNDLEPOINTERS    bunp;                       // 120?
		std::uint32_t     changepercent;              // 144?
		void*             alloccompframe;             // 148?
		void*             preloadptr;                 // 14C?
		std::uint32_t*    frameoffsets;               // 150?
		BINKIO            bio;                        // 154?
		std::uint8_t*     ioptr;                      // 298?
		std::uint32_t     iosize;                     // 29C?
		std::uint32_t     decompwidth;                // 2A0?
		std::uint32_t     decompheight;               // 2A4?
		std::uint32_t*    tracksizes;                 // 2A8?
		std::uint32_t*    tracktypes;                 // 2AC?
		std::int32_t*     trackIDs;                   // 2B0?
		std::uint32_t     numrects;                   // 2B4?
		std::uint32_t     playedframes;               // 2B8?
		std::uint32_t     firstframetime;             // 2BC?
		std::uint32_t     startblittime;              // 2C0?
		std::uint32_t     startsynctime;              // 2C4?
		std::uint32_t     startsyncframe;             // 2C8?
		std::uint32_t     twoframestime;              // 2CC?
		std::uint32_t     slowestframetime;           // 2D0?
		std::uint32_t     slowestframe;               // 2D4?
		std::uint32_t     slowest2frametime;          // 2D8?
		std::uint32_t     slowest2frame;              // 2DC?
		std::uint32_t     totalmem;                   // 2E0?
		std::uint32_t     timevdecomp;                // 2E4?
		std::uint32_t     timeadecomp;                // 2E8?
		std::uint32_t     timeblit;                   // 2EC?
		std::uint32_t     timeopen;                   // 2F0?
		std::uint32_t     fileframerate;              // 2F4?
		std::uint32_t     fileframeratediv;           // 2F8?
		std::uint32_t     runtimeframes;              // 2FC?
		std::int32_t      rtindex;                    // 300?
		std::uint32_t*    rtframetimes;               // 304?
		std::uint32_t*    rtadecomptimes;             // 308?
		std::uint32_t*    rtvdecomptimes;             // 30C?
		std::uint32_t*    rtblittimes;                // 310?
		std::uint32_t*    rtreadtimes;                // 314?
		std::uint32_t*    rtidlereadtimes;            // 318?
		std::uint32_t*    rtthreadreadtimes;          // 31C?
		std::uint32_t     lastblitflags;              // 320?
		std::uint32_t     lastdecompframe;            // 324?
		std::uint32_t     lastfinisheddoframe;        // 328?
		std::uint32_t     lastresynctime;             // 32C?
		std::uint32_t     doresync;                   // 330?
		std::uint32_t     soundskips;                 // 334?
		std::uint32_t     skipped_status_this_frame;  // 338?
		std::uint32_t     very_delayed;               // 33C?
		std::uint32_t     skippedblits;               // 340?
		std::uint32_t     skipped_in_a_row;           // 344?
		std::uint32_t     paused_sync_diff;           // 348?
		std::uint32_t     last_time_almost_empty;     // 34C?
		std::uint32_t     last_read_count;            // 350?
		std::uint32_t     last_sound_count;           // 354?
		std::uint32_t     snd_callback_buffer[16];    // 358?
		std::int32_t      allkeys;                    // 398?
		BINKFRAMEBUFFERS* allocatedframebuffers;      // 39C?
	};
}
