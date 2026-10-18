#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class Crime;

	class ExtraPlayerCrimeList :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPlayerCrimeList };
		static constexpr auto VTABLE{ VTABLE::ExtraPlayerCrimeList };

		// override (BSExtraData)
		virtual ~ExtraPlayerCrimeList() = default;  // 00

		ExtraPlayerCrimeList* ctor()
		{
			using func_t = ExtraPlayerCrimeList*(__thiscall*)(ExtraPlayerCrimeList*);
			static REL::Relocation<func_t> func{ Offsets::ExtraPlayerCrimeList::ctor };
			return func(this);
		}

		ExtraPlayerCrimeList* ctor(Crime* apCrime)
		{
			using func_t = ExtraPlayerCrimeList*(__thiscall*)(ExtraPlayerCrimeList*, Crime*);
			static REL::Relocation<func_t> func{ Offsets::ExtraPlayerCrimeList::ctor_1 };
			return func(this, apCrime);
		}

	public:
		// members
		BSSimpleList<Crime*>* pCrime;  // 0C
	};
	static_assert(sizeof(ExtraPlayerCrimeList) == 0x10);
}
