#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/M/MagicItem_CannotCastReason.h"
#include "RE/M/MagicSystem_Range.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class EffectItem;
	class MagicItem;
	class MagicLight;
	class MagicProjectile;
	class MagicTarget;
	class MobileObject;
	class NiNode;
	class SpellItem;
	class TESBoundObject;
	class TESObjectCELL;
	class TESObjectREFR;
	class hkpRigidBody;

	class __declspec(novtable) MagicCaster
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicCaster };
		static constexpr auto VTABLE{ VTABLE::MagicCaster };

		enum class State : std::int32_t
		{
			kNO_SPELL = 0x0,
			kAIM = 0x1,
			kCAST = 0x2,
			kRELEASE = 0x3,
			kFIND_TARGETS = 0x4,
			kERR_SPELL_DISABLED = 0x5,
			kERR_ALREADY_CASTING = 0x6,
			kERR_CANNOT_CAST = 0x7,
		};

		// add
		virtual void CastAbility(SpellItem* apSpell, bool abLoadCast);                                                                                                         // 00
		virtual void CastAddiction(SpellItem* apSpell, bool abLoadCast);                                                                                                       // 01
		virtual void CastRadiation(SpellItem* apSpell, bool abLoadCast);                                                                                                       // 02
		virtual void CastSpellImmediate(MagicItem* apSpell, bool abLoadCast, MagicTarget* apDesiredTarget, float afEffectivenessMult, bool abAdjustOnlyHostileEffectiveness);  // 03
		virtual void TransferDisease(SpellItem* apSpell, MagicTarget* apDesiredTarget, bool abLoadCast);                                                                       // 04
		virtual void CastWornEnchantment(MagicItem* apSpell, TESBoundObject* apSource, bool abLoadCast);                                                                       // 05
		virtual MagicTarget* GetTouchTarget();                                                                                                                                 // 06
		virtual void StartAim();                                                                                                                                               // 07
		virtual void StartCast();                                                                                                                                              // 08
		virtual void SpellCast(MagicItem* apSpellCast, bool abSuccess);                                                                                                        // 09
		virtual bool CheckCast(MagicItem* apSpell, float* afEffectStrength, MagicItem_CannotCastReason* apReason, bool abUseBaseMagicka);                                      // 0A
		virtual TESObjectREFR* GetCasterStatsObject();                                                                                                                         // 0B
		virtual NiNode* GetMagicNode();                                                                                                                                        // 0C
		virtual MagicItem* GetCurrentSpell();                                                                                                                                  // 0D
		virtual bool TargetSelf(ActiveEffect* apActiveEffect);                                                                                                                 // 0E
		virtual float GetMagicEffectivenessModifier(bool abJustArmor, float afUseThisFatigue);                                                                                 // 0F
		virtual void SetCurrentSpell(MagicItem* apCurrentSpell);                                                                                                               // 10
		virtual MagicTarget* GetDesiredTarget();                                                                                                                               // 11
		virtual void SetDesiredTarget(MagicTarget* apDesiredTarget);                                                                                                           // 12
		virtual ActiveEffect* CreateActiveEffect(MagicItem* apSpell, EffectItem* apEffectItem, TESBoundObject* apSource);                                                      // 13

		MagicCaster* ctor()
		{
			using func_t = MagicCaster*(__thiscall*)(MagicCaster*);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(MagicCaster*);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::dtor };
			func(this);
		}

		Actor* GetCasterAsActor()
		{
			using func_t = decltype(&MagicCaster::GetCasterAsActor);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::GetCasterAsActor };
			return func(this);
		}

		bool CastSpell(MagicItem* apSpell, MagicTarget* apDesiredTarget, bool abLoadCast)
		{
			using func_t = decltype(&MagicCaster::CastSpell);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::CastSpell };
			return func(this, apSpell, apDesiredTarget, abLoadCast);
		}

		bool ReleaseCast(TESBoundObject* apSource)
		{
			using func_t = decltype(&MagicCaster::ReleaseCast);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::ReleaseCast };
			return func(this, apSource);
		}

		void InterruptCast()
		{
			using func_t = decltype(&MagicCaster::InterruptCast);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::InterruptCast };
			func(this);
		}

		void FindTargets(float a_arg1, TESBoundObject* a_arg2, bool apSource, float abLoadCast, bool a_arg5)
		{
			using func_t = void (MagicCaster::*)(float, TESBoundObject*, bool, float, bool);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::FindTargets };
			func(this, a_arg1, a_arg2, apSource, abLoadCast, a_arg5);
		}

		void FindTargets(MagicItem* apSpell, TESObjectCELL* aLocation, NiPoint3 apProjectile, MagicProjectile* apCollidee, TESObjectREFR* abLoadCast, bool afPowerScale, float afAreaScale, float a_arg8)
		{
			using func_t = void (MagicCaster::*)(MagicItem*, TESObjectCELL*, NiPoint3, MagicProjectile*, TESObjectREFR*, bool, float, float);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::FindTargets_1 };
			func(this, apSpell, aLocation, apProjectile, apCollidee, abLoadCast, afPowerScale, afAreaScale, a_arg8);
		}

		bool CheckWillKill(MagicTarget* apTarget, MagicItem* apSpell)
		{
			using func_t = decltype(&MagicCaster::CheckWillKill);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::CheckWillKill };
			return func(this, apTarget, apSpell);
		}

		void DoExplosion(NiPoint3 aSourceLoc, TESObjectCELL* apCell, MagicItem* apSpell, EffectItem* apDominantEffect, BSSimpleList<MobileObject*>* aTargetList, float afPowerScale, float afAreaScale)
		{
			using func_t = decltype(&MagicCaster::DoExplosion);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::DoExplosion };
			func(this, aSourceLoc, apCell, apSpell, apDominantEffect, aTargetList, afPowerScale, afAreaScale);
		}

		void ExplodeRigidBody(hkpRigidBody* apRigidBody, NiPoint3 apDominantEffect, EffectItem* a_arg3, float afSpellCost)
		{
			using func_t = decltype(&MagicCaster::ExplodeRigidBody);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::ExplodeRigidBody };
			func(this, apRigidBody, apDominantEffect, a_arg3, afSpellCost);
		}

		void ExplodeActor(Actor* apTargetActor, NiPoint3 apDominantEffect, EffectItem* a_arg3, float afSpellCost)
		{
			using func_t = decltype(&MagicCaster::ExplodeActor);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::ExplodeActor };
			func(this, apTargetActor, apDominantEffect, a_arg3, afSpellCost);
		}

		void UpdateLight(float afDelta)
		{
			using func_t = decltype(&MagicCaster::UpdateLight);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::UpdateLight };
			func(this, afDelta);
		}

		std::uint32_t GetMagicCasterFormID()
		{
			using func_t = decltype(&MagicCaster::GetMagicCasterFormID);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::GetMagicCasterFormID };
			return func(this);
		}

		static MagicCaster* GetMagicCasterByNumericID(std::uint32_t aiFormID)
		{
			using func_t = decltype(&MagicCaster::GetMagicCasterByNumericID);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::GetMagicCasterByNumericID };
			return func(aiFormID);
		}

	protected:
		void FireProjectile()
		{
			using func_t = decltype(&MagicCaster::FireProjectile);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::FireProjectile };
			func(this);
		}

	private:
		void FindTargetsInArea(MagicItem* apSpell, ActiveEffect* apActiveEffect, TESObjectCELL* apCell, NiPoint3 apTarget, MagicTarget* apProjectile, MagicProjectile* aTargetList, BSSimpleList<MobileObject*>* afAreaScale, bool& a_arg8, float a_arg9)
		{
			using func_t = decltype(&MagicCaster::FindTargetsInArea);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::FindTargetsInArea };
			func(this, apSpell, apActiveEffect, apCell, apTarget, apProjectile, aTargetList, afAreaScale, a_arg8, a_arg9);
		}

		bool AddTarget(MagicTarget* apTarget, NiPoint3 aSourceLoc, MagicItem* apSpell, ActiveEffect* apActiveEffect, bool abAreaTarget)
		{
			using func_t = decltype(&MagicCaster::AddTarget);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::AddTarget };
			return func(this, apTarget, aSourceLoc, apSpell, apActiveEffect, abAreaTarget);
		}

		void SetState(MagicCaster::State aeState, char* acMessage)
		{
			using func_t = decltype(&MagicCaster::SetState);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::SetState };
			func(this, aeState, acMessage);
		}

		void FindExplosionLOS(MagicItem* apSpell, MagicSystem_Range aeRange, NiPoint3 apActorList, BSSimpleList<MobileObject*>* a_arg4)
		{
			using func_t = decltype(&MagicCaster::FindExplosionLOS);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::FindExplosionLOS };
			func(this, apSpell, aeRange, apActorList, a_arg4);
		}

		bool RunExplosionLOSPick(NiPoint3 apTarget, Actor* a_arg2)
		{
			using func_t = decltype(&MagicCaster::RunExplosionLOSPick);
			static REL::Relocation<func_t> func{ Offsets::MagicCaster::RunExplosionLOSPick };
			return func(this, apTarget, a_arg2);
		}

	public:
		// members
		MagicLight*        pLight;  // 04
		MagicCaster::State eState;  // 08
	};
}
