#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/R/ReconstructFormData.h"

namespace RE
{
	class BGSReconstructedForms
	{
	public:
		void Clear()
		{
			using func_t = decltype(&BGSReconstructedForms::Clear);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructedForms::Clear };
			func(this);
		}

		void AddFormData(ReconstructFormData& arFormData)
		{
			using func_t = decltype(&BGSReconstructedForms::AddFormData);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructedForms::AddFormData };
			func(this, arFormData);
		}

		BGSReconstructedForms* ctor()
		{
			using func_t = BGSReconstructedForms*(__thiscall*)(BGSReconstructedForms*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructedForms::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSReconstructedForms*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructedForms::dtor };
			func(this);
		}

	public:
		// members
		BSSimpleArray<ReconstructFormData, 1024> Forms1;  // 00
		BSSimpleArray<ReconstructFormData, 1024> Forms2;  // 10
	};
}
