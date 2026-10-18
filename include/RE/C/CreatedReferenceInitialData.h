#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSNumericIDIndex.h"
#include "RE/R/ReferenceLocationInitialData.h"

namespace RE
{
	class CreatedReferenceInitialData
	{
	public:
		CreatedReferenceInitialData* ctor()
		{
			using func_t = CreatedReferenceInitialData*(__thiscall*)(CreatedReferenceInitialData*);
			static REL::Relocation<func_t> func{ Offsets::CreatedReferenceInitialData::ctor };
			return func(this);
		}

	public:
		// members
		ReferenceLocationInitialData RefLocationData;         // 00
		std::uint8_t                 cCreatedReferenceFlags;  // 1C?
		BGSNumericIDIndex            BoundIDIndex;            // 1D?
	};
}
