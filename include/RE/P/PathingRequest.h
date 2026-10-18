#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorLockData.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/P/PATHING_REQUEST_TYPE.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class PathingAvoidNodeArray;

	class PathingRequest :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingRequest };
		static constexpr auto VTABLE{ VTABLE::PathingRequest };

		// override (NiRefObject)
		virtual ~PathingRequest() = default;  // 00

		// add
		virtual void CopyTo(PathingRequest* a_arg1) const;               // 02
		virtual void CheckValid();                                       // 03
		virtual PATHING_REQUEST_TYPE GetType();                          // 04
		virtual void PrintDebugText(IDebugText* a_arg1) const;           // 05
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer);      // 06
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer);      // 07
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);  // 08

		bool GetFaceTargetAtGoal() const
		{
			using func_t = decltype(&PathingRequest::GetFaceTargetAtGoal);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetFaceTargetAtGoal };
			return func(this);
		}

		float GetGoalAngleToFace() const
		{
			using func_t = decltype(&PathingRequest::GetGoalAngleToFace);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetGoalAngleToFace };
			return func(this);
		}

		PathingAvoidNodeArray* GetAvoidNodeArray() const
		{
			using func_t = decltype(&PathingRequest::GetAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetAvoidNodeArray };
			return func(this);
		}

		float GetActorRadius() const
		{
			using func_t = decltype(&PathingRequest::GetActorRadius);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetActorRadius };
			return func(this);
		}

		bool GetAllowIncompletePath() const
		{
			using func_t = decltype(&PathingRequest::GetAllowIncompletePath);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetAllowIncompletePath };
			return func(this);
		}

		ActorLockData const& GetActorLockData() const
		{
			using func_t = decltype(&PathingRequest::GetActorLockData);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetActorLockData };
			return func(this);
		}

		void SetDestination(PathingLocation const& aDestination)
		{
			using func_t = decltype(&PathingRequest::SetDestination);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetDestination };
			func(this, aDestination);
		}

		void SetOrigin(PathingLocation const& aOrigin)
		{
			using func_t = void (PathingRequest::*)(PathingLocation const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetOrigin };
			func(this, aOrigin);
		}

		void SetActorRadius(float aRadius)
		{
			using func_t = decltype(&PathingRequest::SetActorRadius);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetActorRadius };
			func(this, aRadius);
		}

		void SetAvoidNodeArray(PathingAvoidNodeArray* apAvoidNodeArray)
		{
			using func_t = decltype(&PathingRequest::SetAvoidNodeArray);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetAvoidNodeArray };
			func(this, apAvoidNodeArray);
		}

		PathingRequest* ctor()
		{
			using func_t = PathingRequest*(__thiscall*)(PathingRequest*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::ctor };
			return func(this);
		}

		PathingRequest* ctor(PathingRequest const& aRequest)
		{
			using func_t = PathingRequest*(__thiscall*)(PathingRequest*, PathingRequest const&);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::ctor_1 };
			return func(this, aRequest);
		}

		void SetOrigin(Actor* apActor)
		{
			using func_t = void (PathingRequest::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetOrigin_1 };
			func(this, apActor);
		}

		void SetActorLockData(Actor* apActor)
		{
			using func_t = decltype(&PathingRequest::SetActorLockData);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetActorLockData };
			func(this, apActor);
		}

		void SetCantOpenDoors(bool abCantOpenDoors)
		{
			using func_t = decltype(&PathingRequest::SetCantOpenDoors);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetCantOpenDoors };
			func(this, abCantOpenDoors);
		}

		void SetCanSwim(bool abCanSwim)
		{
			using func_t = decltype(&PathingRequest::SetCanSwim);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetCanSwim };
			func(this, abCanSwim);
		}

		void SetCanFly(bool abCanFly)
		{
			using func_t = decltype(&PathingRequest::SetCanFly);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetCanFly };
			func(this, abCanFly);
		}

		void SetInitialPathHeading(float afInitialPathHeading)
		{
			using func_t = decltype(&PathingRequest::SetInitialPathHeading);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetInitialPathHeading };
			func(this, afInitialPathHeading);
		}

		static PathingRequest* CreatePathingRequest(PATHING_REQUEST_TYPE aeType)
		{
			using func_t = decltype(&PathingRequest::CreatePathingRequest);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::CreatePathingRequest };
			return func(aeType);
		}

		bool GetCantOpenDoors() const
		{
			using func_t = decltype(&PathingRequest::GetCantOpenDoors);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::GetCantOpenDoors };
			return func(this);
		}

		void SetAllowIncompletePath(bool abAllow)
		{
			using func_t = decltype(&PathingRequest::SetAllowIncompletePath);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetAllowIncompletePath };
			func(this, abAllow);
		}

		void SetGoDirectIfPathingFails(bool abGoDirect)
		{
			using func_t = decltype(&PathingRequest::SetGoDirectIfPathingFails);
			static REL::Relocation<func_t> func{ Offsets::PathingRequest::SetGoDirectIfPathingFails };
			func(this, abGoDirect);
		}

	public:
		// members
		Actor*                           pActor;                    // 08
		PathingLocation                  Origin;                    // 0C
		PathingLocation                  Destination;               // 34
		ActorLockData                    LockData;                  // 5C
		float                            fActorRadius;              // 68
		float                            fActorHeight;              // 6C
		float                            fGoalZDelta;               // 70
		float                            fTargetRadius;             // 74
		float                            fCenterRadius;             // 78
		NiPoint3                         Center;                    // 7C
		float                            fSmoothingRandomness;      // 88
		float                            fGoalAngle;                // 8C
		float                            fInitialPathHeading;       // 90
		NiPointer<PathingAvoidNodeArray> spAvoidNodeArray;          // 94
		bool                             bCantOpenDoors;            // 98
		bool                             bFaceTargetAtGoal;         // 99
		bool                             bDrawDebugGeometry;        // 9A
		bool                             bAllowIncompletePath;      // 9B
		bool                             bSoftGoalRadius;           // 9C
		bool                             bCanSwim;                  // 9D
		bool                             bCanFly;                   // 9E
		bool                             bWaitIfPlayerWaits;        // 9F
		bool                             bFirstTangentUsesHeading;  // A0
		bool                             bGoDirectIfPathingFails;   // A1
		bool                             bTryToUseCurvedPath;       // A2
		bool                             bIgnoreSmoothingIfFails;   // A3
		bool                             bIgnoreLocks;              // A4
		std::uint8_t                     padA5[0x3];                // A5
		std::int32_t                     iRetryCount;               // A8
		bool                             bFailIfGoalOccupied;       // AC
		std::uint8_t                     padAD[0x3];                // AD
	};
	static_assert(sizeof(PathingRequest) == 0xB0);
}
