#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MATERIAL_TYPE.h"
#include "RE/P/Projectile.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class NiPoint3;
	class TESObjectREFR;
	class hkpCollidable;

	class FlameProjectile :
		public Projectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FlameProjectile };
		static constexpr auto VTABLE{ VTABLE::FlameProjectile };

		// override (Projectile)
		virtual ~FlameProjectile() = default;                                                                                                                                                                                    // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                     // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                     // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                 // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                       // 1C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                               // 21
		virtual Projectile::PROJECTILE_TYPE GetProjectileType() override;                                                                                                                                                        // C1
		virtual void Initialize() override;                                                                                                                                                                                      // C2
		virtual void Process3D() override;                                                                                                                                                                                       // C3
		virtual void UpdateProjectile(float a_arg1) override;                                                                                                                                                                    // C4
		virtual bool RunTargetPick() override;                                                                                                                                                                                   // CA
		virtual bool AddImpact(TESObjectREFR* apCollidee, NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, hkpCollidable const* apTargetCollidable, std::uint32_t aiKey, MATERIAL_TYPE aeForceMaterial) override;  // CB

		static float FindFlameConeAngle(NiAVObject* apObject)
		{
			using func_t = decltype(&FlameProjectile::FindFlameConeAngle);
			static REL::Relocation<func_t> func{ Offsets::FlameProjectile::FindFlameConeAngle };
			return func(apObject);
		}

	public:
		// members
		float fExpirationTimer;  // 150
		float fConeAngle;        // 154
	};
}
