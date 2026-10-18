#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class BoltShaderProperty;
	class MagicCaster;
	class NiAVObject;
	class NiNode;

	class AbsorbEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AbsorbEffect };
		static constexpr auto VTABLE{ VTABLE::AbsorbEffect };

		// override (ValueModifierEffect)
		virtual ~AbsorbEffect() = default;                                // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual void FinishInitLoadGame(Actor* apActor) override;         // 0B
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual void CopyData(ActiveEffect* apDestination) override;      // 11
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		void Start3D()
		{
			using func_t = decltype(&AbsorbEffect::Start3D);
			static REL::Relocation<func_t> func{ Offsets::AbsorbEffect::Start3D };
			func(this);
		}

		void Update3D(float afDelta)
		{
			using func_t = decltype(&AbsorbEffect::Update3D);
			static REL::Relocation<func_t> func{ Offsets::AbsorbEffect::Update3D };
			func(this, afDelta);
		}

	public:
		// members
		NiPointer<NiNode>             spBoltNode;      // 4C
		NiPointer<NiAVObject>         spSource;        // 50
		NiPointer<NiAVObject>         spTarget;        // 54
		NiPointer<BoltShaderProperty> spBoltProperty;  // 58
	};
	static_assert(sizeof(AbsorbEffect) == 0x5C);
}
