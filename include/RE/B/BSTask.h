#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class __declspec(novtable) BSTask
	{
	public:
		// add
		virtual ~BSTask() = default;                                             // 00
		virtual void Run();                                                      // 01
		virtual void Finish();                                                   // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner);   // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiSize);  // 04

		// members
		volatile std::int32_t iRefCount;
		BS_TASK_STATE eState;
		T Key;
	};
}
