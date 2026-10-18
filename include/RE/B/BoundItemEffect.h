#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AssociatedItemEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class ItemChange;
	class MagicTarget;

	class BoundItemEffect :
		public AssociatedItemEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BoundItemEffect };
		static constexpr auto VTABLE{ VTABLE::BoundItemEffect };

		// override (AssociatedItemEffect)
		virtual ~BoundItemEffect() = default;                        // 00
		virtual ActiveEffect* Copy() override;                       // 01
		virtual void Update(float afSecondsElapsed) override;        // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;  // 04
		virtual void SaveGame(Actor* apActor) override;              // 06
		virtual void LoadGame(Actor* apActor) override;              // 08
		virtual void InitLoadGame(Actor* apActor) override;          // 0A
		virtual bool CheckTarget(MagicTarget* apTarget) override;    // 13
		virtual void Start() override;                               // 14
		virtual void Finish() override;                              // 16

	protected:
		void DoSummon()
		{
			using func_t = decltype(&BoundItemEffect::DoSummon);
			static REL::Relocation<func_t> func{ Offsets::BoundItemEffect::DoSummon };
			func(this);
		}

		static bool FindConflictingBoundItems(Actor* apTarget, ItemChange* apDisplacedItem, BoundItemEffect* apSource)
		{
			using func_t = decltype(&BoundItemEffect::FindConflictingBoundItems);
			static REL::Relocation<func_t> func{ Offsets::BoundItemEffect::FindConflictingBoundItems };
			return func(apTarget, apDisplacedItem, apSource);
		}

	public:
		// members
		ItemChange*  pDisplacedWeapon;     // 4C
		ItemChange*  pDisplacedItems[20];  // 50
		float        fAppearTime;          // A0
		bool         bItemSummoned;        // A4
		bool         bSpellModelCached;    // A5
		bool         bWeaponCached;        // A6
		bool         bWornCached;          // A7
		bool         bSetupItem;           // A8
		std::uint8_t padA9[0x3];           // A9
	};
	static_assert(sizeof(BoundItemEffect) == 0xAC);
}
