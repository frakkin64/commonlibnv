#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AssociatedItemEffect.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class MagicTarget;

	class SummonCreatureEffect :
		public AssociatedItemEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SummonCreatureEffect };
		static constexpr auto VTABLE{ VTABLE::SummonCreatureEffect };

		// override (AssociatedItemEffect)
		virtual ~SummonCreatureEffect() = default;                        // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;       // 04
		virtual void SaveGame(Actor* apActor) override;                   // 06
		virtual void LoadGame(Actor* apActor) override;                   // 08
		virtual void InitLoadGame(Actor* apActor) override;               // 0A
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		SummonCreatureEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = SummonCreatureEffect*(__thiscall*)(SummonCreatureEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::SummonCreatureEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

		static float computeDesirability(Actor* summoner, NiPoint3 const& aLocation)
		{
			using func_t = decltype(&SummonCreatureEffect::computeDesirability);
			static REL::Relocation<func_t> func{ Offsets::SummonCreatureEffect::computeDesirability };
			return func(summoner, aLocation);
		}

		bool CheckSummonLocation(Actor* apSummoned, NiPoint3& location)
		{
			using func_t = decltype(&SummonCreatureEffect::CheckSummonLocation);
			static REL::Relocation<func_t> func{ Offsets::SummonCreatureEffect::CheckSummonLocation };
			return func(this, apSummoned, location);
		}

		void DoSummon(Actor* pOwner)
		{
			using func_t = decltype(&SummonCreatureEffect::DoSummon);
			static REL::Relocation<func_t> func{ Offsets::SummonCreatureEffect::DoSummon };
			func(this, pOwner);
		}

		void LimitPlayerSummonedCreatures()
		{
			using func_t = decltype(&SummonCreatureEffect::LimitPlayerSummonedCreatures);
			static REL::Relocation<func_t> func{ Offsets::SummonCreatureEffect::LimitPlayerSummonedCreatures };
			func(this);
		}

	public:
		// members
		Actor*        pSummonedCreature;  // 4C
		bool          bTargetSet;         // 50
		std::uint8_t  pad51[0x3];         // 51
		float         fAppearTime;        // 54
		NiPoint3      AppearLocation;     // 58
		NiPoint3      AppearRotation;     // 64
		bool          bPlacement;         // 70
		bool          bcached;            // 71
		std::uint16_t pad72;              // 72
	};
	static_assert(sizeof(SummonCreatureEffect) == 0x74);
}
