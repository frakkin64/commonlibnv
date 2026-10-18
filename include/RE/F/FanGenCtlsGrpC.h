#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixCTC.h"
#include "RE/F/FR2MatrixVTC.h"
#include "RE/F/FanAttribE.h"
#include "RE/F/FanOffLinCtlS.h"
#include "RE/F/FanPrtOffLinCtlS.h"
#include "RE/F/FanRaceDistS.h"
#include "RE/F/FanRaceE.h"
#include "RE/F/FanSymmE.h"
#include "RE/F/FanTypeE.h"

namespace RE
{
	class FutBinaryFileC;

	class FanGenCtlsGrpC
	{
	public:
		FanGenCtlsGrpC* ctor()
		{
			using func_t = FanGenCtlsGrpC*(__thiscall*)(FanGenCtlsGrpC*);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::ctor };
			return func(this);
		}

		bool readFromFile(FutBinaryFileC& file, void* dims)
		{
			using func_t = decltype(&FanGenCtlsGrpC::readFromFile);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::readFromFile };
			return func(this, file, dims);
		}

		float getAttribute(FanRaceE a_race, FanAttribE att, FanTypeE type, void* coord) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::getAttribute);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::getAttribute };
			return func(this, a_race, att, type, coord);
		}

		void setAttribute(FanRaceE a_race, FanAttribE att, FanTypeE type, float a_arg4, void* a_arg5) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::setAttribute);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::setAttribute };
			func(this, a_race, att, type, a_arg4, a_arg5);
		}

		void setAttributes(FanRaceE a_race, FanTypeE type, float const* const val, void* coord) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::setAttributes);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::setAttributes };
			func(this, a_race, type, val, coord);
		}

		float getCaricature(FanRaceE a_race, FanTypeE type, FanSymmE symm, void* coord) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::getCaricature);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::getCaricature };
			return func(this, a_race, type, symm, coord);
		}

		void setCaricature(FanRaceE a_race, FanTypeE type, FanSymmE symm, float a_arg4, void* a_arg5) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::setCaricature);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::setCaricature };
			func(this, a_race, type, symm, a_arg4, a_arg5);
		}

		float getRace(FanRaceE race1, FanRaceE race2, void* coord) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::getRace);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::getRace };
			return func(this, race1, race2, coord);
		}

		void setRace(FanRaceE race1, FanRaceE race2, float a_arg3, void* a_arg4) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::setRace);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::setRace };
			func(this, race1, race2, a_arg3, a_arg4);
		}

		void random(FanRaceE a_race, void* coord) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::random);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::random };
			func(this, a_race, coord);
		}

		void reflect(FanRaceE a_race, void* coord) const
		{
			using func_t = decltype(&FanGenCtlsGrpC::reflect);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::reflect };
			func(this, a_race, coord);
		}

		void tween(FanTypeE type, FanSymmE symm, float a_arg3, void* a_arg4, void* parent1, void* parent2)
		{
			using func_t = decltype(&FanGenCtlsGrpC::tween);
			static REL::Relocation<func_t> func{ Offsets::FanGenCtlsGrpC::tween };
			func(this, type, symm, a_arg3, a_arg4, parent1, parent2);
		}

	public:
		// members
		bool                      initialized;      // 00
		std::uint8_t              pad01[0x3];       // 01
		FanRaceDistS              distrib[5];       // 04
		FanPrtOffLinCtlS          attr[5][2][2];    // 324
		FanOffLinCtlS             race[5][5];       // 644
		FR2MatrixVTC<float>       basis[5][2][2];   // D4C
		FR2MatrixCTC<float, 2, 2> invAttCov[5][2];  // FCC
	};
}
