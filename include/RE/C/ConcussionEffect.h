#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class MagicCaster;
	class MagicTarget;

	class ConcussionEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ConcussionEffect };
		static constexpr auto VTABLE{ VTABLE::ConcussionEffect };

		// override (ActiveEffect)
		virtual ~ConcussionEffect() = default;                            // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

	protected:
		void CheckApplyConcussion(Actor* apTarget)
		{
			using func_t = decltype(&ConcussionEffect::CheckApplyConcussion);
			static REL::Relocation<func_t> func{ Offsets::ConcussionEffect::CheckApplyConcussion };
			func(this, apTarget);
		}

	public:
		// members
		float fTimer;  // 48
	};
	static_assert(sizeof(ConcussionEffect) == 0x4C);
}
