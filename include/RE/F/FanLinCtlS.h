#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"

namespace RE
{
	class FanLinCtlS
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(FanLinCtlS*);
			static REL::Relocation<func_t> func{ Offsets::FanLinCtlS::dtor };
			func(this);
		}

	public:
		// members
		FR2MatrixVTC<float> ctl;    // 00?
		stl::string         label;  // 20
	};
}
