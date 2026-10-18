#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AnimSequenceBase.h"

namespace RE
{
	class BSAnimGroupSequence;
	class TESAnimGroup;

	class AnimSequenceSingle :
		public AnimSequenceBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AnimSequenceSingle };
		static constexpr auto VTABLE{ VTABLE::AnimSequenceSingle };

		// override (AnimSequenceBase)
		virtual ~AnimSequenceSingle() = default;                                         // 00
		virtual void SetSequence(BSAnimGroupSequence* a_arg1, bool a_arg2) override;     // 01
		virtual bool RemoveSequence(BSAnimGroupSequence* a_arg1, bool a_arg2) override;  // 02
		virtual bool IsSingleSeq() override;                                             // 03
		virtual BSAnimGroupSequence* GetSequenceToPlay(char a_arg1) override;            // 04
		virtual BSAnimGroupSequence* GetSequence(TESAnimGroup* a_arg1) override;         // 05
		virtual char GetSequenceIndex(BSAnimGroupSequence* a_arg1) override;             // 06

		AnimSequenceSingle* ctor()
		{
			using func_t = AnimSequenceSingle*(__thiscall*)(AnimSequenceSingle*);
			static REL::Relocation<func_t> func{ Offsets::AnimSequenceSingle::ctor };
			return func(this);
		}

	public:
		// members
		BSAnimGroupSequence* pSeq;  // 04
	};
	static_assert(sizeof(AnimSequenceSingle) == 0x8);
}
