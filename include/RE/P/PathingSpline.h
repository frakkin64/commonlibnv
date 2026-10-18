#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSpline.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingSplineKey.h"

namespace RE
{
	class PathingSpline
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(PathingSpline*);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::dtor };
			func(this);
		}

		NiPoint3 Interpolate(PathingSplineKey const& result, PathingSplineKey const& aKey1)
		{
			using func_t = NiPoint3 (PathingSpline::*)(PathingSplineKey const&, PathingSplineKey const&);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::Interpolate };
			return func(this, result, aKey1);
		}

		NiPoint3 InterpolateNoZ(PathingSplineKey const& result, PathingSplineKey const& aKey1)
		{
			using func_t = decltype(&PathingSpline::InterpolateNoZ);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::InterpolateNoZ };
			return func(this, result, aKey1);
		}

		void SetKeys(PathingSplineKey const& aKey1, PathingSplineKey const& aKey2)
		{
			using func_t = decltype(&PathingSpline::SetKeys);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::SetKeys };
			func(this, aKey1, aKey2);
		}

		bool FindPointOnSpline(float afStartParameter, float a_arg2, bool a_arg3, float* abForward, NiPoint3* apfReturnParameter, float apReturnPoint)
		{
			using func_t = decltype(&PathingSpline::FindPointOnSpline);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::FindPointOnSpline };
			return func(this, afStartParameter, a_arg2, a_arg3, abForward, apfReturnParameter, apReturnPoint);
		}

		NiPoint3 Interpolate(float result)
		{
			using func_t = NiPoint3 (PathingSpline::*)(float);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::Interpolate_1 };
			return func(this, result);
		}

		float ApproxLength(float afStartParam, float a_arg2, std::uint32_t a_arg3)
		{
			using func_t = decltype(&PathingSpline::ApproxLength);
			static REL::Relocation<func_t> func{ Offsets::PathingSpline::ApproxLength };
			return func(this, afStartParam, a_arg2, a_arg3);
		}

	public:
		// members
		BSSpline         Spline;  // 00
		PathingSplineKey Key1;    // 14
		PathingSplineKey Key2;    // 2C
	};
}
