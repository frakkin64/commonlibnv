#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_SECTION.h"
#include "RE/A/AnimIdle_PLAY_TYPE_ENUM.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class Actor;
	class Animation;
	class BSAnimGroupSequence;
	class KFModel;
	class NiAVObject;
	class TESIdleForm;
	class TESObjectANIO;

	class AnimIdle :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AnimIdle };
		static constexpr auto VTABLE{ VTABLE::AnimIdle };

		using PLAY_TYPE_ENUM = AnimIdle_PLAY_TYPE_ENUM;

		enum class ANIM_IDLE_ENUM : std::int32_t
		{
			kANIM_IDLE_QUEUED = 0x0,
			kANIM_IDLE_LOADED = 0x1,
			kANIM_IDLE_PLAYING = 0x2,
			kANIM_IDLE_DONE_PLAYING = 0x3,
		};

		// override (NiRefObject)
		virtual ~AnimIdle() = default;  // 00

		AnimIdle* ctor(TESIdleForm* apIdleForm, ANIM_GROUP_SECTION aeSection, AnimIdle_PLAY_TYPE_ENUM aeType, Actor* apActor, bool abForceLoad, Animation* apAnimation)
		{
			using func_t = AnimIdle*(__thiscall*)(AnimIdle*, TESIdleForm*, ANIM_GROUP_SECTION, AnimIdle_PLAY_TYPE_ENUM, Actor*, bool, Animation*);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::ctor };
			return func(this, apIdleForm, aeSection, aeType, apActor, abForceLoad, apAnimation);
		}

		static void FreeAnimIdleData(AnimIdle* apFreeIdle)
		{
			using func_t = decltype(&AnimIdle::FreeAnimIdleData);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::FreeAnimIdleData };
			func(apFreeIdle);
		}

		void Loaded(KFModel* apKFModel)
		{
			using func_t = decltype(&AnimIdle::Loaded);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::Loaded };
			func(this, apKFModel);
		}

		void Update(Animation* apAnimation)
		{
			using func_t = decltype(&AnimIdle::Update);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::Update };
			func(this, apAnimation);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&AnimIdle::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::GetSaveSize };
			return func(this);
		}

		void SaveGame(float a_arg1, Animation* a_arg2)
		{
			using func_t = decltype(&AnimIdle::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::SaveGame };
			func(this, a_arg1, a_arg2);
		}

		void LoadGame(float a_arg1, Animation* a_arg2)
		{
			using func_t = decltype(&AnimIdle::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::LoadGame };
			func(this, a_arg1, a_arg2);
		}

		static std::uint16_t GetAnimIdleSaveSize(Actor* apActor, AnimIdle* apAnimIdle)
		{
			using func_t = decltype(&AnimIdle::GetAnimIdleSaveSize);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::GetAnimIdleSaveSize };
			return func(apActor, apAnimIdle);
		}

		static void SaveAnimIdle(Actor* apActor, AnimIdle* apAnimIdle, Animation* apAnimation, float afTime)
		{
			using func_t = decltype(&AnimIdle::SaveAnimIdle);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::SaveAnimIdle };
			func(apActor, apAnimIdle, apAnimation, afTime);
		}

		static AnimIdle* LoadAnimIdle(Actor* apActor, Animation* apAnimation, float afTime)
		{
			using func_t = decltype(&AnimIdle::LoadAnimIdle);
			static REL::Relocation<func_t> func{ Offsets::AnimIdle::LoadAnimIdle };
			return func(apActor, apAnimation, afTime);
		}

	public:
		// members
		AnimIdle::ANIM_IDLE_ENUM       eFlags;         // 08
		AnimIdle_PLAY_TYPE_ENUM        eType;          // 0C
		NiPointer<KFModel>             spKFModel;      // 10
		ANIM_GROUP_SECTION             eSection;       // 14
		NiPointer<BSAnimGroupSequence> pSeq;           // 18
		TESObjectANIO*                 pAnimObj[2];    // 1C
		NiPointer<NiAVObject>          spAddOnObj[2];  // 24
		TESIdleForm*                   pIdleForm;      // 2C
		Animation*                     pAnimation;     // 30
		Actor*                         pActor;         // 34
	};
	static_assert(sizeof(AnimIdle) == 0x38);
}
