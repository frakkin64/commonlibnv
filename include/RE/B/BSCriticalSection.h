#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSCriticalSection
	{
	public:
		bool TryLock()
		{
			using func_t = decltype(&BSCriticalSection::TryLock);
			static REL::Relocation<func_t> func{ Offsets::BSCriticalSection::TryLock };
			return func(this);
		}

		BSCriticalSection* ctor()
		{
			using func_t = BSCriticalSection*(__thiscall*)(BSCriticalSection*);
			static REL::Relocation<func_t> func{ Offsets::BSCriticalSection::ctor };
			return func(this);
		}

		void Enter(char const* apName)
		{
			using func_t = decltype(&BSCriticalSection::Enter);
			static REL::Relocation<func_t> func{ Offsets::BSCriticalSection::Enter };
			func(this, apName);
		}

		void Leave()
		{
			using func_t = decltype(&BSCriticalSection::Leave);
			static REL::Relocation<func_t> func{ Offsets::BSCriticalSection::Leave };
			func(this);
		}

		void Unlock()
		{
			using func_t = decltype(&BSCriticalSection::Unlock);
			static REL::Relocation<func_t> func{ Offsets::BSCriticalSection::Unlock };
			func(this);
		}

	public:
		// members
		// not placed: ulThreadOwner(absent), ulPrevOwner(absent), uiLockCount(absent)
		_RTL_CRITICAL_SECTION CriticalSection;  // 00
	};
}
