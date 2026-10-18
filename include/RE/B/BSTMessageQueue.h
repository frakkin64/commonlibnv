#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class __declspec(novtable) BSTMessageQueue
	{
	public:
		// add
		virtual ~BSTMessageQueue() = default;   // 00
		virtual bool Push(const T* a_arg1);     // 01
		virtual bool TryPush(const T* a_arg1);  // 02
		virtual bool Pop(T* a_arg1);            // 03
		virtual bool TryPop(T* a_arg1);         // 04
	};
}
