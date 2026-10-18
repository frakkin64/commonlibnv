#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MobileObject.h"
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
	class TESBoundObject;
	class TESObjectREFR;
	class bhkRigidBody;

	class MagicProjectile :
		public MobileObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicProjectile };
		static constexpr auto VTABLE{ VTABLE::MagicProjectile };

		// override (MobileObject)
		virtual ~MagicProjectile() = default;                                                 // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;  // 1A
		virtual void Revert(std::uint32_t aiFlags) override;                                  // 1D
		virtual NiAVObject* Load3D(bool abBackgroundLoading) override;                        // 72
		virtual bool IsProjectile() override;                                                 // 89
		virtual void Process(float afDelta) override;                                         // 97
		virtual bool ChangeProcessLevel() override;                                           // 98
		virtual bool IsTransient() override;                                                  // BB
		virtual void SetDisplayGeometry(bool abTF) override;                                  // BC
		virtual void Update(float afDelta) override;                                          // BE

		// add
		virtual void Collide(NiPoint3 aContactPoint, bhkRigidBody* apTargetBody, TESObjectREFR* apCollidee, bool abFizzle);  // C1
		virtual void AddAreaTarget(MagicTarget* apTarget, ActiveEffect* apActiveEffect);                                     // C2
		virtual bool IsActive();                                                                                             // C3
		virtual void BuildAreaEffectGeometry();                                                                              // C4
		virtual bool CheckDeletedCaster(MagicCaster* apCaster);                                                              // C5
		virtual bool CheckAddTarget(MagicTarget* apSpellTarget, ActiveEffect* apEffect);                                     // C6
		virtual bool PostProcess();                                                                                          // C7

		static void AddTrackedProjectile(float afProjectileWeight)
		{
			using func_t = decltype(&MagicProjectile::AddTrackedProjectile);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::AddTrackedProjectile };
			func(afProjectileWeight);
		}

		static void Launch(MagicCaster* apCaster, NiAVObject* apData3D, MagicLight* apLight, MagicItem* apSpell, EffectItem* apDominantEffect, EffectSetting* apAVEffect, NiPoint3 aOrigin, NiPoint3 aRotation)
		{
			using func_t = decltype(&MagicProjectile::Launch);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::Launch };
			func(apCaster, apData3D, apLight, apSpell, apDominantEffect, apAVEffect, aOrigin, aRotation);
		}

		static TESBoundObject* GetDummyObjectReference()
		{
			using func_t = decltype(&MagicProjectile::GetDummyObjectReference);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::GetDummyObjectReference };
			return func();
		}

		static NiAVObject* Clone3D(EffectSetting* apAVEffect)
		{
			using func_t = NiAVObject*(__cdecl*)(EffectSetting*);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::Clone3D };
			return func(apAVEffect);
		}

		static NiAVObject* Clone3D(char const* apFilename)
		{
			using func_t = NiAVObject*(__cdecl*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::Clone3D_1 };
			return func(apFilename);
		}

		void KillAreaEffectGeometry()
		{
			using func_t = decltype(&MagicProjectile::KillAreaEffectGeometry);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::KillAreaEffectGeometry };
			func(this);
		}

		void CheckShotBehindWall()
		{
			using func_t = decltype(&MagicProjectile::CheckShotBehindWall);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::CheckShotBehindWall };
			func(this);
		}

		void ApplyCollisionForce(NiPoint3 aDirection, NiPoint3 apTargetBody, bhkRigidBody* a_arg3)
		{
			using func_t = decltype(&MagicProjectile::ApplyCollisionForce);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::ApplyCollisionForce };
			func(this, aDirection, apTargetBody, a_arg3);
		}

		MagicCaster* GetCaster()
		{
			using func_t = decltype(&MagicProjectile::GetCaster);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::GetCaster };
			return func(this);
		}

	protected:
		MagicProjectile* ctor()
		{
			using func_t = MagicProjectile*(__thiscall*)(MagicProjectile*);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::ctor };
			return func(this);
		}

		MagicProjectile* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apDominantEffect, EffectSetting* aOrigin, NiPoint3 aRotation, NiPoint3 aRotationa)
		{
			using func_t = MagicProjectile*(__thiscall*)(MagicProjectile*, MagicCaster*, MagicItem*, EffectItem*, EffectSetting*, NiPoint3, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::MagicProjectile::ctor_1 };
			return func(this, apCaster, apSpell, apDominantEffect, aOrigin, aRotation, aRotationa);
		}

	public:
		// members
		float          fSpeed;           // 88
		float          fDistanceMoved;   // 8C
		float          fAge;             // 90
		MagicCaster*   pCaster;          // 94
		MagicItem*     pSpell;           // 98
		EffectItem*    pDominantEffect;  // 9C
		EffectSetting* pAVEffect;        // A0
		float          fLastUpdate;      // A4
	};
	static_assert(sizeof(MagicProjectile) == 0xA8);
}
