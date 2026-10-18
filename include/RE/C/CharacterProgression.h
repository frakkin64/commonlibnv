#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class ActorValueOwner;
	class CharacterProgressionData;

	class CharacterProgression
	{
	public:
		void RewardExperience(std::int32_t aiAmount)
		{
			using func_t = decltype(&CharacterProgression::RewardExperience);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::RewardExperience };
			func(this, aiAmount);
		}

		bool QReadyToLevelUp()
		{
			using func_t = decltype(&CharacterProgression::QReadyToLevelUp);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::QReadyToLevelUp };
			return func(this);
		}

		void BeginLevelUp()
		{
			using func_t = decltype(&CharacterProgression::BeginLevelUp);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::BeginLevelUp };
			func(this);
		}

		void FinishLevelUp()
		{
			using func_t = decltype(&CharacterProgression::FinishLevelUp);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::FinishLevelUp };
			func(this);
		}

		void ForceLevel(std::int32_t aiLevel)
		{
			using func_t = decltype(&CharacterProgression::ForceLevel);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::ForceLevel };
			func(this, aiLevel);
		}

		static void ActorValueModifiedCallback(ActorValueOwner* apActor, ActorValue_Index aiWhich, float afOriginalValue, float afDelta, ActorValueOwner* apActorSource)
		{
			using func_t = decltype(&CharacterProgression::ActorValueModifiedCallback);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::ActorValueModifiedCallback };
			func(apActor, aiWhich, afOriginalValue, afDelta, apActorSource);
		}

		void SaveGame(std::uint32_t aiFlags)
		{
			using func_t = decltype(&CharacterProgression::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::SaveGame };
			func(this, aiFlags);
		}

		void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags)
		{
			using func_t = decltype(&CharacterProgression::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgression::LoadGame };
			func(this, aiFlags, aiCurrentFlags);
		}

	public:
		// members
		CharacterProgressionData* pData;  // 00
	};
}
