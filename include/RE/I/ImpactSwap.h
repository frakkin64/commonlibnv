#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSMap.h"

namespace RE
{
	class BGSImpactData;
	class TESFile;
	class TESForm;

	class ImpactSwap
	{
	public:
		ImpactSwap* ctor()
		{
			using func_t = ImpactSwap*(__thiscall*)(ImpactSwap*);
			static REL::Relocation<func_t> func{ Offsets::ImpactSwap::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&ImpactSwap::Save);
			static REL::Relocation<func_t> func{ Offsets::ImpactSwap::Save };
			func(this);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&ImpactSwap::Load);
			static REL::Relocation<func_t> func{ Offsets::ImpactSwap::Load };
			func(this, apFile);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ImpactSwap::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ImpactSwap::InitItem };
			func(this, apOwner);
		}

		void Copy(ImpactSwap* apSwap)
		{
			using func_t = decltype(&ImpactSwap::Copy);
			static REL::Relocation<func_t> func{ Offsets::ImpactSwap::Copy };
			func(this, apSwap);
		}

	public:
		// members
		BSMap<BGSImpactData*, BGSImpactData*>* pRemappedData[12];                  // 00
		char                                   pAltFootstepMaterialNames[10][30];  // 30
	};
	static_assert(sizeof(ImpactSwap) == 0x15C);
}
