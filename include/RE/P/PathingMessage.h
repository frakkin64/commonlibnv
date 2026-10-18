#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PATHING_MESSAGE_TYPE.h"

namespace RE
{
	class PathingTaskData;

	class PathingMessage
	{
	public:
		PathingMessage* ctor()
		{
			using func_t = PathingMessage*(__thiscall*)(PathingMessage*);
			static REL::Relocation<func_t> func{ Offsets::PathingMessage::ctor };
			return func(this);
		}

	public:
		// members
		PATHING_MESSAGE_TYPE msgType;    // 00
		PathingTaskData*     pTaskData;  // 04
	};
}
