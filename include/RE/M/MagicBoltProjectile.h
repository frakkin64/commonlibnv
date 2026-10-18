#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/M/MagicProjectile.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ActiveEffect;
	class BoltShaderProperty;
	class EffectItem;
	class EffectSetting;
	class MagicCaster;
	class MagicItem;
	class MagicTarget;
	class NiAVObject;
	class NiNode;
	class TESObjectREFR;
	class bhkRigidBody;

	class MagicBoltProjectile :
		public MagicProjectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicBoltProjectile };
		static constexpr auto VTABLE{ VTABLE::MagicBoltProjectile };

		class AreaBolt;

		enum class State : std::int32_t
		{
			kTRUNK = 0x0,
			kBRANCH = 0x1,
			kPERSIST = 0x2,
		};

		class AreaBolt
		{
		public:
			// members
			NiPointer<BoltShaderProperty>  spBoltProperty;  // 00?
			NiPointer<NiNode>              spBoltNode;      // 04?
			NiPoint3                       SourceLoc;       // 08?
			NiPointer<NiAVObject>          spSource;        // 14?
			NiPointer<NiAVObject>          spTarget;        // 18?
			MagicBoltProjectile::AreaBolt* pNext;           // 1C?
		};

		// override (MagicProjectile)
		virtual ~MagicBoltProjectile() = default;                                                                                     // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                            // 14
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                        // 16
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                          // 18
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                          // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                    // 1B
		virtual void InitHavok() override;                                                                                            // 71
		virtual void Update(float afDelta) override;                                                                                  // BE
		virtual void Collide(NiPoint3 aContactPoint, bhkRigidBody* apTargetBody, TESObjectREFR* apCollidee, bool abFizzle) override;  // C1
		virtual void AddAreaTarget(MagicTarget* apTarget, ActiveEffect* apActiveEffect) override;                                     // C2
		virtual bool PostProcess() override;                                                                                          // C7

		MagicBoltProjectile* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apDominantEffect, EffectSetting* apAVEffect, NiPoint3 aOrigin, NiPoint3 aRotation)
		{
			using func_t = MagicBoltProjectile*(__thiscall*)(MagicBoltProjectile*, MagicCaster*, MagicItem*, EffectItem*, EffectSetting*, NiPoint3, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::MagicBoltProjectile::ctor };
			return func(this, apCaster, apSpell, apDominantEffect, apAVEffect, aOrigin, aRotation);
		}

		void Init3D()
		{
			using func_t = decltype(&MagicBoltProjectile::Init3D);
			static REL::Relocation<func_t> func{ Offsets::MagicBoltProjectile::Init3D };
			func(this);
		}

		void UpdateBranch(float a_arg1, MagicBoltProjectile::AreaBolt* a_arg2)
		{
			using func_t = decltype(&MagicBoltProjectile::UpdateBranch);
			static REL::Relocation<func_t> func{ Offsets::MagicBoltProjectile::UpdateBranch };
			func(this, a_arg1, a_arg2);
		}

	private:
		void SetState(MagicBoltProjectile::State aeNewState)
		{
			using func_t = decltype(&MagicBoltProjectile::SetState);
			static REL::Relocation<func_t> func{ Offsets::MagicBoltProjectile::SetState };
			func(this, aeNewState);
		}

	public:
		// members
		NiPointer<BoltShaderProperty>  spBoltProperty;  // A8
		MagicBoltProjectile::State     eState;          // AC
		MagicBoltProjectile::AreaBolt* pAreaBolts;      // B0
		NiPointer<NiNode>              spBoltNode;      // B4
		NiPointer<NiAVObject>          spSource;        // B8
		NiPointer<NiAVObject>          spTarget;        // BC
		NiPointer<NiNode>              spSoundNode;     // C0
		TESObjectREFR*                 pTarget;         // C4
		BSSoundHandle                  Sound;           // C8
		float                          fCollideTime;    // D4
	};
	static_assert(sizeof(MagicBoltProjectile) == 0xD8);
}
