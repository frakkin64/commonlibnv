#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTLargePrimitiveArray.h"

namespace RE
{
	class TESTopicInfo;

	class TopicInfoArray :
		public NiTLargePrimitiveArray<TESTopicInfo*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TopicInfoArray };
		static constexpr auto VTABLE{ VTABLE::TopicInfoArray };

		// override (NiTLargePrimitiveArray<TESTopicInfo*>)
		virtual ~TopicInfoArray() = default;  // 00

		TopicInfoArray* ctor()
		{
			using func_t = TopicInfoArray*(__thiscall*)(TopicInfoArray*);
			static REL::Relocation<func_t> func{ Offsets::TopicInfoArray::ctor };
			return func(this);
		}

		void InsertInfoAt(std::uint32_t aiIndex, TESTopicInfo* apInfo)
		{
			using func_t = decltype(&TopicInfoArray::InsertInfoAt);
			static REL::Relocation<func_t> func{ Offsets::TopicInfoArray::InsertInfoAt };
			func(this, aiIndex, apInfo);
		}
	};
}
