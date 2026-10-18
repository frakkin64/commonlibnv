#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESForm;

	class BGSChangeFlags
	{
	public:
		bool CheckFlags(std::int32_t aiFlags)
		{
			using func_t = decltype(&BGSChangeFlags::CheckFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSChangeFlags::CheckFlags };
			return func(this, aiFlags);
		}

		void RemoveFlags(std::int32_t aiFlags)
		{
			using func_t = decltype(&BGSChangeFlags::RemoveFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSChangeFlags::RemoveFlags };
			func(this, aiFlags);
		}

		static char const* GetFlagName(std::int32_t aiFlag, std::uint32_t aiFormType, bool abShortName)
		{
			using func_t = decltype(&BGSChangeFlags::GetFlagName);
			static REL::Relocation<func_t> func{ Offsets::BGSChangeFlags::GetFlagName };
			return func(aiFlag, aiFormType, abShortName);
		}

		bool ReduceToForcedChanges(TESForm* apForm)
		{
			using func_t = decltype(&BGSChangeFlags::ReduceToForcedChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSChangeFlags::ReduceToForcedChanges };
			return func(this, apForm);
		}

		void AddFlags(std::int32_t aiFlags)
		{
			using func_t = decltype(&BGSChangeFlags::AddFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSChangeFlags::AddFlags };
			func(this, aiFlags);
		}

		static BGSChangeFlags GetUnrevertibleChanges(BGSChangeFlags result, BGSChangeFlags aiOldChangeFlags, std::uint32_t aiNewChangeFlags, bool aiFormType)
		{
			using func_t = decltype(&BGSChangeFlags::GetUnrevertibleChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSChangeFlags::GetUnrevertibleChanges };
			return func(result, aiOldChangeFlags, aiNewChangeFlags, aiFormType);
		}

	public:
		// members
		std::int32_t iFlags;  // 00
	};
}
