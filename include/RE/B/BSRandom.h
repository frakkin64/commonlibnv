#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSRandom
	{
	public:
		float Float(float afMin, float afMax)
		{
			using func_t = decltype(&BSRandom::Float);
			static REL::Relocation<func_t> func{ Offsets::BSRandom::Float };
			return func(this, afMin, afMax);
		}

		std::uint32_t UnsignedInt()
		{
			using func_t = std::uint32_t (BSRandom::*)();
			static REL::Relocation<func_t> func{ Offsets::BSRandom::UnsignedInt };
			return func(this);
		}

		static BSRandom* QInstance()
		{
			using func_t = decltype(&BSRandom::QInstance);
			static REL::Relocation<func_t> func{ Offsets::BSRandom::QInstance };
			return func();
		}

		float FloatNeg1To1()
		{
			using func_t = decltype(&BSRandom::FloatNeg1To1);
			static REL::Relocation<func_t> func{ Offsets::BSRandom::FloatNeg1To1 };
			return func(this);
		}

		float Float0To1()
		{
			using func_t = decltype(&BSRandom::Float0To1);
			static REL::Relocation<func_t> func{ Offsets::BSRandom::Float0To1 };
			return func(this);
		}

		std::int32_t Int(std::int32_t aiMin, std::int32_t aiMax)
		{
			using func_t = decltype(&BSRandom::Int);
			static REL::Relocation<func_t> func{ Offsets::BSRandom::Int };
			return func(this, aiMin, aiMax);
		}

		std::uint32_t UnsignedInt(std::uint32_t aiMax)
		{
			using func_t = std::uint32_t (BSRandom::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSRandom::UnsignedInt_1 };
			return func(this, aiMax);
		}

	public:
		// members
		std::uint32_t rseed;     // 00
		std::uint32_t rseed_sp;  // 04
		std::uint32_t mt[624];   // 08
		std::uint32_t mti;       // 9C8
	};
}
