#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PROCESS_TYPE.h"

namespace RE
{
	class MobileObject;

	class __declspec(novtable) MobIterOperator
	{
	public:
		static constexpr auto RTTI{ RTTI::MobIterOperator };
		static constexpr auto VTABLE{ VTABLE::MobIterOperator };

		// add
		virtual void Operate(MobileObject* a_arg1);  // 00

		MobIterOperator* ctor()
		{
			using func_t = MobIterOperator*(__thiscall*)(MobIterOperator*);
			static REL::Relocation<func_t> func{ Offsets::MobIterOperator::ctor };
			return func(this);
		}

	public:
		// members
		PROCESS_TYPE eType;  // 04
	};
}
