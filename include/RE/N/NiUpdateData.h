#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiUpdateData
	{
	public:
		NiUpdateData* ctor(float a_arg1, bool a_arg2, bool abUpdateControllers)
		{
			using func_t = NiUpdateData*(__thiscall*)(NiUpdateData*, float, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::NiUpdateData::ctor };
			return func(this, a_arg1, a_arg2, abUpdateControllers);
		}

	public:
		// members
		float        fTime;                  // 00
		bool         bUpdateControllers;     // 04
		bool         bParallelUpdate;        // 05
		bool         bFoundParticles;        // 06
		bool         bFoundMorphController;  // 07
		bool         bSceneGraphChange;      // 08
		std::uint8_t pad09[0x3];             // 09
	};
}
