#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LOCK_LEVEL.h"

namespace RE
{
	class TESKey;
	class TESObjectREFR;

	class REFR_LOCK
	{
	public:
		REFR_LOCK* ctor()
		{
			using func_t = REFR_LOCK*(__thiscall*)(REFR_LOCK*);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::ctor };
			return func(this);
		}

		LOCK_LEVEL GetLockLevel(TESObjectREFR* apOwner)
		{
			using func_t = decltype(&REFR_LOCK::GetLockLevel);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::GetLockLevel };
			return func(this, apOwner);
		}

		std::int32_t GetLevel(TESObjectREFR* apOwner)
		{
			using func_t = decltype(&REFR_LOCK::GetLevel);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::GetLevel };
			return func(this, apOwner);
		}

		void SetLocked(bool abLocked)
		{
			using func_t = decltype(&REFR_LOCK::SetLocked);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::SetLocked };
			func(this, abLocked);
		}

		bool IsBroken()
		{
			using func_t = decltype(&REFR_LOCK::IsBroken);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::IsBroken };
			return func(this);
		}

		static LOCK_LEVEL NumericValueToEnum(std::int32_t aiVal)
		{
			using func_t = decltype(&REFR_LOCK::NumericValueToEnum);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::NumericValueToEnum };
			return func(aiVal);
		}

		static std::int32_t EnumToNumericValue(LOCK_LEVEL aeVal)
		{
			using func_t = decltype(&REFR_LOCK::EnumToNumericValue);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::EnumToNumericValue };
			return func(aeVal);
		}

		bool IsLocked()
		{
			using func_t = decltype(&REFR_LOCK::IsLocked);
			static REL::Relocation<func_t> func{ Offsets::REFR_LOCK::IsLocked };
			return func(this);
		}

	public:
		// members
		std::uint8_t  cBaseLevel;       // 00
		std::uint8_t  pad01[0x3];       // 01
		TESKey*       pKey;             // 04
		char          cFlags;           // 08
		std::uint8_t  pad09[0x3];       // 09
		std::uint32_t uiNumTries;       // 0C
		std::uint32_t uiTimesUnlocked;  // 10
	};
	static_assert(sizeof(REFR_LOCK) == 0x14);
}
