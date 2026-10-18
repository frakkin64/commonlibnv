#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MobIterOperator.h"

namespace RE
{
	class MobileObject;
	class TESActorBase;

	class Reset3DMobIterator :
		public MobIterOperator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Reset3DMobIterator };
		static constexpr auto VTABLE{ VTABLE::Reset3DMobIterator };

		// override (MobIterOperator)
		virtual void Operate(MobileObject* a_arg1) override;  // 00

		Reset3DMobIterator* ctor()
		{
			using func_t = Reset3DMobIterator*(__thiscall*)(Reset3DMobIterator*);
			static REL::Relocation<func_t> func{ Offsets::Reset3DMobIterator::ctor };
			return func(this);
		}

	public:
		// members
		TESActorBase* pActorBase;  // 08
		std::uint8_t  cFlags;      // 0C
		std::uint8_t  pad0D[0x3];  // 0D
	};
}
