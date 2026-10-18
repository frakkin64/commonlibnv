#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPathHandler_PATH_HANDLER_RESULT.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

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

	class __declspec(novtable) ActorPathHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorPathHandler };
		static constexpr auto VTABLE{ VTABLE::ActorPathHandler };

		using PATH_HANDLER_RESULT = ActorPathHandler_PATH_HANDLER_RESULT;

		// add
		virtual ~ActorPathHandler() = default;                                                                     // 00
		virtual ActorPathHandler_PATH_HANDLER_RESULT Init(float a_arg1, float a_arg2);                             // 01
		virtual bool InitRotationOnly(float fTargetAngle, bool abForceTurn);                                       // 02
		virtual ActorPathHandler_PATH_HANDLER_RESULT Update(float a_arg1);                                         // 03
		virtual ActorPathHandler_PATH_HANDLER_RESULT NoPathUpdate(float afDeltaT);                                 // 04
		virtual ActorPathHandler_PATH_HANDLER_RESULT UpdateWhilePlayerWaits(float a_arg1);                         // 05
		virtual float GetDistanceTraveled();                                                                       // 06
		virtual float GetPercentTraveled();                                                                        // 07
		virtual NiPoint3* GetNextNodeLocation(NiPoint3* a_arg1);                                                   // 08
		virtual bool GetNodeLocation(std::uint32_t a_arg1, NiPoint3* a_arg2);                                      // 09
		virtual float GetDistanceRemaining();                                                                      // 0A
		virtual NiPoint3* ComputeApproximateLocation(NiPoint3* a_arg1, float a_arg2);                              // 0B
		virtual std::uint32_t GetCurrentNodeIndex();                                                               // 0C
		virtual bool IsDetailedPathHandler();                                                                      // 0D
		virtual void SetWaitForUpdatedPath(PathingRequest* apRequest);                                             // 0E
		virtual bool IsWaitingForAvoidance();                                                                      // 0F
		virtual bool IsMovementBlocked();                                                                          // 10
		virtual bool ComputePathPassesThroughPlayersArea();                                                        // 11
		virtual std::uint32_t GetMoveMode();                                                                       // 12
		virtual bool GetMoveDelta(NiPoint3* a_arg1);                                                               // 13
		virtual bool GetNextTetherPoint(NiPoint3* a_arg1);                                                         // 14
		virtual void ForceMoveMode(std::uint32_t aiMoveMode);                                                      // 15
		virtual void HandlePreviousPathTransition(ActorPathHandler* apOldHander);                                  // 16
		virtual void HandleDeletedReference(TESObjectREFR* apRef);                                                 // 17
		virtual void PrintCurrentStatus(IDebugText* a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3);  // 18
		virtual void UpdateDebugGeometry();                                                                        // 19
		virtual void SetLookAtTarget(NiPoint3 aPoint);                                                             // 1A
		virtual void ClearLookAtTarget();                                                                          // 1B
		virtual void ClearMovement();                                                                              // 1C
		virtual bool WarpToNextNode();                                                                             // 1D
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1);                                                          // 1E
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1);                                                          // 1F
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1);                                                      // 20

		ActorPathHandler* ctor(Actor* apActor, ActorMover* apActorMover, NiPointer<PathingSolution>& apPath, PathingRequest* apRequest)
		{
			using func_t = ActorPathHandler*(__thiscall*)(ActorPathHandler*, Actor*, ActorMover*, NiPointer<PathingSolution>&, PathingRequest*);
			static REL::Relocation<func_t> func{ Offsets::ActorPathHandler::ctor };
			return func(this, apActor, apActorMover, apPath, apRequest);
		}

	public:
		// members
		Actor*                     pActor;       // 04
		ActorMover*                pActorMover;  // 08
		NiPointer<PathingSolution> spPath;       // 0C
		NiPointer<PathingRequest>  spRequest;    // 10
	};
	static_assert(sizeof(ActorPathHandler) == 0x14);
}
