#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ExtReal;

	class __declspec(novtable) Random
	{
	public:
		static constexpr auto RTTI{ RTTI::Random };
		static constexpr auto VTABLE{ VTABLE::Random };

		// add
		virtual ~Random() = default;                                                // 00
		virtual float Next();                                                       // 01
		virtual char* Name();                                                       // 02
		virtual float Density(float a_arg1) const;                                  // 03
		virtual ExtReal* Mean(ExtReal* a_arg1);                                     // 04
		virtual ExtReal* Variance(ExtReal* a_arg1);                                 // 05
		virtual std::int32_t nelems() const;                                        // 06
		virtual void tDelete();                                                     // 07
		virtual void load(std::int32_t* __formal, float* a_arg2, Random** a_arg3);  // 08

		static void Set(double a_arg1)
		{
			using func_t = decltype(&Random::Set);
			static REL::Relocation<func_t> func{ Offsets::Random::Set };
			func(a_arg1);
		}
	};
}
