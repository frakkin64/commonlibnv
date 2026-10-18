#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class SayOnceTopicInfos;

	class ExtraSayTopicInfoOnceADay :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSayTopicInfoOnceADay };
		static constexpr auto VTABLE{ VTABLE::ExtraSayTopicInfoOnceADay };

		// override (BSExtraData)
		virtual ~ExtraSayTopicInfoOnceADay() = default;         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraSayTopicInfoOnceADay* ctor()
		{
			using func_t = ExtraSayTopicInfoOnceADay*(__thiscall*)(ExtraSayTopicInfoOnceADay*);
			static REL::Relocation<func_t> func{ Offsets::ExtraSayTopicInfoOnceADay::ctor };
			return func(this);
		}

		ExtraSayTopicInfoOnceADay* ctor(SayOnceTopicInfos* apInfo)
		{
			using func_t = ExtraSayTopicInfoOnceADay*(__thiscall*)(ExtraSayTopicInfoOnceADay*, SayOnceTopicInfos*);
			static REL::Relocation<func_t> func{ Offsets::ExtraSayTopicInfoOnceADay::ctor_1 };
			return func(this, apInfo);
		}

	public:
		// members
		BSSimpleList<SayOnceTopicInfos*>* pListofSaidOnceTopicInfos;  // 0C
	};
	static_assert(sizeof(ExtraSayTopicInfoOnceADay) == 0x10);
}
