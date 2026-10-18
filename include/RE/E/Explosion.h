#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/M/MobileObject.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class ActorCause;
	class BGSExplosion;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class MagicCaster;
	class NiLight;
	class NonActorMagicCaster;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESObjectWEAP;
	class bhkRigidBody;
	class bhkSimpleShapePhantom;

	class Explosion :
		public MobileObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Explosion };
		static constexpr auto VTABLE{ VTABLE::Explosion };

		class ExplodedLimb;
		class ExplosionTarget;

		class ExplodedLimb
		{
		public:
			// members
			BGSBodyPart_LIMB_ENUM eLimb;      // 00?
			float                 fDistance;  // 04?
		};

		class ExplosionTarget
		{
		public:
			// members
			TESObjectREFR*                         pRef;           // 00?
			bool                                   bHitWeakPoint;  // 04?
			bool                                   bMobile;        // 05?
			bool                                   bProcessed;     // 06?
			std::uint8_t                           pad07;          // 07
			BSSimpleList<Explosion::ExplodedLimb*> limbList;       // 08?
		};

		// override (MobileObject)
		virtual ~Explosion() = default;                                             // 04
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;        // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;        // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;          // 1C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 21
		virtual void SetActorCause(ActorCause* apActorCause) override;              // 59
		virtual ActorCause* GetActorCause() override;                               // 5A
		virtual MagicCaster* GetMagicCaster() override;                             // 66
		virtual void InitHavok() override;                                          // 71
		virtual bool IsExplosion() override;                                        // 88
		virtual void Process(float afDelta) override;                               // 97
		virtual bool ChangeProcessLevel() override;                                 // 98
		virtual bool IsTransient() override;                                        // BB
		virtual void Update(float afDelta) override;                                // BE

		// add
		virtual void Initialize();  // C1

		Explosion* ctor()
		{
			using func_t = Explosion*(__thiscall*)(Explosion*);
			static REL::Relocation<func_t> func{ Offsets::Explosion::ctor };
			return func(this);
		}

		Explosion* ctor(BGSExplosion* apExplosionBase, TESObjectREFR* apOwnerRef, TESObjectCELL* apCell, NiPoint3 aRotation, NiMatrix3 a_arg5)
		{
			using func_t = Explosion*(__thiscall*)(Explosion*, BGSExplosion*, TESObjectREFR*, TESObjectCELL*, NiPoint3, NiMatrix3);
			static REL::Relocation<func_t> func{ Offsets::Explosion::ctor_1 };
			return func(this, apExplosionBase, apOwnerRef, apCell, aRotation, a_arg5);
		}

		static Explosion* SpawnExplosion(BGSExplosion* apExplosionBase, TESObjectREFR* apOwnerRef, TESObjectREFR* apExplodedRef, TESObjectCELL* apCell, NiPoint3 aOrigin, NiMatrix3 aRotation)
		{
			using func_t = decltype(&Explosion::SpawnExplosion);
			static REL::Relocation<func_t> func{ Offsets::Explosion::SpawnExplosion };
			return func(apExplosionBase, apOwnerRef, apExplodedRef, apCell, aOrigin, aRotation);
		}

		bool IsDistant()
		{
			using func_t = decltype(&Explosion::IsDistant);
			static REL::Relocation<func_t> func{ Offsets::Explosion::IsDistant };
			return func(this);
		}

		void Init3D()
		{
			using func_t = decltype(&Explosion::Init3D);
			static REL::Relocation<func_t> func{ Offsets::Explosion::Init3D };
			func(this);
		}

		void ProcessMovement(float afDelta)
		{
			using func_t = decltype(&Explosion::ProcessMovement);
			static REL::Relocation<func_t> func{ Offsets::Explosion::ProcessMovement };
			func(this, afDelta);
		}

		void ApplyImpactDecals()
		{
			using func_t = decltype(&Explosion::ApplyImpactDecals);
			static REL::Relocation<func_t> func{ Offsets::Explosion::ApplyImpactDecals };
			func(this);
		}

		void FindTargets()
		{
			using func_t = decltype(&Explosion::FindTargets);
			static REL::Relocation<func_t> func{ Offsets::Explosion::FindTargets };
			func(this);
		}

		void ApplyForces()
		{
			using func_t = decltype(&Explosion::ApplyForces);
			static REL::Relocation<func_t> func{ Offsets::Explosion::ApplyForces };
			func(this);
		}

		void ProcessTargets()
		{
			using func_t = decltype(&Explosion::ProcessTargets);
			static REL::Relocation<func_t> func{ Offsets::Explosion::ProcessTargets };
			func(this);
		}

		TESObjectWEAP* GetWeaponSource()
		{
			using func_t = decltype(&Explosion::GetWeaponSource);
			static REL::Relocation<func_t> func{ Offsets::Explosion::GetWeaponSource };
			return func(this);
		}

		void PushRigidBody(bhkRigidBody* apRigidBody)
		{
			using func_t = decltype(&Explosion::PushRigidBody);
			static REL::Relocation<func_t> func{ Offsets::Explosion::PushRigidBody };
			func(this, apRigidBody);
		}

		float GetDamage()
		{
			using func_t = decltype(&Explosion::GetDamage);
			static REL::Relocation<func_t> func{ Offsets::Explosion::GetDamage };
			return func(this);
		}

		void StartSounds()
		{
			using func_t = decltype(&Explosion::StartSounds);
			static REL::Relocation<func_t> func{ Offsets::Explosion::StartSounds };
			func(this);
		}

		void StopSounds()
		{
			using func_t = decltype(&Explosion::StopSounds);
			static REL::Relocation<func_t> func{ Offsets::Explosion::StopSounds };
			func(this);
		}

		void UpdateNonRenderSafeMovement(float afDelta)
		{
			using func_t = decltype(&Explosion::UpdateNonRenderSafeMovement);
			static REL::Relocation<func_t> func{ Offsets::Explosion::UpdateNonRenderSafeMovement };
			func(this, afDelta);
		}

		bool RunLOSPick(NiPoint3 aLocation, TESObjectREFR* apTarget)
		{
			using func_t = decltype(&Explosion::RunLOSPick);
			static REL::Relocation<func_t> func{ Offsets::Explosion::RunLOSPick };
			return func(this, aLocation, apTarget);
		}

		bool TestExplosionUnderWater()
		{
			using func_t = decltype(&Explosion::TestExplosionUnderWater);
			static REL::Relocation<func_t> func{ Offsets::Explosion::TestExplosionUnderWater };
			return func(this);
		}

	public:
		// members
		float                                     fAge;                   // 88
		float                                     fLifetime;              // 8C
		float                                     fBuildTime;             // 90
		float                                     fRadius;                // 94
		float                                     fImageSpaceRadius;      // 98
		float                                     fWeaponCondition;       // 9C
		NiPointer<bhkSimpleShapePhantom>          spPhantom;              // A0
		BSSimpleList<Explosion::ExplosionTarget*> TargetList;             // A4
		BSSoundHandle                             Sound1;                 // AC
		BSSoundHandle                             Sound2;                 // B8
		NiPointer<NiLight>                        spLight;                // C4
		TESObjectREFR*                            pOwner;                 // C8
		TESObjectREFR*                            pExplodedRef;           // CC
		NiPointer<ActorCause>                     spActorCause;           // D0
		bool                                      bDecalsPlaced;          // D4
		bool                                      bTargetsFound;          // D5
		bool                                      bTargetsProcessed;      // D6
		bool                                      bForcesApplied;         // D7
		bool                                      bIgnoreImageSpaceSwap;  // D8
		bool                                      bUnderWater;            // D9
		std::uint16_t                             padDA;                  // DA
		NonActorMagicCaster*                      pCaster;                // DC
		TESObjectWEAP*                            pWeaponSource;          // E0
		std::int32_t                              iFrameCount;            // E4
		NiPoint3                                  ClosestPoint;           // E8
		NiPoint3                                  ClosestPointNormal;     // F4
		float                                     fCalculatedDamage;      // 100
	};
	static_assert(sizeof(Explosion) == 0x104);
}
