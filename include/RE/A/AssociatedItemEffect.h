#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class TESForm;

	class AssociatedItemEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AssociatedItemEffect };
		static constexpr auto VTABLE{ VTABLE::AssociatedItemEffect };

		// override (ActiveEffect)
		virtual ~AssociatedItemEffect() = default;                    // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;   // 04
		virtual void SaveGame(Actor* apActor) override;               // 06
		virtual void LoadGame(Actor* apActor) override;               // 08
		virtual void InitLoadGame(Actor* apActor) override;           // 0A
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11

		AssociatedItemEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = AssociatedItemEffect*(__thiscall*)(AssociatedItemEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::AssociatedItemEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

	public:
		// members
		TESForm* pAssociatedItem;  // 48
	};
	static_assert(sizeof(AssociatedItemEffect) == 0x4C);
}
