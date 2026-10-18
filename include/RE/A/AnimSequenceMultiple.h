#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_SECTION.h"
#include "RE/A/AnimSequenceBase.h"
#include "RE/N/NiTList.h"

namespace RE
{
	class AnimSequenceSingle;
	class BSAnimGroupSequence;
	class TESAnimGroup;

	class AnimSequenceMultiple :
		public AnimSequenceBase  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AnimSequenceMultiple };
		static constexpr auto VTABLE{ VTABLE::AnimSequenceMultiple };

		// override (AnimSequenceBase)
		virtual ~AnimSequenceMultiple() = default;                                       // 00
		virtual void SetSequence(BSAnimGroupSequence* a_arg1, bool a_arg2) override;     // 01
		virtual bool RemoveSequence(BSAnimGroupSequence* a_arg1, bool a_arg2) override;  // 02
		virtual bool IsSingleSeq() override;                                             // 03
		virtual BSAnimGroupSequence* GetSequenceToPlay(char a_arg1) override;            // 04
		virtual BSAnimGroupSequence* GetSequence(TESAnimGroup* a_arg1) override;         // 05
		virtual char GetSequenceIndex(BSAnimGroupSequence* a_arg1) override;             // 06

		AnimSequenceMultiple* ctor(AnimSequenceSingle* apSingleSeq)
		{
			using func_t = AnimSequenceMultiple*(__thiscall*)(AnimSequenceMultiple*, AnimSequenceSingle*);
			static REL::Relocation<func_t> func{ Offsets::AnimSequenceMultiple::ctor };
			return func(this, apSingleSeq);
		}

		BSAnimGroupSequence* GetCorrespondingSequence(BSAnimGroupSequence* apSeq, ANIM_GROUP_SECTION aeSection)
		{
			using func_t = decltype(&AnimSequenceMultiple::GetCorrespondingSequence);
			static REL::Relocation<func_t> func{ Offsets::AnimSequenceMultiple::GetCorrespondingSequence };
			return func(this, apSeq, aeSection);
		}

	public:
		// members
		NiTList<BSAnimGroupSequence const*>* pSeqList;  // 04
	};
	static_assert(sizeof(AnimSequenceMultiple) == 0x8);
}
