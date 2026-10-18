#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AudioMessageStack.h"
#include "RE/B/BSCriticalSection.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class AudioDebugString;
	class AudioLoadTask;
	class BSAudioManagerThread;
	class BSGameSound;
	class BSSoundInfo;
	class BSSoundMessage;
	class NiAVObject;

	class __declspec(novtable) BSAudioManager
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAudioManager };
		static constexpr auto VTABLE{ VTABLE::BSAudioManager };

		class PAUSE_ENTRY;

		class PAUSE_ENTRY
		{
		public:
			// members
			std::uint32_t iPauseMask;   // 00?
			std::uint16_t iPauseState;  // 04?
			std::uint16_t pad06;        // 06
		};

		// add
		virtual void Unk_00();  // 00

		static BSAudioManager& QInstance()
		{
			using func_t = decltype(&BSAudioManager::QInstance);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::QInstance };
			return func();
		}

		void StartAudioThread()
		{
			using func_t = decltype(&BSAudioManager::StartAudioThread);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::StartAudioThread };
			func(this);
		}

		void Update(bool abPlayGameWorldSounds)
		{
			using func_t = decltype(&BSAudioManager::Update);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::Update };
			func(this, abPlayGameWorldSounds);
		}

		BSSoundHandle GetSoundHandleByFilename(char const* result, std::uint32_t apFilename, void* aiTypeFlags)
		{
			using func_t = decltype(&BSAudioManager::GetSoundHandleByFilename);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::GetSoundHandleByFilename };
			return func(this, result, apFilename, aiTypeFlags);
		}

		BSSimpleList<AudioDebugString*>* GetDebugString(std::uint32_t aiPage)
		{
			using func_t = decltype(&BSAudioManager::GetDebugString);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::GetDebugString };
			return func(this, aiPage);
		}

		void SetAudioCacheSizeInK(std::uint32_t aiNewSize)
		{
			using func_t = decltype(&BSAudioManager::SetAudioCacheSizeInK);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::SetAudioCacheSizeInK };
			func(this, aiNewSize);
		}

	private:
		void SynchVoiceStates()
		{
			using func_t = decltype(&BSAudioManager::SynchVoiceStates);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::SynchVoiceStates };
			func(this);
		}

		void SetVoiceState(std::uint32_t aiID, BSGameSound* apSound)
		{
			using func_t = decltype(&BSAudioManager::SetVoiceState);
			static REL::Relocation<func_t> func{ Offsets::BSAudioManager::SetVoiceState };
			func(this, aiID, apSound);
		}

	public:
		// members
		std::int32_t                                       iMessageListIndex;            // 04
		std::int32_t                                       iMessageProcessingListIndex;  // 08
		NiTPointerList<BSSoundMessage*>                    Messages[2];                  // 0C
		AudioMessageStack                                  FreeMessages;                 // 24
		AudioMessageStack                                  FreeQueueMessages;            // 34
		AudioMessageStack                                  GarbageMessages;              // 44
		NiTPointerMap<std::int32_t, BSGameSound*>          SoundList;                    // 54
		NiTPointerMap<std::int32_t, BSSoundInfo*>          SoundStateMap;                // 64
		NiTPointerMap<std::int32_t, BSSoundInfo*>          StateUpdateMap;               // 74
		NiTPointerMap<std::int32_t, NiPointer<NiAVObject>> MovingRefrList;               // 84
		NiTPointerList<BSGameSound*>                       CachedSoundList;              // 94
		std::uint32_t                                      iCurrentCachSize;             // A0
		std::uint32_t                                      iWeatherFlags;                // A4
		float                                              fCurrentGamehour;             // A8
		BSCriticalSection                                  MessageCritSection;           // AC
		BSCriticalSection                                  StateCritSection;             // C4
		BSCriticalSection                                  CacheCritSection;             // DC
		BSCriticalSection                                  ProcessingCritSection;        // F4
		BSCriticalSection                                  CacheLoadTaskCritSection;     // 10C
		NiTPointerList<AudioLoadTask*>                     CacheLoadTaskList;            // 124
		std::uint32_t                                      iDelayTimerDelta;             // 130
		bool                                               bPrecacheCompleted;           // 134
		bool                                               bListenerMoved;               // 135
		std::uint16_t                                      pad136;                       // 136
		std::uint32_t                                      dwAudioThreadID;              // 138
		BSAudioManagerThread*                              pUpdateThread;                // 13C
		float                                              fMasterVolume;                // 140
		float                                              fFootVolume;                  // 144
		float                                              fVoiceVolume;                 // 148
		float                                              fEffectsVolume;               // 14C
		float                                              fMusicVolume;                 // 150
		float                                              fRadioVolume;                 // 154
		float                                              fMasterSecondaryVolume;       // 158
		float                                              fFootSecondaryVolume;         // 15C
		float                                              fVoiceSecondaryVolume;        // 160
		float                                              fEffectsSecondaryVolume;      // 164
		float                                              fMusicSecondaryVolume;        // 168
		float                                              fRadioSecondaryVolume;        // 16C
		std::uint32_t                                      iMuteMask;                    // 170
		bool                                               bDialogueFade;                // 174
		bool                                               bListenerUnderwater;          // 175
		std::uint16_t                                      pad176;                       // 176
		BSAudioManager::PAUSE_ENTRY*                       pPauseEntries;                // 178
		std::uint32_t                                      iPauseListSize;               // 17C
		std::uint32_t                                      iNextID;                      // 180
		bool                                               bIgnoreGlobalTimeMultiplier;  // 184?
		std::uint8_t                                       pad185[0x3];                  // 185
	};
}
