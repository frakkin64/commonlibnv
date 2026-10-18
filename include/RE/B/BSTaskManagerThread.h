#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTaskThread.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSTaskManager;

	template <class T>
	class BSTaskManagerThread :
		public BSTaskThread  // 00
	{
	public:
		// override (BSTaskThread)
		virtual ~BSTaskManagerThread() = default;  // 00
		virtual void ThreadUpdate();               // 01

		// members
		BSTaskManager<T>* pOwner;
	};
}
