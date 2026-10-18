#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraLastFinishedSequence :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLastFinishedSequence };
		static constexpr auto VTABLE{ VTABLE::ExtraLastFinishedSequence };

		// override (BSExtraData)
		virtual ~ExtraLastFinishedSequence() = default;         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraLastFinishedSequence* ctor(char const* apSequenceName)
		{
			using func_t = ExtraLastFinishedSequence*(__thiscall*)(ExtraLastFinishedSequence*, char const*);
			static REL::Relocation<func_t> func{ Offsets::ExtraLastFinishedSequence::ctor };
			return func(this, apSequenceName);
		}

	public:
		// members
		char* pLastSequenceName;  // 0C
	};
	static_assert(sizeof(ExtraLastFinishedSequence) == 0x10);
}
