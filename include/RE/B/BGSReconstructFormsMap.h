#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"
#include "RE/R/ReconstructFormData.h"

namespace RE
{
	class TESForm;

	class BGSReconstructFormsMap :
		public NiTMap<std::uint32_t, ReconstructFormData>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReconstructFormsMap };
		static constexpr auto VTABLE{ VTABLE::BGSReconstructFormsMap };

		// override (NiTMap<std::uint32_t, ReconstructFormData>)
		virtual ~BGSReconstructFormsMap() = default;  // 00

		BGSReconstructFormsMap* ctor()
		{
			using func_t = BGSReconstructFormsMap*(__thiscall*)(BGSReconstructFormsMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsMap::ctor };
			return func(this);
		}

		void AddForm(TESForm* apForm, std::uint32_t aiFormID, std::uint32_t aiFlags)
		{
			using func_t = decltype(&BGSReconstructFormsMap::AddForm);
			static REL::Relocation<func_t> func{ Offsets::BGSReconstructFormsMap::AddForm };
			func(this, apForm, aiFormID, aiFlags);
		}

	public:
		// members
		std::uint32_t iFlags;  // 10
	};
	static_assert(sizeof(BGSReconstructFormsMap) == 0x14);
}
