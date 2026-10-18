#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class TESObjectREFR;
	class bhkMouseSpringAction;

	class TelekinesisEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TelekinesisEffect };
		static constexpr auto VTABLE{ VTABLE::TelekinesisEffect };

		// override (ValueModifierEffect)
		virtual ~TelekinesisEffect() = default;                           // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;       // 04
		virtual void SaveGame(Actor* apActor) override;                   // 06
		virtual void LoadGame(Actor* apActor) override;                   // 08
		virtual void FinishInitLoadGame(Actor* apActor) override;         // 0B
		virtual void Revert(Actor* apActor) override;                     // 0D
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual void CopyData(ActiveEffect* apDestination) override;      // 11
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		TelekinesisEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = TelekinesisEffect*(__thiscall*)(TelekinesisEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::TelekinesisEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

	protected:
		void CreateSpring()
		{
			using func_t = decltype(&TelekinesisEffect::CreateSpring);
			static REL::Relocation<func_t> func{ Offsets::TelekinesisEffect::CreateSpring };
			func(this);
		}

		void RemoveSpring()
		{
			using func_t = decltype(&TelekinesisEffect::RemoveSpring);
			static REL::Relocation<func_t> func{ Offsets::TelekinesisEffect::RemoveSpring };
			func(this);
		}

	public:
		// members
		NiPointer<bhkMouseSpringAction> spSpring;       // 4C
		float                           fHoldDistance;  // 50
		float                           fMoveVelocity;  // 54
		TESObjectREFR*                  pRef;           // 58
		bool                            bThrow;         // 5C
		bool                            bFirstUpdate;   // 5D
		std::uint16_t                   pad5E;          // 5E
	};
	static_assert(sizeof(TelekinesisEffect) == 0x60);
}
