#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/B/BSTCaseInsensitiveStringMap.h"

namespace RE
{
	class Movie;

	class __declspec(novtable) MoviePlayer
	{
	public:
		static constexpr auto RTTI{ RTTI::MoviePlayer };
		static constexpr auto VTABLE{ VTABLE::MoviePlayer };

		// add
		virtual ~MoviePlayer() = default;                             // 00
		virtual void MuteAudio();                                     // 01
		virtual void UnmuteAudio();                                   // 02
		virtual void PauseMusic();                                    // 03
		virtual void UnPauseMusic();                                  // 04
		virtual void SuspendAudioThread();                            // 05
		virtual void ResumeAudioThread();                             // 06
		virtual void* GetDevice();                                    // 07
		virtual void LockRenderer();                                  // 08
		virtual void UnlockRenderer();                                // 09
		virtual std::uint32_t GetScreenWidth();                       // 0A
		virtual std::uint32_t GetScreenHeight();                      // 0B
		virtual bool IsRendererInsideFrame();                         // 0C
		virtual std::uint32_t GetScreenOffsetX();                     // 0D
		virtual std::uint32_t GetScreenOffsetY();                     // 0E
		virtual std::uint32_t GetMainThreadID();                      // 0F
		virtual bool CheckContinuePlaying(bool abAllowInterruption);  // 10

		void StartSequence(char const* apString, bool abLetterBoxed, std::int32_t aiSequencePriority, bool abMuteGameAudio, bool abPauseGameAudio, float afTimeBeforeMovieSkippable)
		{
			using func_t = decltype(&MoviePlayer::StartSequence);
			static REL::Relocation<func_t> func{ Offsets::MoviePlayer::StartSequence };
			func(this, apString, abLetterBoxed, aiSequencePriority, abMuteGameAudio, abPauseGameAudio, afTimeBeforeMovieSkippable);
		}

		bool GetPlayingSequence()
		{
			using func_t = decltype(&MoviePlayer::GetPlayingSequence);
			static REL::Relocation<func_t> func{ Offsets::MoviePlayer::GetPlayingSequence };
			return func(this);
		}

		void PlaySequence(char* apString)
		{
			using func_t = decltype(&MoviePlayer::PlaySequence);
			static REL::Relocation<func_t> func{ Offsets::MoviePlayer::PlaySequence };
			func(this, apString);
		}

		void Pause()
		{
			using func_t = decltype(&MoviePlayer::Pause);
			static REL::Relocation<func_t> func{ Offsets::MoviePlayer::Pause };
			func(this);
		}

	public:
		// members
		void*                              hMovieLoadingThreadHandle;       // 04
		void*                              hSequenceThreadHandle;           // 08
		Movie*                             pCurrentMovie;                   // 0C
		Movie*                             pPausedMovie;                    // 10
		Movie*                             pThreadLoadedMovie;              // 14
		bool                               bUseThreadLoadedMovie;           // 18
		bool                               bPAL50;                          // 19
		std::uint16_t                      pad1A;                           // 1A
		void*                              fpThreadLoadCallback;            // 1C
		bool                               bWaitingForSequenceToEnd;        // 20
		bool                               bStopSequence;                   // 21
		bool                               bLetterBoxedSequence;            // 22
		bool                               bSequenceMutesGameAudio;         // 23
		bool                               bSequencePausesGameAudio;        // 24
		std::uint8_t                       pad25[0x3];                      // 25
		float                              m_fTimeBeforeMovieSkippable;     // 28
		std::int32_t                       iCurrentSequenceThreadPriority;  // 2C
		BSSemaphore                        OpenBinkSema;                    // 30
		bool                               bBinkOpenSignaled;               // 3C
		std::uint8_t                       pad3D[0x3];                      // 3D
		BSTCaseInsensitiveStringMap<char*> BinkPaths;                       // 40
	};
}
