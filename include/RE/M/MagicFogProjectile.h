#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/M/MagicProjectile.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class ActiveEffect;
	class EffectItem;
	class EffectSetting;
	class MagicCaster;
	class MagicItem;
	class MagicLight;
	class MagicTarget;
	class NiAVObject;
	class TESObjectREFR;
	class bhkRigidBody;

	class MagicFogProjectile :
		public MagicProjectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicFogProjectile };
		static constexpr auto VTABLE{ VTABLE::MagicFogProjectile };

		class SpellTarget;

		enum class State : std::int32_t
		{
			kFOG_STATE_SHOOTING = 0x0,
			kFOG_STATE_PERSISTANT = 0x1,
		};

		class SpellTarget
		{
		public:
			// members
			TESObjectREFR*                   pTarget;  // 00?
			EffectItem*                      pEffect;  // 04?
			MagicFogProjectile::SpellTarget* pNext;    // 08?
		};

		// override (MagicProjectile)
		virtual ~MagicFogProjectile() = default;                                                                                      // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                            // 14
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                        // 16
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                          // 18
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                          // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                    // 1B
		virtual void InitHavok() override;                                                                                            // 71
		virtual float GetAcrobatics() override;                                                                                       // B9
		virtual void Update(float afDelta) override;                                                                                  // BE
		virtual void Collide(NiPoint3 aContactPoint, bhkRigidBody* apTargetBody, TESObjectREFR* apCollidee, bool abFizzle) override;  // C1
		virtual bool IsActive() override;                                                                                             // C3
		virtual void BuildAreaEffectGeometry() override;                                                                              // C4
		virtual bool CheckAddTarget(MagicTarget* apSpellTarget, ActiveEffect* apEffect) override;                                     // C6

		MagicFogProjectile* ctor()
		{
			using func_t = MagicFogProjectile*(__thiscall*)(MagicFogProjectile*);
			static REL::Relocation<func_t> func{ Offsets::MagicFogProjectile::ctor };
			return func(this);
		}

		MagicFogProjectile* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apDominantEffect, EffectSetting* apAVEffect, NiPoint3 aOrigin, NiPoint3 aRotation, NiAVObject* apData3D, MagicLight* apLight)
		{
			using func_t = MagicFogProjectile*(__thiscall*)(MagicFogProjectile*, MagicCaster*, MagicItem*, EffectItem*, EffectSetting*, NiPoint3, NiPoint3, NiAVObject*, MagicLight*);
			static REL::Relocation<func_t> func{ Offsets::MagicFogProjectile::ctor_1 };
			return func(this, apCaster, apSpell, apDominantEffect, apAVEffect, aOrigin, aRotation, apData3D, apLight);
		}

		void AdjustParticles(NiAVObject* apav)
		{
			using func_t = decltype(&MagicFogProjectile::AdjustParticles);
			static REL::Relocation<func_t> func{ Offsets::MagicFogProjectile::AdjustParticles };
			func(this, apav);
		}

		void Init3D()
		{
			using func_t = decltype(&MagicFogProjectile::Init3D);
			static REL::Relocation<func_t> func{ Offsets::MagicFogProjectile::Init3D };
			func(this);
		}

	private:
		void ClearTargetList()
		{
			using func_t = decltype(&MagicFogProjectile::ClearTargetList);
			static REL::Relocation<func_t> func{ Offsets::MagicFogProjectile::ClearTargetList };
			func(this);
		}

	public:
		// members
		float                            fAge;                 // A8
		float                            fProjectileDuration;  // AC
		float                            fProjectileArea;      // B0
		MagicFogProjectile::State        eState;               // B4
		float                            fScale;               // B8
		BSSoundHandle                    Sound;                // BC
		MagicFogProjectile::SpellTarget* pTargetList;          // C8
		MagicLight*                      pLight;               // CC
	};
	static_assert(sizeof(MagicFogProjectile) == 0xD0);
}
