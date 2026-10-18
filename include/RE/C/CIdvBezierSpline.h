#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CVec.h"

namespace RE
{
	class CIdvBezierSpline
	{
	public:
		void Parse(std::basic_string<char, std::char_traits<char>, std::allocator<char>> const& strInput)
		{
			using func_t = decltype(&CIdvBezierSpline::Parse);
			static REL::Relocation<func_t> func{ Offsets::CIdvBezierSpline::Parse };
			func(this, strInput);
		}

	public:
		// members
		float              m_fMin;                         // 00
		float              m_fMax;                         // 04
		float              m_fVariance;                    // 08
		stl::vector<CVec>  m_vControlPoints;               // 0C?
		stl::vector<CVec>  m_vControlPointTangents;        // 24?
		stl::vector<float> m_vControlPointTangentLengths;  // 3C?
		stl::vector<CVec>  m_vEvenlySpacedPoints;          // 54?
		stl::vector<CVec>  m_vSplinePoints;                // 6C?
	};
}
