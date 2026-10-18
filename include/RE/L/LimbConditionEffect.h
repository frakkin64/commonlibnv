#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class LimbConditionEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LimbConditionEffect };
		static constexpr auto VTABLE{ VTABLE::LimbConditionEffect };

		// override (ValueModifierEffect)
		virtual ~LimbConditionEffect() = default;                                                       // 00
		virtual ActiveEffect* Copy() override;                                                          // 01
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;                                     // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                            // 05
		virtual void SaveGame(Actor* apActor) override;                                                 // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                            // 07
		virtual void LoadGame(Actor* apActor) override;                                                 // 08
		virtual void CopyData(ActiveEffect* apDestination) override;                                    // 11
		virtual void ModifyActorValue(Actor* apActor, float a_arg2, ActorValue_Index a_arg3) override;  // 19

		// members
		ActorValue_Index eTargetBodyPart;  // 4C
	};
	static_assert(sizeof(LimbConditionEffect) == 0x50);
}
