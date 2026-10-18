#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MoviePlayer.h"

namespace RE
{
	class BGSMoviePlayer :
		public MoviePlayer  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMoviePlayer };
		static constexpr auto VTABLE{ VTABLE::BGSMoviePlayer };

		// override (MoviePlayer)
		virtual ~BGSMoviePlayer() = default;                                   // 00
		virtual void MuteAudio() override;                                     // 01
		virtual void UnmuteAudio() override;                                   // 02
		virtual void PauseMusic() override;                                    // 03
		virtual void UnPauseMusic() override;                                  // 04
		virtual void SuspendAudioThread() override;                            // 05
		virtual void ResumeAudioThread() override;                             // 06
		virtual void* GetDevice() override;                                    // 07
		virtual void LockRenderer() override;                                  // 08
		virtual void UnlockRenderer() override;                                // 09
		virtual std::uint32_t GetScreenWidth() override;                       // 0A
		virtual std::uint32_t GetScreenHeight() override;                      // 0B
		virtual bool IsRendererInsideFrame() override;                         // 0C
		virtual std::uint32_t GetScreenOffsetX() override;                     // 0D
		virtual std::uint32_t GetScreenOffsetY() override;                     // 0E
		virtual std::uint32_t GetMainThreadID() override;                      // 0F
		virtual bool CheckContinuePlaying(bool abAllowInterruption) override;  // 10

		static void Create()
		{
			using func_t = decltype(&BGSMoviePlayer::Create);
			static REL::Relocation<func_t> func{ Offsets::BGSMoviePlayer::Create };
			func();
		}

		BGSMoviePlayer* ctor()
		{
			using func_t = BGSMoviePlayer*(__thiscall*)(BGSMoviePlayer*);
			static REL::Relocation<func_t> func{ Offsets::BGSMoviePlayer::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BGSMoviePlayer) == 0x54);
}
