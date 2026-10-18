#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class RagdollSaveStruct
	{
	public:
		void Endian()
		{
			using func_t = decltype(&RagdollSaveStruct::Endian);
			static REL::Relocation<func_t> func{ Offsets::RagdollSaveStruct::Endian };
			func(this);
		}

	public:
		// members
		std::uint16_t usFeedbackDynamicBoneCount;  // 00
		std::uint16_t usLegCount;                  // 02
		std::uint16_t usHeadCount;                 // 04
		std::uint16_t usArmCount;                  // 06
		bool          bFeedbackEnabled;            // 08
		bool          bFootIKEnabled;              // 09
		bool          bLookIKEnabled;              // 0A
		bool          bGrabIKEnabled;              // 0B
		bool          bPoseMatchEnabled;           // 0C
		std::uint8_t  pad0D;                       // 0D
	};
	static_assert(sizeof(RagdollSaveStruct) == 0xE);
}
