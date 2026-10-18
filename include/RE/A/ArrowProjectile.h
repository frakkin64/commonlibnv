#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MATERIAL_TYPE.h"
#include "RE/M/MobileObject.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class AlchemyItem;
	class EnchantmentItem;
	class NiAVObject;
	class TESBoundObject;
	class TESObjectREFR;
	class bhkRigidBody;

	class ArrowProjectile :
		public MobileObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ArrowProjectile };
		static constexpr auto VTABLE{ VTABLE::ArrowProjectile };

		class CollisionInfo;

		enum class ArrowCollisionType : std::int32_t
		{
			kSTATE_STICK_ACTOR = 0x0,
			kSTATE_STICK_REF = 0x1,
			kSTATE_STICK_GROUND = 0x2,
			kSTATE_BOUNCE = 0x3,
			kSTATE_SIMULATE = 0x4,
		};

		enum class ArrowState : std::int32_t
		{
			kSTATE_FLYING = 0x0,
			kSTATE_COLLISION = 0x1,
			kSTATE_POST_COLLISION = 0x2,
			kSTATE_DELETING = 0x3,
		};

		class CollisionInfo
		{
		public:
			CollisionInfo* ctor()
			{
				using func_t = CollisionInfo*(__thiscall*)(CollisionInfo*);
				static REL::Relocation<func_t> func{ Offsets::ArrowProjectile_CollisionInfo::ctor };
				return func(this);
			}

		public:
			// members
			ArrowProjectile::ArrowCollisionType eCollisionType;  // 00
			NiPoint3                            Point;           // 04
			NiPoint3                            Normal;          // 10?
			NiPoint3                            Velocity;        // 1C?
			TESObjectREFR*                      pCollidee;       // 28?
			NiAVObject*                         pClosestObject;  // 2C?
			NiMatrix3                           Rotation;        // 30?
		};

		// override (MobileObject)
		virtual ~ArrowProjectile() = default;                                                       // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                          // 14
		virtual void SaveGame(std::uint32_t aiFlags) override;                                      // 16
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;        // 18
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;        // 1A
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags) override;  // 1B
		virtual void Revert(std::uint32_t aiFlags) override;                                        // 1D
		virtual NiAVObject* Load3D(bool abBackgroundLoading) override;                              // 72
		virtual bool IsProjectile() override;                                                       // 89
		virtual bool MovetoHigh() override;                                                         // 90
		virtual bool MovetoMiddleHigh() override;                                                   // 93
		virtual void Process(float afDelta) override;                                               // 97
		virtual bool ChangeProcessLevel() override;                                                 // 98
		virtual bool IsTransient() override;                                                        // BB
		virtual void Update(float afDelta) override;                                                // BE

		static std::int32_t GetArrowCount()
		{
			using func_t = decltype(&ArrowProjectile::GetArrowCount);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::GetArrowCount };
			return func();
		}

		TESObjectREFR* GetAttachedRef()
		{
			using func_t = decltype(&ArrowProjectile::GetAttachedRef);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::GetAttachedRef };
			return func(this);
		}

		void InitHavok(Actor* apShooter, float afPower)
		{
			using func_t = decltype(&ArrowProjectile::InitHavok);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::InitHavok };
			func(this, apShooter, afPower);
		}

		void CollideActor(NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal, Actor* apCollidee)
		{
			using func_t = decltype(&ArrowProjectile::CollideActor);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::CollideActor };
			func(this, aContactPoint, aContactNormal, apCollidee);
		}

		void CollideTerrain(NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal)
		{
			using func_t = decltype(&ArrowProjectile::CollideTerrain);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::CollideTerrain };
			func(this, aContactPoint, aContactNormal);
		}

		void Bounce(NiPoint3 const& aContactPoint, NiPoint3 const& aContactNormal)
		{
			using func_t = decltype(&ArrowProjectile::Bounce);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::Bounce };
			func(this, aContactPoint, aContactNormal);
		}

		void Simulate(Actor* apCollidee)
		{
			using func_t = decltype(&ArrowProjectile::Simulate);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::Simulate };
			func(this, apCollidee);
		}

		bool ProcessCollision()
		{
			using func_t = decltype(&ArrowProjectile::ProcessCollision);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ProcessCollision };
			return func(this);
		}

		bool ProcessCollisionActor(bhkRigidBody* apArrowRB)
		{
			using func_t = decltype(&ArrowProjectile::ProcessCollisionActor);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ProcessCollisionActor };
			return func(this, apArrowRB);
		}

		bool ProcessCollisionReference(bhkRigidBody* apArrowRB)
		{
			using func_t = decltype(&ArrowProjectile::ProcessCollisionReference);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ProcessCollisionReference };
			return func(this, apArrowRB);
		}

		bool ProcessCollisionTerrain(bhkRigidBody* apArrowRB)
		{
			using func_t = decltype(&ArrowProjectile::ProcessCollisionTerrain);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ProcessCollisionTerrain };
			return func(this, apArrowRB);
		}

		bool ProcessBounce(bhkRigidBody* apArrowRB)
		{
			using func_t = decltype(&ArrowProjectile::ProcessBounce);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ProcessBounce };
			return func(this, apArrowRB);
		}

		bool ProcessSimulate(bhkRigidBody* apArrowRB)
		{
			using func_t = decltype(&ArrowProjectile::ProcessSimulate);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ProcessSimulate };
			return func(this, apArrowRB);
		}

		static std::uint32_t GetArrowGroup()
		{
			using func_t = decltype(&ArrowProjectile::GetArrowGroup);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::GetArrowGroup };
			return func();
		}

		static void DeleteAttachedArrows(TESObjectREFR* apRef, bool abInstant)
		{
			using func_t = void(__cdecl*)(TESObjectREFR*, bool);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::DeleteAttachedArrows };
			func(apRef, abInstant);
		}

		static void DeleteAttachedArrows(TESBoundObject* pAmmoType, std::int32_t aiCount, TESObjectREFR* apTargetObject, bool abInstant, bool abAddedOnly)
		{
			using func_t = void(__cdecl*)(TESBoundObject*, std::int32_t, TESObjectREFR*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::DeleteAttachedArrows_1 };
			func(pAmmoType, aiCount, apTargetObject, abInstant, abAddedOnly);
		}

		void PlayArrowCollisionSound(float a_arg1, NiPoint3 aContactPoint, bhkRigidBody* pTargetBody, MATERIAL_TYPE aeTargetMaterial)
		{
			using func_t = decltype(&ArrowProjectile::PlayArrowCollisionSound);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::PlayArrowCollisionSound };
			func(this, a_arg1, aContactPoint, pTargetBody, aeTargetMaterial);
		}

		static NiAVObject* PickSceneGraph(NiAVObject* apObject, NiPoint3 aPickFrom, NiPoint3 aDirection, float& afPickLength, bool abIgnoreHead)
		{
			using func_t = decltype(&ArrowProjectile::PickSceneGraph);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::PickSceneGraph };
			return func(apObject, aPickFrom, aDirection, afPickLength, abIgnoreHead);
		}

		void ApplyCollisionForce(NiPoint3 aDirection, NiPoint3 apTargetBody, bhkRigidBody* a_arg3)
		{
			using func_t = decltype(&ArrowProjectile::ApplyCollisionForce);
			static REL::Relocation<func_t> func{ Offsets::ArrowProjectile::ApplyCollisionForce };
			func(this, aDirection, apTargetBody, a_arg3);
		}

	public:
		// members
		ArrowProjectile::CollisionInfo* psCollisionData;           // 88
		ArrowProjectile::ArrowState     eState;                    // 8C
		float                           fFadeAlpha;                // 90
		float                           fAge;                      // 94
		float                           fSpeed;                    // 98
		float                           fDamage;                   // 9C
		float                           fWaterSpeed;               // A0
		Actor*                          pShooter;                  // A4
		EnchantmentItem*                pEnchantment;              // A8
		EnchantmentItem*                pBowEnchantment;           // AC
		AlchemyItem*                    pPoison;                   // B0
		NiPoint3                        DeltaS;                    // B4
		bool                            bNeedsFinishInitLoadGame;  // C0
		bool                            bAddedToInventory;         // C1
		bool                            bBowIgnoresWeaponsResist;  // C2
		bool                            bPostForce;                // C3
		std::uint32_t                   iLoadGameFlags;            // C4
	};
	static_assert(sizeof(ArrowProjectile) == 0xC8);
}
