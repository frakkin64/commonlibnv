#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/P/PATHING_MESSAGE_TYPE.h"

namespace RE
{
	class PathingSolution;

	class ActorPathingMessage
	{
	public:
		ActorPathingMessage* ctor()
		{
			using func_t = ActorPathingMessage*(__thiscall*)(ActorPathingMessage*);
			static REL::Relocation<func_t> func{ Offsets::ActorPathingMessage::ctor };
			return func(this);
		}

		ActorPathingMessage* ctor(PATHING_MESSAGE_TYPE aType, NiPointer<PathingSolution>& aspSolution)
		{
			using func_t = ActorPathingMessage*(__thiscall*)(ActorPathingMessage*, PATHING_MESSAGE_TYPE, NiPointer<PathingSolution>&);
			static REL::Relocation<func_t> func{ Offsets::ActorPathingMessage::ctor_1 };
			return func(this, aType, aspSolution);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ActorPathingMessage*);
			static REL::Relocation<func_t> func{ Offsets::ActorPathingMessage::dtor };
			func(this);
		}

	public:
		// members
		PATHING_MESSAGE_TYPE       msgType;     // 00
		NiPointer<PathingSolution> spSolution;  // 04
	};
}
