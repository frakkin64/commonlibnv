#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class BGSSaveGameBuffer;
	class DetectionState;

	class ActorCause
	{
	public:
		void IncRefCount()
		{
			using func_t = decltype(&ActorCause::IncRefCount);
			static REL::Relocation<func_t> func{ Offsets::ActorCause::IncRefCount };
			func(this);
		}

		void DecRefCount()
		{
			using func_t = decltype(&ActorCause::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::ActorCause::DecRefCount };
			func(this);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&ActorCause::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::ActorCause::SaveGame };
			func(this, apSaveGameBuffer);
		}

	public:
		// members
		Actor*                         pActor;         // 00
		BSSimpleList<DetectionState*>* pWitnesses;     // 04
		NiPoint3                       kOrigin;        // 08
		std::int32_t                   iActorCauseID;  // 14
		std::int32_t                   iRefCount;      // 18
	};
	static_assert(sizeof(ActorCause) == 0x1C);
}
