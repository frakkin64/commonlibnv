#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PACK_SCHED_DATA.h"
#include "RE/P/PSDAYOFWEEK.h"

namespace RE
{
	class PackageSchedule
	{
	public:
		PSDAYOFWEEK GetStartDayOfWeek()
		{
			using func_t = decltype(&PackageSchedule::GetStartDayOfWeek);
			static REL::Relocation<func_t> func{ Offsets::PackageSchedule::GetStartDayOfWeek };
			return func(this);
		}

		char GetStartDate()
		{
			using func_t = decltype(&PackageSchedule::GetStartDate);
			static REL::Relocation<func_t> func{ Offsets::PackageSchedule::GetStartDate };
			return func(this);
		}

		bool Compare(PackageSchedule* apCompare)
		{
			using func_t = decltype(&PackageSchedule::Compare);
			static REL::Relocation<func_t> func{ Offsets::PackageSchedule::Compare };
			return func(this, apCompare);
		}

		void Save()
		{
			using func_t = decltype(&PackageSchedule::Save);
			static REL::Relocation<func_t> func{ Offsets::PackageSchedule::Save };
			func(this);
		}

		char GetStartTime()
		{
			using func_t = decltype(&PackageSchedule::GetStartTime);
			static REL::Relocation<func_t> func{ Offsets::PackageSchedule::GetStartTime };
			return func(this);
		}

	public:
		// members
		PACK_SCHED_DATA PSData;  // 00
	};
	static_assert(sizeof(PackageSchedule) == 0x8);
}
