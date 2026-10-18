#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESActorBase;
	class TESForm;
	class TESNPC;
	class TESRace;

	// not confirmed: no named code in the executable refers to this type
	class DispositionParamData
	{
	public:
		// members
		TESRace*      pRace;             // 00?
		TESActorBase* pActorBase;        // 04?
		TESNPC*       pNpc;              // 08?
		TESForm*      pOwner;            // 0C?
		std::int32_t  iBaseDisposition;  // 10?
		std::int32_t  iResponsibility;   // 14?
	};
}
