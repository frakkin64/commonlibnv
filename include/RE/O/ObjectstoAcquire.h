#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACQUIRE_TYPE.h"

namespace RE
{
	class ExtraDataList;
	class TESBoundObject;
	class TESObjectREFR;

	class ObjectstoAcquire
	{
	public:
		// members
		TESObjectREFR*  pRef;        // 00
		TESBoundObject* pObject;     // 04
		bool            bSteal;      // 08
		bool            bKill;       // 09
		std::uint16_t   pad0A;       // 0A
		std::int32_t    iamount;     // 0C
		std::int32_t    iWantValue;  // 10
		ExtraDataList*  pExtra;      // 14
		ACQUIRE_TYPE    eType;       // 18
	};
	static_assert(sizeof(ObjectstoAcquire) == 0x1C);
}
