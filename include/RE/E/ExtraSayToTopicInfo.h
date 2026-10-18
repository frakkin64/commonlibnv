#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESTopic;
	class TESTopicInfo;

	class ExtraSayToTopicInfo :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSayToTopicInfo };
		static constexpr auto VTABLE{ VTABLE::ExtraSayToTopicInfo };

		// override (BSExtraData)
		virtual ~ExtraSayToTopicInfo() = default;  // 00

		ExtraSayToTopicInfo* ctor()
		{
			using func_t = ExtraSayToTopicInfo*(__thiscall*)(ExtraSayToTopicInfo*);
			static REL::Relocation<func_t> func{ Offsets::ExtraSayToTopicInfo::ctor };
			return func(this);
		}

		ExtraSayToTopicInfo* ctor(TESTopicInfo* apInfo)
		{
			using func_t = ExtraSayToTopicInfo*(__thiscall*)(ExtraSayToTopicInfo*, TESTopicInfo*);
			static REL::Relocation<func_t> func{ Offsets::ExtraSayToTopicInfo::ctor_1 };
			return func(this, apInfo);
		}

	public:
		// members
		TESTopicInfo* pInfo;        // 0C
		TESTopic*     pTopic;       // 10
		std::uint32_t nResponseID;  // 14
		bool          bVoiceDone;   // 18
		std::uint8_t  pad19[0x3];   // 19
	};
	static_assert(sizeof(ExtraSayToTopicInfo) == 0x1C);
}
