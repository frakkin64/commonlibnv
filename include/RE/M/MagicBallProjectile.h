#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/M/MagicProjectile.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class EffectItem;
	class EffectSetting;
	class MagicCaster;
	class MagicItem;
	class MagicLight;
	class NiAVObject;
	class TESObjectREFR;
	class bhkRigidBody;

	class MagicBallProjectile :
		public MagicProjectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicBallProjectile };
		static constexpr auto VTABLE{ VTABLE::MagicBallProjectile };

		enum class State : std::int32_t
		{
			kBALL_STATE_CREATION = 0x0,
			kBALL_STATE_FLYING = 0x1,
			kBALL_STATE_EXPLODING = 0x2,
		};

		// override (MagicProjectile)
		virtual ~MagicBallProjectile() = default;                                                                                     // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                            // 14
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                        // 16
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                          // 18
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                          // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;                                    // 1B
		virtual void InitHavok() override;                                                                                            // 71
		virtual void Update(float afDelta) override;                                                                                  // BE
		virtual void Collide(NiPoint3 aContactPoint, bhkRigidBody* apTargetBody, TESObjectREFR* apCollidee, bool abFizzle) override;  // C1
		virtual bool IsActive() override;                                                                                             // C3
		virtual void BuildAreaEffectGeometry() override;                                                                              // C4

		MagicBallProjectile* ctor()
		{
			using func_t = MagicBallProjectile*(__thiscall*)(MagicBallProjectile*);
			static REL::Relocation<func_t> func{ Offsets::MagicBallProjectile::ctor };
			return func(this);
		}

		MagicBallProjectile* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apDominantEffect, EffectSetting* apAVEffect, NiPoint3 aOrigin, NiPoint3 aRotation, NiAVObject* apData3D, MagicLight* apLight)
		{
			using func_t = MagicBallProjectile*(__thiscall*)(MagicBallProjectile*, MagicCaster*, MagicItem*, EffectItem*, EffectSetting*, NiPoint3, NiPoint3, NiAVObject*, MagicLight*);
			static REL::Relocation<func_t> func{ Offsets::MagicBallProjectile::ctor_1 };
			return func(this, apCaster, apSpell, apDominantEffect, apAVEffect, aOrigin, aRotation, apData3D, apLight);
		}

		void Init3D()
		{
			using func_t = decltype(&MagicBallProjectile::Init3D);
			static REL::Relocation<func_t> func{ Offsets::MagicBallProjectile::Init3D };
			func(this);
		}

	public:
		// members
		float                      fExplodingAge;  // A8
		MagicBallProjectile::State eState;         // AC
		float                      fScale;         // B0
		BSSoundHandle              Sound;          // B4
		MagicLight*                pLight;         // C0
	};
	static_assert(sizeof(MagicBallProjectile) == 0xC4);
}
