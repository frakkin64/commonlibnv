#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCriticalSection.h"
#include "RE/B/bhkTaskletManagerCallback_bhkThreadStateElem.h"

namespace RE
{
	class bhkTaskletManagerCallback_bhkThreadState
	{
	public:
		void CreateThreadMemory()
		{
			using func_t = decltype(&bhkTaskletManagerCallback_bhkThreadState::CreateThreadMemory);
			static REL::Relocation<func_t> func{ Offsets::bhkTaskletManagerCallback_bhkThreadState::CreateThreadMemory };
			func(this);
		}

	public:
		// members
		BSCriticalSection                            StateLock;  // 00?
		bhkTaskletManagerCallback_bhkThreadStateElem Elem[16];   // 18?
		std::int32_t                                 iNumElem;   // 2D8?
	};
}
