#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMemoryRouter.h"

namespace RE
{
	class bhkTaskletManagerCallback_bhkThreadStateElem
	{
	public:
		// members
		std::uint32_t  ThreadID;      // 00?
		hkMemoryRouter LocalRouter;   // 04?
		void*          pStackBuffer;  // 28?
	};
}
