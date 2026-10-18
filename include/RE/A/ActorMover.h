#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPathHandler_PATH_HANDLER_RESULT.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class Actor;
	class ActorPathHandler;
	class ActorPathingMessageQueue;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PathingAvoidNodeArray;
	class PathingRequest;
	class PathingSolution;
	class TESObjectCELL;
	class TESWorldSpace;

	class __declspec(novtable) ActorMover
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorMover };
		static constexpr auto VTABLE{ VTABLE::ActorMover };

		enum class ACTOR_MOVER_STATE : std::int32_t
		{
			kACTOR_MOVER_STATE_INVALID = 0x0,
			kACTOR_MOVER_STATE_INIT = 0x1,
			kACTOR_MOVER_STATE_WAITING = 0x2,
			kACTOR_MOVER_STATE_MOVING = 0x3,
			kACTOR_MOVER_STATE_ROTATING = 0x4,
			kACTOR_MOVER_STATE_LAST_UPDATE = 0x5,
			kACTOR_MOVER_STATE_FINISHED = 0x6,
			kACTOR_MOVER_STATE_FAILED = 0x7,
			kACTOR_MOVER_STATE_FAILED_PROCESS_UPDATE = 0x8,
		};

		enum class END_OF_PATH_CHECK_RESULT : std::int32_t
		{
			kEND_OF_PATH_OK = 0x0,
			kEND_OF_PATH_TELEPORT = 0x1,
			kEND_OF_PATH_FAILED = 0x2,
		};

		// add
		virtual ~ActorMover() = default;                                           // 00
		virtual void SetMoveModePreference(std::uint32_t auiPreferredMoveMode);    // 01
		virtual void ClearMoveModePreference(std::uint32_t auiPreferredMoveMode);  // 02
		virtual void ForceMoveMode(std::uint32_t aiMoveMode);                      // 03
		virtual void ClearForcedMoveMode();                                        // 04
		virtual void Update(float fdeltaT);                                        // 05
		virtual void UpdateTurnTimer(float fdeltaT);                               // 06
		virtual std::uint32_t GetPreferredMoveMode();                              // 07
		virtual std::uint32_t GetMoveMode() const;                                 // 08
		virtual bool GetMoveDelta(NiPoint3* a_arg1) const;                         // 09
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer);                // 0A
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                // 0B
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);            // 0C
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);          // 0D
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer);                  // 0E

		bool HasLookAtTarget() const
		{
			using func_t = decltype(&ActorMover::HasLookAtTarget);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::HasLookAtTarget };
			return func(this);
		}

		ActorMover* ctor(Actor* apActor)
		{
			using func_t = ActorMover*(__thiscall*)(ActorMover*, Actor*);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::ctor };
			return func(this, apActor);
		}

		void ClearCurrentData()
		{
			using func_t = decltype(&ActorMover::ClearCurrentData);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::ClearCurrentData };
			func(this);
		}

		bool SetGoal(NiPoint3 const& aGoalLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace, float a_arg4, PathingAvoidNodeArray* a_arg5)
		{
			using func_t = decltype(&ActorMover::SetGoal);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::SetGoal };
			return func(this, aGoalLocation, apCell, apWorldSpace, a_arg4, a_arg5);
		}

		bool SetGoalAndAngle(NiPoint3 const& aGoalLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace, float afAngleToFace, float a_arg5, PathingAvoidNodeArray* a_arg6)
		{
			using func_t = decltype(&ActorMover::SetGoalAndAngle);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::SetGoalAndAngle };
			return func(this, aGoalLocation, apCell, apWorldSpace, afAngleToFace, a_arg5, a_arg6);
		}

		static void BuildRequest(Actor* apActor, PathingRequest* apRequest, NiPoint3 const& aGoalLocation, TESObjectCELL* apCell, TESWorldSpace* apWorldSpace, float a_arg6, PathingAvoidNodeArray* a_arg7)
		{
			using func_t = decltype(&ActorMover::BuildRequest);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::BuildRequest };
			func(apActor, apRequest, aGoalLocation, apCell, apWorldSpace, a_arg6, a_arg7);
		}

		void OnMoveToHigh()
		{
			using func_t = decltype(&ActorMover::OnMoveToHigh);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::OnMoveToHigh };
			func(this);
		}

		bool IsWaitingForAvoidance() const
		{
			using func_t = decltype(&ActorMover::IsWaitingForAvoidance);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::IsWaitingForAvoidance };
			return func(this);
		}

		float GetDistanceRemaining() const
		{
			using func_t = decltype(&ActorMover::GetDistanceRemaining);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::GetDistanceRemaining };
			return func(this);
		}

		bool IsPathingComplete() const
		{
			using func_t = decltype(&ActorMover::IsPathingComplete);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::IsPathingComplete };
			return func(this);
		}

		bool IsPathing() const
		{
			using func_t = decltype(&ActorMover::IsPathing);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::IsPathing };
			return func(this);
		}

		bool RequestRotateActor(NiPoint3 abForceTurn, bool a_arg2)
		{
			using func_t = bool (ActorMover::*)(NiPoint3, bool);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::RequestRotateActor };
			return func(this, abForceTurn, a_arg2);
		}

		bool RequestRotateActor(float a_arg1, bool a_arg2)
		{
			using func_t = bool (ActorMover::*)(float, bool);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::RequestRotateActor_1 };
			return func(this, a_arg1, a_arg2);
		}

		void ForceStopMoving()
		{
			using func_t = decltype(&ActorMover::ForceStopMoving);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::ForceStopMoving };
			func(this);
		}

		std::uint32_t GetPreferredMoveModeType() const
		{
			using func_t = decltype(&ActorMover::GetPreferredMoveModeType);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::GetPreferredMoveModeType };
			return func(this);
		}

		bool GetLookAtPoint(NiPoint3& apPoint) const
		{
			using func_t = decltype(&ActorMover::GetLookAtPoint);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::GetLookAtPoint };
			return func(this, apPoint);
		}

		bool GetCurrentGoal(NiPoint3* apRetLocation) const
		{
			using func_t = bool (ActorMover::*)(NiPoint3*) const;
			static REL::Relocation<func_t> func{ Offsets::ActorMover::GetCurrentGoal };
			return func(this, apRetLocation);
		}

		bool GetCurrentGoal(PathingLocation* apRetLocation) const
		{
			using func_t = bool (ActorMover::*)(PathingLocation*) const;
			static REL::Relocation<func_t> func{ Offsets::ActorMover::GetCurrentGoal_1 };
			return func(this, apRetLocation);
		}

		bool MoveActorToLocation(NiPoint3 const& aNewLoc)
		{
			using func_t = decltype(&ActorMover::MoveActorToLocation);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::MoveActorToLocation };
			return func(this, aNewLoc);
		}

	protected:
		bool BackGroundBuildPath(PathingRequest const* apRequest)
		{
			using func_t = decltype(&ActorMover::BackGroundBuildPath);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::BackGroundBuildPath };
			return func(this, apRequest);
		}

		void DoStartMoving(float afDelta)
		{
			using func_t = decltype(&ActorMover::DoStartMoving);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::DoStartMoving };
			func(this, afDelta);
		}

		void HandleMovementResult(ActorPathHandler_PATH_HANDLER_RESULT aeResult)
		{
			using func_t = decltype(&ActorMover::HandleMovementResult);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::HandleMovementResult };
			func(this, aeResult);
		}

		ActorMover::END_OF_PATH_CHECK_RESULT EndOfCurrentPathCheck()
		{
			using func_t = decltype(&ActorMover::EndOfCurrentPathCheck);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::EndOfCurrentPathCheck };
			return func(this);
		}

		void DoStopMoving()
		{
			using func_t = decltype(&ActorMover::DoStopMoving);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::DoStopMoving };
			func(this);
		}

		void FinishMoving(bool abClearHandler)
		{
			using func_t = decltype(&ActorMover::FinishMoving);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::FinishMoving };
			func(this, abClearHandler);
		}

		void HandleProcessLevelChange()
		{
			using func_t = decltype(&ActorMover::HandleProcessLevelChange);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::HandleProcessLevelChange };
			func(this);
		}

		void SetCurrentFrameMoveModeAndDelta()
		{
			using func_t = decltype(&ActorMover::SetCurrentFrameMoveModeAndDelta);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::SetCurrentFrameMoveModeAndDelta };
			func(this);
		}

		void SetPathingFailed(bool abValue)
		{
			using func_t = decltype(&ActorMover::SetPathingFailed);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::SetPathingFailed };
			func(this, abValue);
		}

		void WarpToNextNode()
		{
			using func_t = decltype(&ActorMover::WarpToNextNode);
			static REL::Relocation<func_t> func{ Offsets::ActorMover::WarpToNextNode };
			func(this);
		}

	public:
		// members
		NiPoint3                            LookAtPoint;                // 04
		NiPoint3                            CachedMoveDelta;            // 10
		NiPointer<PathingRequest>           spCurrentRequest;           // 1C
		NiPointer<PathingSolution>          spCurrentPath;              // 20
		ActorPathHandler*                   pCurrentPathHandler;        // 24
		Actor*                              pActor;                     // 28
		std::uint32_t                       DetectionDoorID;            // 2C
		NiPointer<ActorPathingMessageQueue> spMessageQueue;             // 30
		std::uint32_t                       uiPreferredMoveMode;        // 34
		std::uint32_t                       uiForcedMoveMode;           // 38
		std::uint32_t                       iCachedLastValidMoveMode;   // 3C
		std::uint16_t                       iPreviousNode;              // 40
		std::uint16_t                       iNextNode;                  // 42
		PathingLocation                     FailedPathDestination;      // 44
		ActorMover::ACTOR_MOVER_STATE       eState;                     // 6C
		bool                                bPathingFailed;             // 70
		bool                                bForceMoveMode;             // 71
		bool                                bStopMovementNextUpdate;    // 72
		bool                                bFaceTargetPoint;           // 73
		bool                                bWaitingForPath;            // 74
		bool                                bActorChangedProcessLevel;  // 75
		bool                                bInDialog;                  // 76
		bool                                bHaveValidDeltaThisFrame;   // 77
		bool                                bStopCurrentMoveAnim;       // 78
		std::uint8_t                        pad79[0x3];                 // 79
		std::uint32_t                       iLastFailureTimeStamp;      // 7C
		std::uint32_t                       iFirstFailureTimeStamp;     // 80
		std::int32_t                        iContinuedFailureCount;     // 84
	};
	static_assert(sizeof(ActorMover) == 0x88);
}
