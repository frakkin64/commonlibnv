#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSAnimGroupSequence;
	class TESAnimGroup;

	class __declspec(novtable) AnimSequenceBase
	{
	public:
		static constexpr auto RTTI{ RTTI::AnimSequenceBase };
		static constexpr auto VTABLE{ VTABLE::AnimSequenceBase };

		// add
		virtual ~AnimSequenceBase() = default;                                  // 00
		virtual void SetSequence(BSAnimGroupSequence* a_arg1, bool a_arg2);     // 01
		virtual bool RemoveSequence(BSAnimGroupSequence* a_arg1, bool a_arg2);  // 02
		virtual bool IsSingleSeq();                                             // 03
		virtual BSAnimGroupSequence* GetSequenceToPlay(char a_arg1);            // 04
		virtual BSAnimGroupSequence* GetSequence(TESAnimGroup* a_arg1);         // 05
		virtual char GetSequenceIndex(BSAnimGroupSequence* a_arg1);             // 06

		AnimSequenceBase* ctor()
		{
			using func_t = AnimSequenceBase*(__thiscall*)(AnimSequenceBase*);
			static REL::Relocation<func_t> func{ Offsets::AnimSequenceBase::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(AnimSequenceBase) == 0x4);
}
