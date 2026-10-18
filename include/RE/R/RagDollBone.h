#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class RagDollBone
	{
	public:
		void Endian()
		{
			using func_t = decltype(&RagDollBone::Endian);
			static REL::Relocation<func_t> func{ Offsets::RagDollBone::Endian };
			func(this);
		}

	public:
		// members
		char         iBoneID;     // 00
		std::uint8_t pad01[0x3];  // 01
		NiPoint3     BonePos;     // 04
		NiPoint3     BoneRot;     // 10
	};
	static_assert(sizeof(RagDollBone) == 0x1C);
}
