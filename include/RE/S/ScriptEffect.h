#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class Script;
	class ScriptLocals;

	class ScriptEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ScriptEffect };
		static constexpr auto VTABLE{ VTABLE::ScriptEffect };

		// override (ActiveEffect)
		virtual ~ScriptEffect() = default;                                    // 00
		virtual ActiveEffect* Copy() override;                                // 01
		virtual void Update(float afSecondsElapsed) override;                 // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;           // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;  // 05
		virtual void SaveGame(Actor* apActor) override;                       // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 07
		virtual void LoadGame(Actor* apActor) override;                       // 08
		virtual void Revert(Actor* apActor) override;                         // 0D
		virtual void CopyData(ActiveEffect* apDestination) override;          // 11
		virtual void Start() override;                                        // 14
		virtual void Finish() override;                                       // 16

		ScriptEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = ScriptEffect*(__thiscall*)(ScriptEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::ScriptEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

	public:
		// members
		Script*       pScript;        // 48
		ScriptLocals* pEffectLocals;  // 4C
	};
	static_assert(sizeof(ScriptEffect) == 0x50);
}
