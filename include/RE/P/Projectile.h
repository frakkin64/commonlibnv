#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/M/MobileObject.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class Actor;
	class ActorCause;
	class BGSLoadFormBuffer;
	class BGSProjectile;
	class BGSSaveFormBuffer;
	class CombatController;
	class ItemChange;
	class NiAVObject;
	class NiLight;
	class ProjectilePickCache;
	class ProjectileTarget;
	class TESFaction;
	class TESFile;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESObjectWEAP;
	class bhkPickData;
	class hkpCollidable;
	class hkpWorldObject;

	class Projectile :
		public MobileObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Projectile };
		static constexpr auto VTABLE{ VTABLE::Projectile };

		class ImpactData;

		enum class PROJECTILE_TYPE : std::int32_t
		{
			kPROJECTILE_TYPE_UNKNOWN = 0x0,
			kPROJECTILE_TYPE_BEAM = 0x1,
			kPROJECTILE_TYPE_FLAME = 0x2,
			kPROJECTILE_TYPE_GRENADE = 0x3,
			kPROJECTILE_TYPE_MISSILE = 0x4,
			kPROJECTILE_TYPE_CONTINUOUS_BEAM = 0x5,
		};

		enum class ProjectileFlags : std::int32_t
		{
			kHITSCAN_MODE = 0x1,
			kNO_3D = 0x2,
			kNO_CHARCONTROLLER = 0x4,
			kNO_COLLISION = 0x8,
			kTRACER = 0x10,
			kFADING = 0x20,
			kREORIENT = 0x40,
			kPOST_PROCESS = 0x80,
			kCHECK_BEHIND_WALL = 0x100,
			kTURNED_OFF = 0x200,
			kACTIVE_IN_INVENTORY = 0x400,
			kINVENTORY_FREAKOUT = 0x800,
			kALWAYS_HIT_TARGET = 0x1000,
			kSPAWN_EXPLOSION_AT_IMPACT = 0x2000,
			kNO_PLAYER_PROXIMITY = 0x4000,
			kKILL_ON_EXPLOSION = 0x8000,
			kPROJECTILE_INITIALIZED = 0x10000,
			kFAKE_SHOT = 0x20000,
			kWHOLE_BODY_TARGETED = 0x40000,
			kSHOOTER_IN_COMBAT = 0x80000,
			kDETONATE = 0x100000,
		};

		class ImpactData
		{
		public:
			void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
			{
				using func_t = decltype(&ImpactData::SaveGame);
				static REL::Relocation<func_t> func{ Offsets::Projectile_ImpactData::SaveGame };
				func(this, apSaveGameBuffer);
			}

			void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
			{
				using func_t = decltype(&ImpactData::LoadGame);
				static REL::Relocation<func_t> func{ Offsets::Projectile_ImpactData::LoadGame };
				func(this, apLoadGameBuffer);
			}

			void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
			{
				using func_t = decltype(&ImpactData::FinishLoadGame);
				static REL::Relocation<func_t> func{ Offsets::Projectile_ImpactData::FinishLoadGame };
				func(this, apLoadGameBuffer);
			}

		public:
			// members
			TESObjectREFR*        pCollidee;                // 00
			NiPoint3              kLocation;                // 04
			NiPoint3              kNormal;                  // 10?
			hkpWorldObject*       pTargetWorldObject;       // 1C?
			MATERIAL_TYPE         eMaterial;                // 20?
			BGSBodyPart_LIMB_ENUM eDamageLimb;              // 24?
			bool                  bProcessed;               // 28?
			bool                  bDoDamage;                // 29?
			std::int16_t          sTargetWorldObjectCount;  // 2A?
			std::int16_t          sTargetWorldObjectIndex;  // 2C?
			std::uint16_t         pad2E;                    // 2E
		};

		// override (MobileObject)
		virtual ~Projectile() = default;                                            // 04
		virtual bool Load(TESFile* apFile) override;                                // 08
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;        // 15
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;        // 17
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;    // 19
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;          // 1C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 21
		virtual void SetActorCause(ActorCause* apActorCause) override;              // 59
		virtual ActorCause* GetActorCause() override;                               // 5A
		virtual void InitHavok() override;                                          // 71
		virtual void MoveHavok(bool abForceRec) override;                           // 7F
		virtual bool IsProjectile() override;                                       // 89
		virtual bool MovetoHigh() override;                                         // 90
		virtual bool MovetoLow() override;                                          // 91
		virtual bool MovetoMiddleLow() override;                                    // 92
		virtual bool MovetoMiddleHigh() override;                                   // 93
		virtual void Process(float afDelta) override;                               // 97
		virtual bool ChangeProcessLevel() override;                                 // 98
		virtual bool IsTransient() override;                                        // BB
		virtual void Update(float afDelta) override;                                // BE
		virtual void CleanUpPointersOnDisable() override;                           // BF

		// add
		virtual Projectile::PROJECTILE_TYPE GetProjectileType();                                                                                                                                                        // C1
		virtual void Initialize();                                                                                                                                                                                      // C2
		virtual void Process3D();                                                                                                                                                                                       // C3
		virtual void UpdateProjectile(float a_arg1);                                                                                                                                                                    // C4
		virtual bool ProcessImpacts();                                                                                                                                                                                  // C5
		virtual bool IsMine();                                                                                                                                                                                          // C6
		virtual void Unk_C7();                                                                                                                                                                                          // C7
		virtual bool TurnOff(Actor* apActionActor, bool abSilent);                                                                                                                                                      // C8
		virtual bool IsPermanent();                                                                                                                                                                                     // C9
		virtual bool RunTargetPick();                                                                                                                                                                                   // CA
		virtual bool AddImpact(TESObjectREFR* apCollidee, NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, hkpCollidable const* apTargetCollidable, std::uint32_t aiKey, MATERIAL_TYPE aeForceMaterial);  // CB

		bool IsFlagSet(Projectile::ProjectileFlags aeFlag)
		{
			using func_t = decltype(&Projectile::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::Projectile::IsFlagSet };
			return func(this, aeFlag);
		}

		void SetFlag(Projectile::ProjectileFlags aeFlag, bool abValue)
		{
			using func_t = decltype(&Projectile::SetFlag);
			static REL::Relocation<func_t> func{ Offsets::Projectile::SetFlag };
			func(this, aeFlag, abValue);
		}

		bool IsEditorCreated()
		{
			using func_t = decltype(&Projectile::IsEditorCreated);
			static REL::Relocation<func_t> func{ Offsets::Projectile::IsEditorCreated };
			return func(this);
		}

		void SetProjectileTarget(ProjectileTarget* apObject)
		{
			using func_t = decltype(&Projectile::SetProjectileTarget);
			static REL::Relocation<func_t> func{ Offsets::Projectile::SetProjectileTarget };
			func(this, apObject);
		}

		TESObjectREFR* GetShooter()
		{
			using func_t = decltype(&Projectile::GetShooter);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetShooter };
			return func(this);
		}

		ProjectileTarget* GetProjectileTarget()
		{
			using func_t = decltype(&Projectile::GetProjectileTarget);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetProjectileTarget };
			return func(this);
		}

		float GetSpeed()
		{
			using func_t = decltype(&Projectile::GetSpeed);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetSpeed };
			return func(this);
		}

		void SetRange(float afRange)
		{
			using func_t = decltype(&Projectile::SetRange);
			static REL::Relocation<func_t> func{ Offsets::Projectile::SetRange };
			func(this, afRange);
		}

		TESObjectREFR* GetDesiredTarget()
		{
			using func_t = decltype(&Projectile::GetDesiredTarget);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetDesiredTarget };
			return func(this);
		}

		NiPoint3 GetMovementDirection()
		{
			using func_t = decltype(&Projectile::GetMovementDirection);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetMovementDirection };
			return func(this);
		}

		Projectile* ctor(bool abAdd)
		{
			using func_t = Projectile*(__thiscall*)(Projectile*, bool);
			static REL::Relocation<func_t> func{ Offsets::Projectile::ctor };
			return func(this, abAdd);
		}

		Projectile* ctor(BGSProjectile* apProjectileBase, TESObjectREFR* apShooter, TESObjectWEAP* apFromWeapon, NiPoint3 aOrigin, float afZAngle, float a_arg6)
		{
			using func_t = Projectile*(__thiscall*)(Projectile*, BGSProjectile*, TESObjectREFR*, TESObjectWEAP*, NiPoint3, float, float);
			static REL::Relocation<func_t> func{ Offsets::Projectile::ctor_1 };
			return func(this, apProjectileBase, apShooter, apFromWeapon, aOrigin, afZAngle, a_arg6);
		}

		void Kill()
		{
			using func_t = decltype(&Projectile::Kill);
			static REL::Relocation<func_t> func{ Offsets::Projectile::Kill };
			func(this);
		}

		static Projectile* Launch(BGSProjectile* apProjectileBase, TESObjectREFR* apShooter, CombatController* apShooterCombatController, TESObjectWEAP* apFromWeapon, NiPoint3 aOrigin, float afZAngle, float a_arg7, ProjectilePickCache* afXAngle, TESObjectREFR* afSpreadHeading, bool afSpreadLooking, bool apPickCache, float apHomingTarget, float abAlwaysHit, TESObjectCELL* abDoNoDamage)
		{
			using func_t = decltype(&Projectile::Launch);
			static REL::Relocation<func_t> func{ Offsets::Projectile::Launch };
			return func(apProjectileBase, apShooter, apShooterCombatController, apFromWeapon, aOrigin, afZAngle, a_arg7, afXAngle, afSpreadHeading, afSpreadLooking, apPickCache, apHomingTarget, abAlwaysHit, abDoNoDamage);
		}

		static Projectile* SpawnProjectileInInventory(BGSProjectile* apProjectileBase, TESObjectREFR* apShooter, TESObjectREFR* apTarget, TESObjectWEAP* apFromWeapon)
		{
			using func_t = decltype(&Projectile::SpawnProjectileInInventory);
			static REL::Relocation<func_t> func{ Offsets::Projectile::SpawnProjectileInInventory };
			return func(apProjectileBase, apShooter, apTarget, apFromWeapon);
		}

		void Init3D()
		{
			using func_t = decltype(&Projectile::Init3D);
			static REL::Relocation<func_t> func{ Offsets::Projectile::Init3D };
			func(this);
		}

		void ProcessMovement(float afDelta)
		{
			using func_t = decltype(&Projectile::ProcessMovement);
			static REL::Relocation<func_t> func{ Offsets::Projectile::ProcessMovement };
			func(this, afDelta);
		}

		void UpdateInInventory()
		{
			using func_t = decltype(&Projectile::UpdateInInventory);
			static REL::Relocation<func_t> func{ Offsets::Projectile::UpdateInInventory };
			func(this);
		}

		bool TestProjectileInTriggerZone()
		{
			using func_t = decltype(&Projectile::TestProjectileInTriggerZone);
			static REL::Relocation<func_t> func{ Offsets::Projectile::TestProjectileInTriggerZone };
			return func(this);
		}

		static NiAVObject* ProcessTargetPick(bhkPickData* apPickData, Projectile* apProjectile, BGSProjectile* apProjectileBase, float* apHitFraction, bool bUseCharacterController, float afWaterHitRatio)
		{
			using func_t = decltype(&Projectile::ProcessTargetPick);
			static REL::Relocation<func_t> func{ Offsets::Projectile::ProcessTargetPick };
			return func(apPickData, apProjectile, apProjectileBase, apHitFraction, bUseCharacterController, afWaterHitRatio);
		}

		bool GetMineReactsToTarget(Actor* apTarget, Actor* apShooterActor, TESFaction* apOwnerFaction)
		{
			using func_t = decltype(&Projectile::GetMineReactsToTarget);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetMineReactsToTarget };
			return func(this, apTarget, apShooterActor, apOwnerFaction);
		}

		void UpdateLight()
		{
			using func_t = decltype(&Projectile::UpdateLight);
			static REL::Relocation<func_t> func{ Offsets::Projectile::UpdateLight };
			func(this);
		}

		static void GetConeEndpoints(NiPoint3* aPoints, std::int32_t aiNumPoints, NiPoint3 akOrigin, float afHeading, float afLooking, float afSpread, float afRange, float afAngleOffset)
		{
			using func_t = decltype(&Projectile::GetConeEndpoints);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetConeEndpoints };
			func(aPoints, aiNumPoints, akOrigin, afHeading, afLooking, afSpread, afRange, afAngleOffset);
		}

		void CheckRefDeleted(TESObjectREFR* apDeletedRef)
		{
			using func_t = decltype(&Projectile::CheckRefDeleted);
			static REL::Relocation<func_t> func{ Offsets::Projectile::CheckRefDeleted };
			func(this, apDeletedRef);
		}

		bool PickAutoWater(bhkPickData* apPickData, float& afWaterHitRatio)
		{
			using func_t = decltype(&Projectile::PickAutoWater);
			static REL::Relocation<func_t> func{ Offsets::Projectile::PickAutoWater };
			return func(this, apPickData, afWaterHitRatio);
		}

		static bool PickSceneGraph(bhkPickData* apPickData, NiAVObject* apObject, bool abIgnoreHead, bool abSort)
		{
			using func_t = decltype(&Projectile::PickSceneGraph);
			static REL::Relocation<func_t> func{ Offsets::Projectile::PickSceneGraph };
			return func(apPickData, apObject, abIgnoreHead, abSort);
		}

		bool FindBlastNodes(NiAVObject* apRoot, NiPoint3& aBlastPosition)
		{
			using func_t = decltype(&Projectile::FindBlastNodes);
			static REL::Relocation<func_t> func{ Offsets::Projectile::FindBlastNodes };
			return func(this, apRoot, aBlastPosition);
		}

		ItemChange* GetSecondaryItemChange()
		{
			using func_t = decltype(&Projectile::GetSecondaryItemChange);
			static REL::Relocation<func_t> func{ Offsets::Projectile::GetSecondaryItemChange };
			return func(this);
		}

	protected:
		void AimProjectile()
		{
			using func_t = decltype(&Projectile::AimProjectile);
			static REL::Relocation<func_t> func{ Offsets::Projectile::AimProjectile };
			func(this);
		}

		void AddInitialVelocity()
		{
			using func_t = decltype(&Projectile::AddInitialVelocity);
			static REL::Relocation<func_t> func{ Offsets::Projectile::AddInitialVelocity };
			func(this);
		}

		void Move(float afDeltaTime)
		{
			using func_t = void (Projectile::*)(float);
			static REL::Relocation<func_t> func{ Offsets::Projectile::Move };
			func(this, afDeltaTime);
		}

		void Move(float afDeltaTime, NiPoint3 aDeltaMove)
		{
			using func_t = void (Projectile::*)(float, NiPoint3);
			static REL::Relocation<func_t> func{ Offsets::Projectile::Move_1 };
			func(this, afDeltaTime, aDeltaMove);
		}

		void Sync3DWithReference(bool abSyncRotation, bool abDoArcReorientation)
		{
			using func_t = decltype(&Projectile::Sync3DWithReference);
			static REL::Relocation<func_t> func{ Offsets::Projectile::Sync3DWithReference };
			func(this, abSyncRotation, abDoArcReorientation);
		}

		void SpawnCollisionEffects(TESObjectREFR* apCollidee, NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, hkpCollidable const* apTargetCollidable, MATERIAL_TYPE aeMaterial)
		{
			using func_t = decltype(&Projectile::SpawnCollisionEffects);
			static REL::Relocation<func_t> func{ Offsets::Projectile::SpawnCollisionEffects };
			func(this, apCollidee, aContactPoint, aContactNormal, apTargetCollidable, aeMaterial);
		}

		static bool IsValidImpact(TESObjectREFR* apCollidee, hkpCollidable const* apTargetCollidable, Projectile* apProjectile, BGSProjectile* apProjectileBase)
		{
			using func_t = decltype(&Projectile::IsValidImpact);
			static REL::Relocation<func_t> func{ Offsets::Projectile::IsValidImpact };
			return func(apCollidee, apTargetCollidable, apProjectile, apProjectileBase);
		}

		void ApplyImpactForce(NiPoint3 aDirection, NiPoint3 apTargetCollidable, hkpCollidable const* a_arg3)
		{
			using func_t = decltype(&Projectile::ApplyImpactForce);
			static REL::Relocation<func_t> func{ Offsets::Projectile::ApplyImpactForce };
			func(this, aDirection, apTargetCollidable, a_arg3);
		}

		void CombatHit(Actor* apCollidee, bool abPowerAttack)
		{
			using func_t = decltype(&Projectile::CombatHit);
			static REL::Relocation<func_t> func{ Offsets::Projectile::CombatHit };
			func(this, apCollidee, abPowerAttack);
		}

		void CheckExplosion(float a_arg1)
		{
			using func_t = decltype(&Projectile::CheckExplosion);
			static REL::Relocation<func_t> func{ Offsets::Projectile::CheckExplosion };
			func(this, a_arg1);
		}

		bool CheckExplosionProximity()
		{
			using func_t = decltype(&Projectile::CheckExplosionProximity);
			static REL::Relocation<func_t> func{ Offsets::Projectile::CheckExplosionProximity };
			return func(this);
		}

		bool CheckShotBehindWall()
		{
			using func_t = decltype(&Projectile::CheckShotBehindWall);
			static REL::Relocation<func_t> func{ Offsets::Projectile::CheckShotBehindWall };
			return func(this);
		}

		void SetMovementDelta(NiPoint3 aDelta, bool abAddDistance)
		{
			using func_t = decltype(&Projectile::SetMovementDelta);
			static REL::Relocation<func_t> func{ Offsets::Projectile::SetMovementDelta };
			func(this, aDelta, abAddDistance);
		}

		void StartCountdownSound()
		{
			using func_t = decltype(&Projectile::StartCountdownSound);
			static REL::Relocation<func_t> func{ Offsets::Projectile::StartCountdownSound };
			func(this);
		}

		void StopCountdownSound()
		{
			using func_t = decltype(&Projectile::StopCountdownSound);
			static REL::Relocation<func_t> func{ Offsets::Projectile::StopCountdownSound };
			func(this);
		}

		void AimAtPoint(NiPoint3 aTargetLocation)
		{
			using func_t = decltype(&Projectile::AimAtPoint);
			static REL::Relocation<func_t> func{ Offsets::Projectile::AimAtPoint };
			func(this, aTargetLocation);
		}

	public:
		// members
		// not placed: bSoundFired(absent), fSoundDist(absent)
		BSSimpleList<Projectile::ImpactData*> ImpactList;            // 88
		bool                                  bImpactProcessed;      // 90
		std::uint8_t                          pad91[0x3];            // 91
		NiTransform                           kFollowOffset;         // 94
		std::uint32_t                         iFlags;                // C8
		float                                 fPower;                // CC
		float                                 fSpeedMult;            // D0
		float                                 fRange;                // D4
		float                                 fAge;                  // D8
		float                                 fDamage;               // DC
		float                                 fAlpha;                // E0
		float                                 fExplosionTimer;       // E4
		float                                 fBlinkTimer;           // E8
		float                                 fSpreadHeading;        // EC
		float                                 fSpreadLooking;        // F0
		float                                 fWeaponCondition;      // F4
		TESObjectWEAP*                        pWeaponSource;         // F8
		TESObjectREFR*                        pShooter;              // FC
		TESObjectREFR*                        pDesiredTarget;        // 100
		NiPoint3                              MovementDirection;     // 104
		float                                 fDistanceMoved;        // 110
		NiPointer<NiLight>                    spLight;               // 114
		bool                                  bSendAlarm;            // 118
		std::uint8_t                          pad119[0x3];           // 119
		NiPointer<ProjectilePickCache>        spPickCache;           // 11C
		NiPointer<ActorCause>                 spActorCause;          // 120
		float                                 fDecalSize;            // 124
		BSSoundHandle                         sndHandle;             // 128
		BSSoundHandle                         sndCountdown;          // 134
		ProjectileTarget*                     pTarget;               // 140
		ItemChange*                           pSecondaryItemChange;  // 144
		std::uint8_t                          pad148[0x8];           // 148
	};
	static_assert(sizeof(Projectile) == 0x150);
}
