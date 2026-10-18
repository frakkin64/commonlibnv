#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BINK;

	class BINKIO
	{
	public:
		// members
		void*                  ReadHeader;            // 00?
		void*                  ReadFrame;             // 04?
		void*                  GetBufferSize;         // 08?
		void*                  SetInfo;               // 0C?
		void*                  Idle;                  // 10?
		void*                  Close;                 // 14?
		void*                  BGControl;             // 18?
		BINK*                  bink;                  // 1C?
		volatile std::uint32_t ReadError;             // 20?
		volatile std::uint32_t DoingARead;            // 24?
		volatile std::uint32_t BytesRead;             // 28?
		volatile std::uint32_t Working;               // 2C?
		volatile std::uint32_t TotalTime;             // 30?
		volatile std::uint32_t ForegroundTime;        // 34?
		volatile std::uint32_t IdleTime;              // 38?
		volatile std::uint32_t ThreadTime;            // 3C?
		volatile std::uint32_t BufSize;               // 40?
		volatile std::uint32_t BufHighUsed;           // 44?
		volatile std::uint32_t CurBufSize;            // 48?
		volatile std::uint32_t CurBufUsed;            // 4C?
		volatile std::uint32_t Suspended;             // 50?
		volatile std::uint8_t  iodata[160];           // 54?
		void*                  suspend_callback;      // F4?
		void*                  try_suspend_callback;  // F8?
		void*                  resume_callback;       // FC?
		void*                  idle_on_callback;      // 100?
		volatile std::uint32_t callback_control[16];  // 104?
	};
}
