#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleList.h"
#include "RE/E/EffectArchetypes_ArchetypeID.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class AlchemyItem;
	class MagicCaster;
	class MagicItem;
	class SpellDispelData;
	class TESBoundObject;
	class TESObjectREFR;

	class __declspec(novtable) MagicTarget
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicTarget };
		static constexpr auto VTABLE{ VTABLE::MagicTarget };

		// add
		virtual bool AddTarget(MagicCaster* apCaster, MagicItem* apSpell, ActiveEffect* apActiveEffect, bool abAreaTarget);       // 00
		virtual TESObjectREFR* GetTargetStatsObject();                                                                            // 01
		virtual BSSimpleList<ActiveEffect*>* GetActiveEffectList();                                                               // 02
		virtual bool MagicTargetIsActor();                                                                                        // 03
		virtual bool IsInvulnerable();                                                                                            // 04
		virtual void EffectAdded(ActiveEffect* apEffect);                                                                         // 05
		virtual void EffectRemoved(ActiveEffect* apEffect);                                                                       // 06
		virtual void EffectReflected(MagicCaster* apCaster, ActiveEffect* apEffect);                                              // 07
		virtual void EffectAbsorbed(MagicCaster* apCaster, ActiveEffect* apEffect);                                               // 08
		virtual float CheckResistance(MagicCaster* apCaster, MagicItem* apSpell, ActiveEffect* apActiveEffect);                   // 09
		virtual bool CheckAbsorb(MagicCaster* apCaster, MagicItem* apSpell, ActiveEffect* apActiveEffect, bool abReducedChance);  // 0A
		virtual bool CheckReflect(MagicCaster* apCaster, MagicItem* apSpell, ActiveEffect* apActiveEffect);                       // 0B

		MagicTarget* ctor()
		{
			using func_t = MagicTarget*(__thiscall*)(MagicTarget*);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::ctor };
			return func(this);
		}

		Actor* GetTargetAsActor()
		{
			using func_t = decltype(&MagicTarget::GetTargetAsActor);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::GetTargetAsActor };
			return func(this);
		}

		bool IsSpellTarget(MagicItem* apSpell, bool abIncludeInactiveSpells)
		{
			using func_t = decltype(&MagicTarget::IsSpellTarget);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::IsSpellTarget };
			return func(this, apSpell, abIncludeInactiveSpells);
		}

		bool IsEffectTarget(EffectArchetypes_ArchetypeID aeID, bool abIncludeInactiveSpells)
		{
			using func_t = decltype(&MagicTarget::IsEffectTarget);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::IsEffectTarget };
			return func(this, aeID, abIncludeInactiveSpells);
		}

		bool HasDamageHealthEffect()
		{
			using func_t = decltype(&MagicTarget::HasDamageHealthEffect);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::HasDamageHealthEffect };
			return func(this);
		}

		float GetUsageMonitorEffectMagnitude(MagicItem* apSpell)
		{
			using func_t = decltype(&MagicTarget::GetUsageMonitorEffectMagnitude);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::GetUsageMonitorEffectMagnitude };
			return func(this, apSpell);
		}

		bool HasRecoverableActorValueEffect(ActorValue_Index aeWhich)
		{
			using func_t = decltype(&MagicTarget::HasRecoverableActorValueEffect);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::HasRecoverableActorValueEffect };
			return func(this, aeWhich);
		}

		bool CheckAddEffect(MagicCaster* apCaster, MagicItem* apSpell, ActiveEffect* apActiveEffect)
		{
			using func_t = decltype(&MagicTarget::CheckAddEffect);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::CheckAddEffect };
			return func(this, apCaster, apSpell, apActiveEffect);
		}

		void UpdateTarget(float afSecondsElapsed)
		{
			using func_t = decltype(&MagicTarget::UpdateTarget);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::UpdateTarget };
			func(this, afSecondsElapsed);
		}

		void Dispel(MagicItem* apSpell, MagicCaster* apCaster, ActiveEffect* apActiveEffect)
		{
			using func_t = void (MagicTarget::*)(MagicItem*, MagicCaster*, ActiveEffect*);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::Dispel };
			func(this, apSpell, apCaster, apActiveEffect);
		}

		void Dispel(EffectArchetypes_ArchetypeID aeID, MagicCaster* apCaster)
		{
			using func_t = void (MagicTarget::*)(EffectArchetypes_ArchetypeID, MagicCaster*);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::Dispel_1 };
			func(this, aeID, apCaster);
		}

		void Dispel(TESBoundObject* apEnchantmentSource, bool abNow)
		{
			using func_t = void (MagicTarget::*)(TESBoundObject*, bool);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::Dispel_2 };
			func(this, apEnchantmentSource, abNow);
		}

		bool CheckAddiction(AlchemyItem* apSpell)
		{
			using func_t = decltype(&MagicTarget::CheckAddiction);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::CheckAddiction };
			return func(this, apSpell);
		}

		std::uint32_t GetMagicTargetFormID()
		{
			using func_t = decltype(&MagicTarget::GetMagicTargetFormID);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::GetMagicTargetFormID };
			return func(this);
		}

		static MagicTarget* GetMagicTargetByNumericID(std::uint32_t aiFormID)
		{
			using func_t = decltype(&MagicTarget::GetMagicTargetByNumericID);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::GetMagicTargetByNumericID };
			return func(aiFormID);
		}

	private:
		void RemoveEffect(ActiveEffect* apEffect, bool abImmediate)
		{
			using func_t = decltype(&MagicTarget::RemoveEffect);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::RemoveEffect };
			func(this, apEffect, abImmediate);
		}

		static std::int32_t ActiveEffectListCompareFn(ActiveEffect* apCompare1, ActiveEffect* apCompare2)
		{
			using func_t = decltype(&MagicTarget::ActiveEffectListCompareFn);
			static REL::Relocation<func_t> func{ Offsets::MagicTarget::ActiveEffectListCompareFn };
			return func(apCompare1, apCompare2);
		}

	public:
		// members
		bool                           bShowTargetStats;      // 04
		bool                           bUpdating;             // 05
		std::uint16_t                  pad06;                 // 06
		BSSimpleList<SpellDispelData*> PostUpdateDispelList;  // 08
	};
}
