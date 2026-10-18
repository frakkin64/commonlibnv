#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSAudioSynchTimer.h"
#include "RE/B/BSSoundHandle.h"

namespace RE
{
	class BSAudioListener;
	class NiAVObject;

	class __declspec(novtable) BSAudio
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAudio };
		static constexpr auto VTABLE{ VTABLE::BSAudio };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07

		std::uint32_t GetSynchTime()
		{
			using func_t = decltype(&BSAudio::GetSynchTime);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::GetSynchTime };
			return func(this);
		}

		void SetMultiThreaded(bool abUseMultipleThreads)
		{
			using func_t = decltype(&BSAudio::SetMultiThreaded);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::SetMultiThreaded };
			func(this, abUseMultipleThreads);
		}

		BSSoundHandle GetSoundHandleByFilename(char const* result, std::uint32_t apFilename, void* aiTypeFlags)
		{
			using func_t = decltype(&BSAudio::GetSoundHandleByFilename);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::GetSoundHandleByFilename };
			return func(this, result, apFilename, aiTypeFlags);
		}

		BSSoundHandle GetSoundHandleByName(char const* result, std::uint32_t apSoundName)
		{
			using func_t = decltype(&BSAudio::GetSoundHandleByName);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::GetSoundHandleByName };
			return func(this, result, apSoundName);
		}

		void Update(bool abPlayGameWorldSounds)
		{
			using func_t = decltype(&BSAudio::Update);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::Update };
			func(this, abPlayGameWorldSounds);
		}

		void SetEnvironment(std::uint32_t aiEnviroType)
		{
			using func_t = decltype(&BSAudio::SetEnvironment);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::SetEnvironment };
			func(this, aiEnviroType);
		}

		float GetMasterVolume()
		{
			using func_t = decltype(&BSAudio::GetMasterVolume);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::GetMasterVolume };
			return func(this);
		}

		float GetMusicVolume()
		{
			using func_t = decltype(&BSAudio::GetMusicVolume);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::GetMusicVolume };
			return func(this);
		}

		float GetRadioVolume()
		{
			using func_t = decltype(&BSAudio::GetRadioVolume);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::GetRadioVolume };
			return func(this);
		}

		void SetRadioVolume(float afNewVol)
		{
			using func_t = decltype(&BSAudio::SetRadioVolume);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::SetRadioVolume };
			func(this, afNewVol);
		}

		void Precache(char const* apFilenameToCache, std::uint32_t aiFlags, void* apSettingsContext)
		{
			using func_t = decltype(&BSAudio::Precache);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::Precache };
			func(this, apFilenameToCache, aiFlags, apSettingsContext);
		}

		void MuteType(std::uint32_t aiType, std::uint32_t aiFadeTimeMS, std::uint32_t aiMillibels)
		{
			using func_t = decltype(&BSAudio::MuteType);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::MuteType };
			func(this, aiType, aiFadeTimeMS, aiMillibels);
		}

		void KillAllOfType(std::uint32_t aiType, std::uint32_t aiFadeTimeMS)
		{
			using func_t = decltype(&BSAudio::KillAllOfType);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::KillAllOfType };
			func(this, aiType, aiFadeTimeMS);
		}

		void StopMovingSounds(NiAVObject* apObj, float afFadeSeconds, std::uint32_t aiFlags)
		{
			using func_t = decltype(&BSAudio::StopMovingSounds);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::StopMovingSounds };
			func(this, apObj, afFadeSeconds, aiFlags);
		}

		void EndAllSoundsOfType(std::uint32_t aiType)
		{
			using func_t = decltype(&BSAudio::EndAllSoundsOfType);
			static REL::Relocation<func_t> func{ Offsets::BSAudio::EndAllSoundsOfType };
			func(this, aiType);
		}

	public:
		// members
		bool              bAudioEnabled;              // 04
		bool              bInitialized;               // 05
		bool              bMultiThread;               // 06
		std::uint8_t      pad07;                      // 07
		std::uint32_t     iMusicStartOffset;          // 08
		bool              bSeekMusic;                 // 0C
		std::uint8_t      pad0D[0x3];                 // 0D
		BSAudioListener*  pListener;                  // 10
		BSAudioSynchTimer SynchTimer;                 // 14
		void*             pfnIDCallback;              // 20?
		void*             pfnNameCallback;            // 24?
		void*             pfnRandomFilenameCallback;  // 28?
		void*             pfnSettingsCallback;        // 2C?
		void*             pfnSynchPausedCallback;     // 30?
		void*             pfnSynchUnPausedCallback;   // 34?
	};
}
