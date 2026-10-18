#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiQuaternion.h"

namespace RE
{
	class Actor;
	class MagicCaster;
	class MagicTarget;
	class bhkRigidBody;

	class ReanimateEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ReanimateEffect };
		static constexpr auto VTABLE{ VTABLE::ReanimateEffect };

		// override (ActiveEffect)
		virtual ~ReanimateEffect() = default;                             // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;       // 04
		virtual void SaveGame(Actor* apActor) override;                   // 06
		virtual void LoadGame(Actor* apActor) override;                   // 08
		virtual void FinishInitLoadGame(Actor* apActor) override;         // 0B
		virtual void Revert(Actor* apActor) override;                     // 0D
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		// members
		bhkRigidBody* pBody;      // 48
		std::int32_t  iState;     // 4C
		float         fSaveTime;  // 50
		NiPoint3      StartPos;   // 54
		NiQuaternion  StartRot;   // 60
	};
	static_assert(sizeof(ReanimateEffect) == 0x70);
}
