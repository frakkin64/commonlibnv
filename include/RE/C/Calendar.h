#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/C/CALENDAR_MONTH.h"
#include "RE/D/DAYS_OF_THE_WEEK.h"

namespace RE
{
	class TESGlobal;

	class Calendar
	{
	public:
		void InitGlobals()
		{
			using func_t = decltype(&Calendar::InitGlobals);
			static REL::Relocation<func_t> func{ Offsets::Calendar::InitGlobals };
			func(this);
		}

		float GetTimeScale()
		{
			using func_t = decltype(&Calendar::GetTimeScale);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetTimeScale };
			return func(this);
		}

		BSStringT<char> GetDateString()
		{
			using func_t = decltype(&Calendar::GetDateString);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetDateString };
			return func(this);
		}

		std::uint32_t GetYear()
		{
			using func_t = decltype(&Calendar::GetYear);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetYear };
			return func(this);
		}

		CALENDAR_MONTH GetMonth()
		{
			using func_t = decltype(&Calendar::GetMonth);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetMonth };
			return func(this);
		}

		char GetDay()
		{
			using func_t = decltype(&Calendar::GetDay);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetDay };
			return func(this);
		}

		float GetHour()
		{
			using func_t = decltype(&Calendar::GetHour);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetHour };
			return func(this);
		}

		std::uint32_t GetDaysPassed()
		{
			using func_t = decltype(&Calendar::GetDaysPassed);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetDaysPassed };
			return func(this);
		}

		std::uint32_t GetHoursPassed()
		{
			using func_t = decltype(&Calendar::GetHoursPassed);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetHoursPassed };
			return func(this);
		}

		DAYS_OF_THE_WEEK GetDayOfTheWeek()
		{
			using func_t = decltype(&Calendar::GetDayOfTheWeek);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetDayOfTheWeek };
			return func(this);
		}

		char const* GetDayOfWeekString()
		{
			using func_t = decltype(&Calendar::GetDayOfWeekString);
			static REL::Relocation<func_t> func{ Offsets::Calendar::GetDayOfWeekString };
			return func(this);
		}

	public:
		// members
		TESGlobal*    pGameYear;         // 00
		TESGlobal*    pGameMonth;        // 04
		TESGlobal*    pGameDay;          // 08
		TESGlobal*    pGameHour;         // 0C
		TESGlobal*    pGameDaysPassed;   // 10
		TESGlobal*    pTimeScale;        // 14
		std::uint32_t iMidnightsPassed;  // 18
	};
}
