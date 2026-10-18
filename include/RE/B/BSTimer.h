#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSTimer
	{
	public:
		float GetRealTimeSeconds()
		{
			using func_t = decltype(&BSTimer::GetRealTimeSeconds);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::GetRealTimeSeconds };
			return func(this);
		}

		static float QGlobalTimeMultiplier()
		{
			using func_t = decltype(&BSTimer::QGlobalTimeMultiplier);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::QGlobalTimeMultiplier };
			return func();
		}

		BSTimer* ctor()
		{
			using func_t = BSTimer*(__thiscall*)(BSTimer*);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::ctor };
			return func(this);
		}

		void Update()
		{
			using func_t = decltype(&BSTimer::Update);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::Update };
			func(this);
		}

		float GetSeconds()
		{
			using func_t = decltype(&BSTimer::GetSeconds);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::GetSeconds };
			return func(this);
		}

		void RestoreGlobalTimeMultiplierCache()
		{
			using func_t = decltype(&BSTimer::RestoreGlobalTimeMultiplierCache);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::RestoreGlobalTimeMultiplierCache };
			func(this);
		}

		static float QGlobalTimeMultiplierTarget()
		{
			using func_t = decltype(&BSTimer::QGlobalTimeMultiplierTarget);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::QGlobalTimeMultiplierTarget };
			return func();
		}

		void SetGlobalTimeMultiplier(float a_arg1, bool a_arg2)
		{
			using func_t = decltype(&BSTimer::SetGlobalTimeMultiplier);
			static REL::Relocation<func_t> func{ Offsets::BSTimer::SetGlobalTimeMultiplier };
			func(this, a_arg1, a_arg2);
		}

	public:
		// members
		std::uint8_t  cDisableCounter;                 // 00
		std::uint8_t  pad01[0x3];                      // 01
		float         fClamp;                          // 04
		float         fClampRemainder;                 // 08
		float         fDelta;                          // 0C
		float         fDeltaUnmodified;                // 10
		std::uint32_t iLastTime;                       // 14
		std::uint32_t iFirstTime;                      // 18
		bool          bUseGlobalTimeMultiplierTarget;  // 1C
		bool          bZeroDelta;                      // 1D?
		std::uint16_t pad1E;                           // 1E
	};
}
