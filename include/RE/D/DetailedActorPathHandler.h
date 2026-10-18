#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPathHandler.h"
#include "RE/A/ActorPathHandler_PATH_HANDLER_RESULT.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PATH_HANDLER_STATE.h"

namespace RE
{
	class Actor;
	class ActorMover;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class PathingRequest;
	class PathingSolution;
	class TESObjectREFR;

	class DetailedActorPathHandler :
		public ActorPathHandler  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DetailedActorPathHandler };
		static constexpr auto VTABLE{ VTABLE::DetailedActorPathHandler };

		class ActorAvoidanceData;

		enum class PATH_ACTOR_AVOID_RETURN : std::int32_t
		{
			kPATH_ACTOR_AVOID_RETURN_OK = 0x0,
			kPATH_ACTOR_AVOID_RETURN_WAIT = 0x1,
			kPATH_ACTOR_AVOID_RETURN_REPATH = 0x2,
			kPATH_ACTOR_AVOID_RETURN_FAIL = 0x3,
		};

		enum class PATH_AVOID_STATE : std::int32_t
		{
			kPATH_AVOID_INVALID = 0x0,
			kPATH_AVOID_OK = 0x1,
			kPATH_AVOID_WAITING = 0x2,
			kPATH_AVOID_REPATH = 0x3,
			kPATH_AVOID_REPATH_IGNORE = 0x4,
			kPATH_AVOID_FAILED = 0x5,
		};

		enum class PATH_HANDLER_DOOR_STATE : std::int32_t
		{
			kPATH_HANDLER_DOOR_STATE_NONE = 0x0,
			kPATH_HANDLER_DOOR_STATE_WAITING_FOR_DOOR_TO_OPEN = 0x1,
			kPATH_HANDLER_DOOR_STATE_FAILED = 0x2,
		};

		enum class PATH_RUNNING_BLEND : std::int32_t
		{
			kPATH_RUNNING_BLEND_INVALID = 0x0,
			kPATH_RUNNING_BLEND_WALK_TO_RUN = 0x1,
			kPATH_RUNNING_BLEND_FINISH_BLEND = 0x2,
			kPATH_RUNNING_BLEND_DONE = 0x3,
		};

		class ActorAvoidanceData
		{
		public:
			// members
			Actor* pActor;      // 00
			float  fDetection;  // 04
		};
		static_assert(sizeof(ActorAvoidanceData) == 0x8);

		// override (ActorPathHandler)
		virtual ~DetailedActorPathHandler() = default;                                                                      // 00
		virtual ActorPathHandler_PATH_HANDLER_RESULT Init(float a_arg1, float a_arg2) override;                             // 01
		virtual bool InitRotationOnly(float fTargetAngle, bool abForceTurn) override;                                       // 02
		virtual ActorPathHandler_PATH_HANDLER_RESULT Update(float a_arg1) override;                                         // 03
		virtual ActorPathHandler_PATH_HANDLER_RESULT NoPathUpdate(float afDeltaT) override;                                 // 04
		virtual ActorPathHandler_PATH_HANDLER_RESULT UpdateWhilePlayerWaits(float a_arg1) override;                         // 05
		virtual void SetWaitForUpdatedPath(PathingRequest* apRequest) override;                                             // 0E
		virtual void ForceMoveMode(std::uint32_t aiMoveMode) override;                                                      // 15
		virtual void HandlePreviousPathTransition(ActorPathHandler* apOldHander) override;                                  // 16
		virtual void HandleDeletedReference(TESObjectREFR* apRef) override;                                                 // 17
		virtual void PrintCurrentStatus(IDebugText* a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3) override;  // 18
		virtual void UpdateDebugGeometry() override;                                                                        // 19
		virtual void ClearMovement() override;                                                                              // 1C
		virtual bool WarpToNextNode() override;                                                                             // 1D
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;                                                          // 1E
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;                                                          // 1F
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;                                                      // 20

		DetailedActorPathHandler* ctor(Actor* apActor, ActorMover* apActorMover)
		{
			using func_t = DetailedActorPathHandler*(__thiscall*)(DetailedActorPathHandler*, Actor*, ActorMover*);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::ctor };
			return func(this, apActor, apActorMover);
		}

		DetailedActorPathHandler* ctor(Actor* apActor, ActorMover* apActorMover, NiPointer<PathingSolution>& apPath, PathingRequest* apRequest)
		{
			using func_t = DetailedActorPathHandler*(__thiscall*)(DetailedActorPathHandler*, Actor*, ActorMover*, NiPointer<PathingSolution>&, PathingRequest*);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::ctor_1 };
			return func(this, apActor, apActorMover, apPath, apRequest);
		}

		DetailedActorPathHandler::PATH_HANDLER_DOOR_STATE HandleDoorOpening()
		{
			using func_t = decltype(&DetailedActorPathHandler::HandleDoorOpening);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::HandleDoorOpening };
			return func(this);
		}

		bool IsDoorInPath(std::uint32_t aDoorID)
		{
			using func_t = decltype(&DetailedActorPathHandler::IsDoorInPath);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::IsDoorInPath };
			return func(this, aDoorID);
		}

		bool ComputeMoveMode(float afDeltaT)
		{
			using func_t = decltype(&DetailedActorPathHandler::ComputeMoveMode);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::ComputeMoveMode };
			return func(this, afDeltaT);
		}

		void RotateMoveDelta(float afDeltaT)
		{
			using func_t = decltype(&DetailedActorPathHandler::RotateMoveDelta);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::RotateMoveDelta };
			func(this, afDeltaT);
		}

		void UpdateTetherPosition(float afDist)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateTetherPosition);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateTetherPosition };
			func(this, afDist);
		}

		void UpdateTether(float afDeltaT)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateTether);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateTether };
			func(this, afDeltaT);
		}

		void ComputeHeadingAndLooking(float& arfHeading, float& arfLooking)
		{
			using func_t = decltype(&DetailedActorPathHandler::ComputeHeadingAndLooking);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::ComputeHeadingAndLooking };
			func(this, arfHeading, arfLooking);
		}

		float UpdateHeading(float a_arg1, float& a_arg2)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateHeading);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateHeading };
			return func(this, a_arg1, a_arg2);
		}

		void UpdateLooking(float afDeltaT, float afLookingAngle)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateLooking);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateLooking };
			func(this, afDeltaT, afLookingAngle);
		}

		bool UpdateStaticAvoidance(float afDeltaT)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateStaticAvoidance);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateStaticAvoidance };
			return func(this, afDeltaT);
		}

		static bool UpdateAvoidanceCandidateList()
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateAvoidanceCandidateList);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateAvoidanceCandidateList };
			return func();
		}

		static void BuildAvoidanceList(Actor* apActor, PathingRequest* aspRequest, std::uint32_t aMoveMode, NiPoint3 const& aMoveDelta, DetailedActorPathHandler* apHandler, BSSimpleArray<DetailedActorPathHandler::ActorAvoidanceData, 1024>& aRetCandidates)
		{
			using func_t = decltype(&DetailedActorPathHandler::BuildAvoidanceList);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::BuildAvoidanceList };
			func(apActor, aspRequest, aMoveMode, aMoveDelta, apHandler, aRetCandidates);
		}

		DetailedActorPathHandler::PATH_ACTOR_AVOID_RETURN UpdateActorAvoidance(float a_arg1)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateActorAvoidance);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateActorAvoidance };
			return func(this, a_arg1);
		}

		static bool CheckDetection(Actor* apActor, DetailedActorPathHandler* apHandler, Actor* apOtherActor, NiPoint3 const& aLocation, NiPoint3 const& aVelocityDir, float afDistanceCheck, float a_arg7, float& afAvoidAngleCone, bool a_arg9)
		{
			using func_t = decltype(&DetailedActorPathHandler::CheckDetection);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::CheckDetection };
			return func(apActor, apHandler, apOtherActor, aLocation, aVelocityDir, afDistanceCheck, a_arg7, afAvoidAngleCone, a_arg9);
		}

		static void UpdateAvoidNodesForPath(Actor* apActor, PathingRequest* apRequest, DetailedActorPathHandler* apHandler)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateAvoidNodesForPath);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateAvoidNodesForPath };
			func(apActor, apRequest, apHandler);
		}

		bool CheckForEndRotate()
		{
			using func_t = decltype(&DetailedActorPathHandler::CheckForEndRotate);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::CheckForEndRotate };
			return func(this);
		}

		bool InitRotationMode(float a_arg1, bool a_arg2, bool abForceTurn)
		{
			using func_t = decltype(&DetailedActorPathHandler::InitRotationMode);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::InitRotationMode };
			return func(this, a_arg1, a_arg2, abForceTurn);
		}

		void FindPathStartingLocation(float afPercentTraveled)
		{
			using func_t = decltype(&DetailedActorPathHandler::FindPathStartingLocation);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::FindPathStartingLocation };
			func(this, afPercentTraveled);
		}

		float UpdateRotation(float afDeltaT)
		{
			using func_t = decltype(&DetailedActorPathHandler::UpdateRotation);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::UpdateRotation };
			return func(this, afDeltaT);
		}

		ActorPathHandler_PATH_HANDLER_RESULT CheckGoalReached()
		{
			using func_t = decltype(&DetailedActorPathHandler::CheckGoalReached);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::CheckGoalReached };
			return func(this);
		}

		void ResetMoveModeAndDelta()
		{
			using func_t = decltype(&DetailedActorPathHandler::ResetMoveModeAndDelta);
			static REL::Relocation<func_t> func{ Offsets::DetailedActorPathHandler::ResetMoveModeAndDelta };
			func(this);
		}

	public:
		// members
		float                                             fTetherMinMove;                          // 14
		float                                             fTetherDistFromActor;                    // 18
		NiPoint3                                          MoveDelta;                               // 1C
		NiPoint3                                          BlockedTargetPoint;                      // 28
		NiPoint3                                          TetherTargetPoint;                       // 34
		NiPoint3                                          LastLocation;                            // 40
		NiPoint3                                          LastTetherPoint;                         // 4C
		BSSimpleList<Actor*>                              ActorAvoidList;                          // 58
		std::uint32_t                                     MoveMode;                                // 60
		std::uint32_t                                     iCurrentNodeIndex;                       // 64
		float                                             fRotateGoal;                             // 68
		float                                             fPathLength;                             // 6C
		float                                             fCurrentSplineT;                         // 70
		float                                             fActorAvoidanceTimer;                    // 74
		float                                             fAvoidanceDetectionValue;                // 78
		std::int32_t                                      iUnblockDirection;                       // 7C
		float                                             fAlternateFacingAngle;                   // 80
		float                                             fBlockedStartAngle;                      // 84
		float                                             fBlockTime;                              // 88
		float                                             fTimeInAnim;                             // 8C
		float                                             fRunWalkTime;                            // 90
		float                                             fMinRotateTime;                          // 94
		float                                             fWaitTime;                               // 98
		float                                             fLastFrameMinMoveDelta;                  // 9C
		NiPoint3                                          LastFrameMinMoveDelta;                   // A0
		float                                             fGoalRadiusSqr;                          // AC
		float                                             fFallTime;                               // B0
		float                                             fDistanceTraveled;                       // B4
		float                                             fIgnoreLookAtPointTimer;                 // B8
		float                                             fLastRotationApplied;                    // BC
		bool                                              bIgnoreInitialRotation;                  // C0
		bool                                              bIgnoreInitialRotationKeepActorHeading;  // C1
		std::uint16_t                                     padC2;                                   // C2
		float                                             fIgnoreInitialRotationTetherParam;       // C4
		PATH_HANDLER_STATE                                eState;                                  // C8
		DetailedActorPathHandler::PATH_RUNNING_BLEND      eBlendRunning;                           // CC
		DetailedActorPathHandler::PATH_AVOID_STATE        eAvoidState;                             // D0
		DetailedActorPathHandler::PATH_HANDLER_DOOR_STATE eDoorState;                              // D4
		TESObjectREFR*                                    pCurrentDoor;                            // D8
		bool                                              bRotateMode;                             // DC
		bool                                              bRotateCCW;                              // DD
		bool                                              bMovementBlocked;                        // DE
		bool                                              bEndUpdatePath;                          // DF
		bool                                              bWaitingForUpdate;                       // E0
		bool                                              bIgnoreLookAtPoint;                      // E1
		bool                                              bDeltaComputedThisFrame;                 // E2
		std::uint8_t                                      padE3;                                   // E3
	};
	static_assert(sizeof(DetailedActorPathHandler) == 0xE4);
}
