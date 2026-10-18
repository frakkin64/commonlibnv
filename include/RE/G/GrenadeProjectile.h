#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MATERIAL_TYPE.h"
#include "RE/P/Projectile.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiPoint3;
	class TESObjectREFR;
	class hkpCollidable;

	class GrenadeProjectile :
		public Projectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::GrenadeProjectile };
		static constexpr auto VTABLE{ VTABLE::GrenadeProjectile };

		// override (Projectile)
		virtual ~GrenadeProjectile() = default;                                                                                                                                                                                  // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                     // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                     // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                 // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                       // 1C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                               // 21
		virtual Projectile::PROJECTILE_TYPE GetProjectileType() override;                                                                                                                                                        // C1
		virtual void Initialize() override;                                                                                                                                                                                      // C2
		virtual void Process3D() override;                                                                                                                                                                                       // C3
		virtual void UpdateProjectile(float a_arg1) override;                                                                                                                                                                    // C4
		virtual bool IsMine() override;                                                                                                                                                                                          // C6
		virtual bool TurnOff(Actor* apActionActor, bool abSilent) override;                                                                                                                                                      // C8
		virtual bool IsPermanent() override;                                                                                                                                                                                     // C9
		virtual bool AddImpact(TESObjectREFR* apCollidee, NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, hkpCollidable const* apTargetCollidable, std::uint32_t aiKey, MATERIAL_TYPE aeForceMaterial) override;  // CB

		// members
		bool         bCollisionGroupReset;  // 150
		std::uint8_t pad151[0x3];           // 151
	};
}
