#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorPathHandler.h"
#include "RE/A/ActorPathHandler_PATH_HANDLER_RESULT.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class ActorMover;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class IDebugText;
	class NiPoint3;
	class PathingRequest;
	class PathingSolution;

	class VirtualActorPathHandler :
		public ActorPathHandler  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::VirtualActorPathHandler };
		static constexpr auto VTABLE{ VTABLE::VirtualActorPathHandler };

		// override (ActorPathHandler)
		virtual ~VirtualActorPathHandler() = default;                                                                       // 00
		virtual ActorPathHandler_PATH_HANDLER_RESULT Init(float a_arg1, float a_arg2) override;                             // 01
		virtual ActorPathHandler_PATH_HANDLER_RESULT Update(float a_arg1) override;                                         // 03
		virtual ActorPathHandler_PATH_HANDLER_RESULT UpdateWhilePlayerWaits(float a_arg1) override;                         // 05
		virtual void PrintCurrentStatus(IDebugText* a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3) override;  // 18
		virtual void ClearMovement() override;                                                                              // 1C
		virtual void SaveGame(BGSSaveFormBuffer* a_arg1) override;                                                          // 1E
		virtual void LoadGame(BGSLoadFormBuffer* a_arg1) override;                                                          // 1F
		virtual void InitLoadGame(BGSLoadFormBuffer* a_arg1) override;                                                      // 20

		VirtualActorPathHandler* ctor(Actor* apActor, ActorMover* apActorMover, NiPointer<PathingSolution>& apPath, PathingRequest* apRequest)
		{
			using func_t = VirtualActorPathHandler*(__thiscall*)(VirtualActorPathHandler*, Actor*, ActorMover*, NiPointer<PathingSolution>&, PathingRequest*);
			static REL::Relocation<func_t> func{ Offsets::VirtualActorPathHandler::ctor };
			return func(this, apActor, apActorMover, apPath, apRequest);
		}

		std::int32_t UseDoorAtNode(NiPoint3& aNewLoc)
		{
			using func_t = decltype(&VirtualActorPathHandler::UseDoorAtNode);
			static REL::Relocation<func_t> func{ Offsets::VirtualActorPathHandler::UseDoorAtNode };
			return func(this, aNewLoc);
		}

	public:
		// members
		std::uint32_t iCurrentNodeIndex;  // 14
		float         fDistanceTraveled;  // 18
		float         fPathLength;        // 1C
	};
}
