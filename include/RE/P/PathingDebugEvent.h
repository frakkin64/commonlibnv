#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathingDebugEvent
	{
	public:
		enum class PATHING_EVENT : std::int32_t
		{
			kPATHING_EVENT_NONE = -1,
			kPATHING_EVENT_NEW_PATH_REQUEST = 0x0,
			kPATHING_EVENT_NEW_SOLUTION = 0x1,
			kPATHING_EVENT_REQUEST_ROTATE = 0x2,
			kPATHING_EVENT_MOVEMENT_COMPLETE = 0x3,
			kPATHING_EVENT_MOVEMENT_BLOCKED = 0x4,
			kPATHING_EVENT_ACTOR_AVOID_WAIT = 0x5,
			kPATHING_EVENT_ACTOR_AVOID_REPATH = 0x6,
			kPATHING_EVENT_FAILED = 0x7,
			kPATHING_EVENT_WARPED = 0x8,
			kPATHING_EVENT_ROTATION_COMPLETE = 0x9,
			kPATHING_EVENT_SET_LOOKAT_TARGET = 0xA,
			kPATHING_EVENT_CLEAR_LOOKAT_TARGET = 0xB,
			kPATHING_EVENT_STOP_MOVING = 0xC,
			kPATHING_EVENT_MOVE_TO_HIGH = 0xD,
			kPATHING_EVENT_MOVE_TO_LOW = 0xE,
		};

		// members
		PathingDebugEvent::PATHING_EVENT eEventType;    // 00?
		float                            fTimeElapsed;  // 04?
		std::int32_t                     iCount;        // 08?
	};
}
