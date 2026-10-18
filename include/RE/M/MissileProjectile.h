#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MATERIAL_TYPE.h"
#include "RE/P/Projectile.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class NiPoint3;
	class TESObjectREFR;
	class hkpCollidable;

	class MissileProjectile :
		public Projectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MissileProjectile };
		static constexpr auto VTABLE{ VTABLE::MissileProjectile };

		enum class ImpactResult : std::int32_t
		{
			kIR_NONE = 0x0,
			kIR_DESTROY = 0x1,
			kIR_BOUNCE = 0x2,
			kIR_IMPALE = 0x3,
			kIR_STICK = 0x4,
		};

		// override (Projectile)
		virtual ~MissileProjectile() = default;                                                                                                                                                                                  // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                                                                                     // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                     // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                 // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                                       // 1C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                                                                               // 21
		virtual Projectile::PROJECTILE_TYPE GetProjectileType() override;                                                                                                                                                        // C1
		virtual void Initialize() override;                                                                                                                                                                                      // C2
		virtual void Process3D() override;                                                                                                                                                                                       // C3
		virtual void UpdateProjectile(float a_arg1) override;                                                                                                                                                                    // C4
		virtual bool ProcessImpacts() override;                                                                                                                                                                                  // C5
		virtual bool IsPermanent() override;                                                                                                                                                                                     // C9
		virtual bool AddImpact(TESObjectREFR* apCollidee, NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, hkpCollidable const* apTargetCollidable, std::uint32_t aiKey, MATERIAL_TYPE aeForceMaterial) override;  // CB

		bool ProcessBounce()
		{
			using func_t = decltype(&MissileProjectile::ProcessBounce);
			static REL::Relocation<func_t> func{ Offsets::MissileProjectile::ProcessBounce };
			return func(this);
		}

		void ProcessImpale()
		{
			using func_t = decltype(&MissileProjectile::ProcessImpale);
			static REL::Relocation<func_t> func{ Offsets::MissileProjectile::ProcessImpale };
			func(this);
		}

		void ProcessStick()
		{
			using func_t = decltype(&MissileProjectile::ProcessStick);
			static REL::Relocation<func_t> func{ Offsets::MissileProjectile::ProcessStick };
			func(this);
		}

	public:
		// members
		MissileProjectile::ImpactResult eImpactResult;           // 150
		bool                            bWaitingToInitialize3D;  // 154
		std::uint8_t                    pad155[0x3];             // 155
		float                           fStickTime;              // 158
		float                           fLocalRot;               // 15C
	};
}
