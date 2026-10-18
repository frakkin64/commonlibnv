#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiAVObject;
	class NiPoint3;

	class BSSoundHandle
	{
	public:
		enum class ASSUMED_STATE : std::int32_t
		{
			kASSUMED_STATE_INITIALIZED = 0x0,
			kASSUMED_STATE_PLAYING = 0x1,
			kASSUMED_STATE_STOPPED = 0x2,
			kASSUMED_STATE_PAUSED = 0x3,
		};

		void Clear()
		{
			using func_t = decltype(&BSSoundHandle::Clear);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::Clear };
			func(this);
		}

		bool operator_call(BSSoundHandle const& aCmp) const
		{
			using func_t = bool (BSSoundHandle::*)(BSSoundHandle const&) const;
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::operator_call };
			return func(this, aCmp);
		}

		BSSoundHandle* ctor()
		{
			using func_t = BSSoundHandle*(__thiscall*)(BSSoundHandle*);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::ctor };
			return func(this);
		}

		BSSoundHandle* ctor(std::uint32_t aiID)
		{
			using func_t = BSSoundHandle*(__thiscall*)(BSSoundHandle*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::ctor_1 };
			return func(this, aiID);
		}

		bool SetPosition(NiPoint3 const& aPosition)
		{
			using func_t = bool (BSSoundHandle::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::SetPosition };
			return func(this, aPosition);
		}

		bool Play(bool abLoopPlayback)
		{
			using func_t = decltype(&BSSoundHandle::Play);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::Play };
			return func(this, abLoopPlayback);
		}

		bool PlayAfter(std::uint32_t aiDelay, std::int32_t aiPlayFlags)
		{
			using func_t = decltype(&BSSoundHandle::PlayAfter);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::PlayAfter };
			return func(this, aiDelay, aiPlayFlags);
		}

		bool Pause()
		{
			using func_t = decltype(&BSSoundHandle::Pause);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::Pause };
			return func(this);
		}

		bool Stop()
		{
			using func_t = decltype(&BSSoundHandle::Stop);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::Stop };
			return func(this);
		}

		bool IsPlaying()
		{
			using func_t = decltype(&BSSoundHandle::IsPlaying);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::IsPlaying };
			return func(this);
		}

		bool SetVolume(float aiNewVolume)
		{
			using func_t = decltype(&BSSoundHandle::SetVolume);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::SetVolume };
			return func(this, aiNewVolume);
		}

		std::int32_t GetDuration()
		{
			using func_t = decltype(&BSSoundHandle::GetDuration);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::GetDuration };
			return func(this);
		}

		bool SetPosition(float afX, float afY, float afZ)
		{
			using func_t = bool (BSSoundHandle::*)(float, float, float);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::SetPosition_1 };
			return func(this, afX, afY, afZ);
		}

		void SetMinMax(float afMin, float afMax)
		{
			using func_t = decltype(&BSSoundHandle::SetMinMax);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::SetMinMax };
			func(this, afMin, afMax);
		}

		bool IsValid()
		{
			using func_t = decltype(&BSSoundHandle::IsValid);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::IsValid };
			return func(this);
		}

		bool Release()
		{
			using func_t = decltype(&BSSoundHandle::Release);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::Release };
			return func(this);
		}

		bool FadeOutAndRelease(std::uint32_t aiMilliseconds)
		{
			using func_t = decltype(&BSSoundHandle::FadeOutAndRelease);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::FadeOutAndRelease };
			return func(this, aiMilliseconds);
		}

		void SetObjectToFollow(NiAVObject* apObj)
		{
			using func_t = decltype(&BSSoundHandle::SetObjectToFollow);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::SetObjectToFollow };
			func(this, apObj);
		}

		void SetPriority(std::uint32_t aiPriority)
		{
			using func_t = decltype(&BSSoundHandle::SetPriority);
			static REL::Relocation<func_t> func{ Offsets::BSSoundHandle::SetPriority };
			func(this, aiPriority);
		}

	public:
		// members
		std::uint32_t                iSoundID;        // 00
		bool                         bAssumeSuccess;  // 04
		std::uint8_t                 pad05[0x3];      // 05
		BSSoundHandle::ASSUMED_STATE eState;          // 08
	};
	static_assert(sizeof(BSSoundHandle) == 0xC);
}
