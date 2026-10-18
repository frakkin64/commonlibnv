#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/M/MagicSystem_SpellType.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class EffectItem;
	class EffectSetting;
	class MagicCaster;
	class MagicHitEffect;
	class MagicItem;
	class MagicTarget;
	class TESBoundObject;

	class __declspec(novtable) ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ActiveEffect };
		static constexpr auto VTABLE{ VTABLE::ActiveEffect };

		enum class ActiveEffectFlags : std::int32_t
		{
			kNO_HITEFFECT_FORCED = 0x1,
			kNO_HITEFFECT_SHADER = 0x2,
			kNO_HITEFFECT_NIF = 0x4,
			kNO_SOUND = 0x8,
			kNO_INTIAL_FLARE = 0x10,
			kDEFERRED_SOUND = 0x20,
			kDEFERRED_HITEFFECT = 0x40,
			kHAS_CONDITIONS = 0x80,
			kFROM_WORN_ENCHANTMENT = 0x100,
			kWAS_DISPELED = 0x200,
			kEFFECT_DEAD = -2147483648,
		};

		// add
		virtual ~ActiveEffect() = default;                                 // 00
		virtual ActiveEffect* Copy();                                      // 01
		virtual void Finalize();                                           // 02
		virtual void Update(float afSecondsElapsed);                       // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor);                 // 04
		virtual void SaveGame(Actor* apActor);                             // 06 (reversed overload group)
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer);        // 05 (reversed overload group)
		virtual void LoadGame(Actor* apActor);                             // 08 (reversed overload group)
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer);        // 07 (reversed overload group)
		virtual void InitLoadGame(Actor* apActor);                         // 0A (reversed overload group)
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);    // 09 (reversed overload group)
		virtual void FinishInitLoadGame(Actor* apActor);                   // 0B
		virtual void Revert(Actor* apActor);                               // 0D (reversed overload group)
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer);          // 0C (reversed overload group)
		virtual bool CheckDeletedCaster(MagicCaster* apCaster);            // 0E
		virtual bool IsCausingDamage();                                    // 0F
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);  // 10
		virtual void CopyData(ActiveEffect* apDestination);                // 11
		virtual bool CheckCast(MagicCaster* apCaster);                     // 12
		virtual bool CheckTarget(MagicTarget* apTarget);                   // 13
		virtual void Start();                                              // 14
		virtual void Continue();                                           // 15
		virtual void Finish();                                             // 16

		MagicCaster* GetCaster()
		{
			using func_t = decltype(&ActiveEffect::GetCaster);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::GetCaster };
			return func(this);
		}

		float GetMagnitude()
		{
			using func_t = decltype(&ActiveEffect::GetMagnitude);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::GetMagnitude };
			return func(this);
		}

		MagicTarget* GetTarget()
		{
			using func_t = decltype(&ActiveEffect::GetTarget);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::GetTarget };
			return func(this);
		}

		bool IsFinished()
		{
			using func_t = decltype(&ActiveEffect::IsFinished);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::IsFinished };
			return func(this);
		}

		EffectSetting* GetEffectSetting()
		{
			using func_t = decltype(&ActiveEffect::GetEffectSetting);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::GetEffectSetting };
			return func(this);
		}

		bool HasConditions()
		{
			using func_t = decltype(&ActiveEffect::HasConditions);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::HasConditions };
			return func(this);
		}

		ActiveEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = ActiveEffect*(__thiscall*)(ActiveEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

		void SetFlag(ActiveEffect::ActiveEffectFlags aiFlag)
		{
			using func_t = decltype(&ActiveEffect::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SetFlag };
			func(this, aiFlag);
		}

		void SetEnchantmentSource(TESBoundObject* apSource)
		{
			using func_t = decltype(&ActiveEffect::SetEnchantmentSource);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SetEnchantmentSource };
			func(this, apSource);
		}

		void Dispel(bool abNow)
		{
			using func_t = decltype(&ActiveEffect::Dispel);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::Dispel };
			func(this, abNow);
		}

		bool CheckDisplacementSpellOnTarget()
		{
			using func_t = decltype(&ActiveEffect::CheckDisplacementSpellOnTarget);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::CheckDisplacementSpellOnTarget };
			return func(this);
		}

		void EvaluateConditions(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&ActiveEffect::EvaluateConditions);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::EvaluateConditions };
			func(this, a_arg1, a_arg2);
		}

		bool FromWornEnchantment()
		{
			using func_t = decltype(&ActiveEffect::FromWornEnchantment);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::FromWornEnchantment };
			return func(this);
		}

		bool IsFlagSet(ActiveEffect::ActiveEffectFlags aiFlag)
		{
			using func_t = decltype(&ActiveEffect::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::IsFlagSet };
			return func(this, aiFlag);
		}

		void AdjustEffectiveness(float afMultiplier)
		{
			using func_t = decltype(&ActiveEffect::AdjustEffectiveness);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::AdjustEffectiveness };
			func(this, afMultiplier);
		}

		void SetMagnitude(float afMagnitude)
		{
			using func_t = decltype(&ActiveEffect::SetMagnitude);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SetMagnitude };
			func(this, afMagnitude);
		}

		void ForceNoHitEffect()
		{
			using func_t = decltype(&ActiveEffect::ForceNoHitEffect);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::ForceNoHitEffect };
			func(this);
		}

		static void SaveActiveEffect(ActiveEffect* apEffect, Actor* apActor)
		{
			using func_t = void(__cdecl*)(ActiveEffect*, Actor*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SaveActiveEffect };
			func(apEffect, apActor);
		}

		static ActiveEffect* LoadActiveEffect(Actor* apActor)
		{
			using func_t = ActiveEffect*(__cdecl*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::LoadActiveEffect };
			return func(apActor);
		}

		static std::uint16_t GetActiveEffectListSaveSize(BSSimpleList<ActiveEffect*>* apActiveEffectList, Actor* apActor)
		{
			using func_t = decltype(&ActiveEffect::GetActiveEffectListSaveSize);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::GetActiveEffectListSaveSize };
			return func(apActiveEffectList, apActor);
		}

		static void SaveActiveEffectList(BSSimpleList<ActiveEffect*>* apActiveEffectList, Actor* apActor)
		{
			using func_t = void(__cdecl*)(BSSimpleList<ActiveEffect*>*, Actor*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SaveActiveEffectList };
			func(apActiveEffectList, apActor);
		}

		static void LoadActiveEffectList(BSSimpleList<ActiveEffect*>* apActiveEffectList, Actor* apActor)
		{
			using func_t = void(__cdecl*)(BSSimpleList<ActiveEffect*>*, Actor*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::LoadActiveEffectList };
			func(apActiveEffectList, apActor);
		}

		static void SaveActiveEffect(BGSSaveFormBuffer* apSaveGameBuffer, ActiveEffect* apEffect)
		{
			using func_t = void(__cdecl*)(BGSSaveFormBuffer*, ActiveEffect*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SaveActiveEffect_1 };
			func(apSaveGameBuffer, apEffect);
		}

		static ActiveEffect* LoadActiveEffect(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = ActiveEffect*(__cdecl*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::LoadActiveEffect_1 };
			return func(apLoadGameBuffer);
		}

		static void SaveActiveEffectList(BGSSaveFormBuffer* apSaveGameBuffer, BSSimpleList<ActiveEffect*>* apActiveEffectList)
		{
			using func_t = void(__cdecl*)(BGSSaveFormBuffer*, BSSimpleList<ActiveEffect*>*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::SaveActiveEffectList_1 };
			func(apSaveGameBuffer, apActiveEffectList);
		}

		static void LoadActiveEffectList(BGSLoadFormBuffer* apLoadGameBuffer, BSSimpleList<ActiveEffect*>* apActiveEffectList)
		{
			using func_t = void(__cdecl*)(BGSLoadFormBuffer*, BSSimpleList<ActiveEffect*>*);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::LoadActiveEffectList_1 };
			func(apLoadGameBuffer, apActiveEffectList);
		}

		bool IsActive()
		{
			using func_t = decltype(&ActiveEffect::IsActive);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::IsActive };
			return func(this);
		}

	protected:
		void UpdateEffect(float afSecondsElapsed)
		{
			using func_t = decltype(&ActiveEffect::UpdateEffect);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::UpdateEffect };
			func(this, afSecondsElapsed);
		}

		void StartSound()
		{
			using func_t = decltype(&ActiveEffect::StartSound);
			static REL::Relocation<func_t> func{ Offsets::ActiveEffect::StartSound };
			func(this);
		}

	public:
		// members
		float                          fElapsedSeconds;     // 04
		MagicItem*                     pSpell;              // 08
		EffectItem*                    pEffect;             // 0C
		bool                           bActive;             // 10
		bool                           bStarted;            // 11
		bool                           bFinished;           // 12
		bool                           bDone;               // 13
		bool                           bWornEnchantment;    // 14
		std::uint8_t                   pad15[0x3];          // 15
		std::int32_t                   iFlags;              // 18
		float                          fMagnitude;          // 1C
		float                          fDuration;           // 20
		MagicTarget*                   pTarget;             // 24
		MagicCaster*                   pCaster;             // 28
		MagicSystem_SpellType          eSpellType;          // 2C
		BSSoundHandle                  PersistentSound;     // 30
		TESBoundObject*                pSource;             // 3C
		BSSimpleList<MagicHitEffect*>* pHitEffects;         // 40
		MagicItem*                     pDisplacementSpell;  // 44
	};
	static_assert(sizeof(ActiveEffect) == 0x48);
}
