#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/bhkCharacterListener.h"
#include "RE/B/bhkCharacterProxy.h"
#include "RE/C/CFilter.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkStepInfo.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpCharacterContext.h"
#include "RE/H/hkpCharacterStateType.h"
#include "RE/H/hkpRootCdPoint.h"
#include "RE/H/hkpSurfaceInfo.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SHAPE_TYPES.h"

namespace RE
{
	class DamageImpactData;
	class NiAVObject;
	class NiPoint3;
	class bhkCollisionBox;
	class bhkShape;
	class bhkShapePhantom;
	class bhkWorld;
	class hkpCharacterProxy;
	class hkpRigidBody;

	class alignas(16) bhkCharacterController :
		public bhkCharacterProxy,  // 00
		public hkpCharacterContext,  // 3E0
		public bhkCharacterListener,  // 410
		public hkpSurfaceInfo  // 480
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterController };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterController };

		enum class CHARACTER_SIZE : std::int32_t
		{
			kCS_NORMAL = 0x0,
			kCS_SIZED = 0x1,
			kCS_SIZING = 0x2,
		};

		// add
		virtual void Unk_31();  // 31
		virtual void Unk_32();  // 32
		virtual void Unk_33();  // 33
		virtual void Unk_34();  // 34

		void SetPosition(NiPoint3 const& arPos)
		{
			using func_t = decltype(&bhkCharacterController::SetPosition);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetPosition };
			func(this, arPos);
		}

		void SetWaterHeight(float afHeight)
		{
			using func_t = decltype(&bhkCharacterController::SetWaterHeight);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetWaterHeight };
			func(this, afHeight);
		}

		bool QIsFlying() const
		{
			using func_t = decltype(&bhkCharacterController::QIsFlying);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QIsFlying };
			return func(this);
		}

		hkpCharacterStateType GetState() const
		{
			using func_t = decltype(&bhkCharacterController::GetState);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::GetState };
			return func(this);
		}

		bool QChaseBip() const
		{
			using func_t = decltype(&bhkCharacterController::QChaseBip);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QChaseBip };
			return func(this);
		}

		bhkWorld* GetWorld() const
		{
			using func_t = decltype(&bhkCharacterController::GetWorld);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::GetWorld };
			return func(this);
		}

		void SetProjectile(bool abTF)
		{
			using func_t = decltype(&bhkCharacterController::SetProjectile);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetProjectile };
			func(this, abTF);
		}

		void SetQuickSimulate(bool abTF)
		{
			using func_t = decltype(&bhkCharacterController::SetQuickSimulate);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetQuickSimulate };
			func(this, abTF);
		}

		void SetMOBObject(void* apObject)
		{
			using func_t = decltype(&bhkCharacterController::SetMOBObject);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetMOBObject };
			func(this, apObject);
		}

		NiAVObject* GetNiObject() const
		{
			using func_t = decltype(&bhkCharacterController::GetNiObject);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::GetNiObject };
			return func(this);
		}

		void SetFallTime(float afFallTime)
		{
			using func_t = decltype(&bhkCharacterController::SetFallTime);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetFallTime };
			func(this, afFallTime);
		}

		float QWaterHeight() const
		{
			using func_t = decltype(&bhkCharacterController::QWaterHeight);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QWaterHeight };
			return func(this);
		}

		void SetCollisionFilter(CFilter aiFilter)
		{
			using func_t = decltype(&bhkCharacterController::SetCollisionFilter);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetCollisionFilter };
			func(this, aiFilter);
		}

		void GetPosition(NiPoint3& arPos) const
		{
			using func_t = decltype(&bhkCharacterController::GetPosition);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::GetPosition };
			func(this, arPos);
		}

		std::uint32_t GetCollisionGroup() const
		{
			using func_t = decltype(&bhkCharacterController::GetCollisionGroup);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::GetCollisionGroup };
			return func(this);
		}

		bool QOnStairs() const
		{
			using func_t = decltype(&bhkCharacterController::QOnStairs);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QOnStairs };
			return func(this);
		}

		void SetWantState(hkpCharacterStateType aeType)
		{
			using func_t = decltype(&bhkCharacterController::SetWantState);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::SetWantState };
			func(this, aeType);
		}

		bool QSupported() const
		{
			using func_t = decltype(&bhkCharacterController::QSupported);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QSupported };
			return func(this);
		}

		float QLODDistance() const
		{
			using func_t = decltype(&bhkCharacterController::QLODDistance);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QLODDistance };
			return func(this);
		}

		bool QCanJump() const
		{
			using func_t = decltype(&bhkCharacterController::QCanJump);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::QCanJump };
			return func(this);
		}

		NiAVObject* FindDisplayGeometry()
		{
			using func_t = decltype(&bhkCharacterController::FindDisplayGeometry);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::FindDisplayGeometry };
			return func(this);
		}

		float GetRadius() const
		{
			using func_t = decltype(&bhkCharacterController::GetRadius);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterController::GetRadius };
			return func(this);
		}

	public:
		// members
		hkVector4                                         UpVec;                 // 4C0
		hkVector4                                         ForwardVec;            // 4D0
		hkStepInfo                                        StepInfo;              // 4E0
		hkVector4                                         OutVelocity;           // 4F0
		hkVector4                                         VelocityMod;           // 500
		hkVector4                                         Direction;             // 510
		hkpCharacterStateType                             eWantState;            // 520
		float                                             fVelocityTime;         // 524
		float                                             fRotMod;               // 528
		float                                             fRotModTime;           // 52C
		float                                             fCalculatePitchTimer;  // 530
		float                                             fAcrobatics;           // 534
		float                                             fCenter;               // 538
		float                                             fWaterHeight;          // 53C
		float                                             fJumpHeight;           // 540
		float                                             fFallStartHeight;      // 544
		float                                             fFallTime;             // 548
		float                                             fGravity;              // 54C
		float                                             fPitchAngle;           // 550
		float                                             fRollAngle;            // 554
		float                                             fPitchMult;            // 558
		float                                             fScale;                // 55C
		float                                             fSwimFloatHeight;      // 560
		float                                             fActorHeight;          // 564
		float                                             fSpeedPct;             // 568
		std::uint32_t                                     pad56C;                // 56C
		hkVector4                                         RotCenter;             // 570
		hkVector4                                         PushDelta;             // 580
		std::uint32_t                                     iPushCount;            // 590
		NiPointer<bhkShapePhantom>                        spShapePhantom;        // 594
		NiPointer<bhkCollisionBox>                        spCollisionBox;        // 598
		SHAPE_TYPES                                       eShapeType;            // 59C
		SHAPE_TYPES                                       eSizedShapeType;       // 5A0
		NiPointer<bhkShape>                               spShapes[2];           // 5A4
		std::uint32_t                                     pad5AC;                // 5AC
		hkVector4                                         FrontBack[4];          // 5B0
		float                                             fRadius;               // 5F0
		float                                             fHeight;               // 5F4
		float                                             fDestRadius;           // 5F8
		float                                             fLODDistance;          // 5FC
		bhkCharacterController::CHARACTER_SIZE            eSize;                 // 600
		std::uint32_t                                     iPriority;             // 604
		std::int32_t                                      iSupportCount;         // 608
		hkRefPtr<hkpRigidBody>                            spSupportBody;         // 60C
		bool                                              bFakeSupport;          // 610
		std::uint8_t                                      pad611[0xF];           // 611
		hkVector4                                         FakeSupportStart;      // 620
		hkRefPtr<hkpRigidBody>                            spBumpedBody;          // 630
		float                                             fBumpedForce;          // 634
		hkRefPtr<hkpCharacterProxy>                       spBumpedCharProxy;     // 638
		hkArray<hkpRootCdPoint, hkContainerHeapAllocator> LastManifold;          // 63C
		BSSimpleList<DamageImpactData*>                   DamageImpacts;         // 648
	};
	static_assert(sizeof(bhkCharacterController) == 0x650);
}
