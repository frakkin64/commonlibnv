#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MATERIAL_TYPE.h"
#include "RE/P/Projectile.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class NiGeometry;
	class NiPoint3;
	class TESObjectREFR;
	class hkpCollidable;

	class BeamProjectile :
		public Projectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BeamProjectile };
		static constexpr auto VTABLE{ VTABLE::BeamProjectile };

		// override (Projectile)
		virtual ~BeamProjectile() = default;                                                                                                                                                                                     // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                     // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                     // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                 // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                       // 1C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                               // 21
		virtual Projectile::PROJECTILE_TYPE GetProjectileType() override;                                                                                                                                                        // C1
		virtual void Initialize() override;                                                                                                                                                                                      // C2
		virtual void Process3D() override;                                                                                                                                                                                       // C3
		virtual void UpdateProjectile(float a_arg1) override;                                                                                                                                                                    // C4
		virtual bool AddImpact(TESObjectREFR* apCollidee, NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, hkpCollidable const* apTargetCollidable, std::uint32_t aiKey, MATERIAL_TYPE aeForceMaterial) override;  // CB

	protected:
		void ScaleBeamGeometryLength(NiGeometry* apGeometry, float afScaleFactor)
		{
			using func_t = decltype(&BeamProjectile::ScaleBeamGeometryLength);
			static REL::Relocation<func_t> func{ Offsets::BeamProjectile::ScaleBeamGeometryLength };
			func(this, apGeometry, afScaleFactor);
		}

		float FindBeamGeometryLength(NiGeometry* apGeometry)
		{
			using func_t = decltype(&BeamProjectile::FindBeamGeometryLength);
			static REL::Relocation<func_t> func{ Offsets::BeamProjectile::FindBeamGeometryLength };
			return func(this, apGeometry);
		}

		void ScaleBeam3D(NiAVObject* ap3D, float afDesiredLength, float afCurrentLength)
		{
			using func_t = decltype(&BeamProjectile::ScaleBeam3D);
			static REL::Relocation<func_t> func{ Offsets::BeamProjectile::ScaleBeam3D };
			func(this, ap3D, afDesiredLength, afCurrentLength);
		}

	public:
		// members
		// not placed: spBeamProperty
	};
}
