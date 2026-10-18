#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;
	class ThreadSpecificInterface;

	template <class T>
	class ThreadSpecificInterfaceManager
	{
	public:
		class ThreadSpecificInterface
		{
		public:
			// members
			volatile std::uint32_t iThreadID;
			T* volatile pInterface;
		};

		// members
		std::uint32_t iMaxThreads;
		std::uint32_t iThreadLocalStorageIndex;
		ThreadSpecificInterface* pInterfaces;
		volatile std::int32_t iCurrentThreadCount;
	};
}
