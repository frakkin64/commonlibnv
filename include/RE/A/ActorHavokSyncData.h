#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Actor;
	class NiAVObject;

	class ActorHavokSyncData
	{
	public:
		// members
		Actor*      pActor;  // 00
		NiAVObject* pObj;    // 04
	};
	static_assert(sizeof(ActorHavokSyncData) == 0x8);
}
