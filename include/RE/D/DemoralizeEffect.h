#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class MagicCaster;
	class MagicTarget;

	class DemoralizeEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DemoralizeEffect };
		static constexpr auto VTABLE{ VTABLE::DemoralizeEffect };

		// override (ActiveEffect)
		virtual ~DemoralizeEffect() = default;                            // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;       // 04
		virtual void SaveGame(Actor* apActor) override;                   // 06
		virtual void LoadGame(Actor* apActor) override;                   // 08
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		// members
		bool         bTurned;     // 48
		std::uint8_t pad49[0x3];  // 49
	};
	static_assert(sizeof(DemoralizeEffect) == 0x4C);
}
