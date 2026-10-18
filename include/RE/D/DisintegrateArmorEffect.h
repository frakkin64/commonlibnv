#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class ItemChange;
	class MagicTarget;

	class DisintegrateArmorEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DisintegrateArmorEffect };
		static constexpr auto VTABLE{ VTABLE::DisintegrateArmorEffect };

		// override (ActiveEffect)
		virtual ~DisintegrateArmorEffect() = default;                // 00
		virtual ActiveEffect* Copy() override;                       // 01
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;  // 04
		virtual void SaveGame(Actor* apActor) override;              // 06
		virtual void LoadGame(Actor* apActor) override;              // 08
		virtual bool CheckTarget(MagicTarget* apTarget) override;    // 13
		virtual void Start() override;                               // 14

		// members
		ItemChange* pArmor;  // 48
	};
	static_assert(sizeof(DisintegrateArmorEffect) == 0x4C);
}
