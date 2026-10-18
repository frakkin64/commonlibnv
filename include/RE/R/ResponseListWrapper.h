#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESResponse;

	class ResponseListWrapper
	{
	public:
		void ClearResponseList()
		{
			using func_t = decltype(&ResponseListWrapper::ClearResponseList);
			static REL::Relocation<func_t> func{ Offsets::ResponseListWrapper::ClearResponseList };
			func(this);
		}

		void CopyResponseList(TESResponse* apHead)
		{
			using func_t = decltype(&ResponseListWrapper::CopyResponseList);
			static REL::Relocation<func_t> func{ Offsets::ResponseListWrapper::CopyResponseList };
			func(this, apHead);
		}

		void AddTail(TESResponse* apRes)
		{
			using func_t = decltype(&ResponseListWrapper::AddTail);
			static REL::Relocation<func_t> func{ Offsets::ResponseListWrapper::AddTail };
			func(this, apRes);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ResponseListWrapper*);
			static REL::Relocation<func_t> func{ Offsets::ResponseListWrapper::dtor };
			func(this);
		}

	public:
		// members
		TESResponse* pHead;  // 00
	};
}
