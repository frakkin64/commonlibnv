#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkAction.h"

namespace RE
{
	class bhkBinaryAction :
		public bhkAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkBinaryAction };
		static constexpr auto VTABLE{ VTABLE::bhkBinaryAction };

		// add
		virtual void Unk_32();  // 32
		virtual void Unk_33();  // 33
		virtual void Unk_34();  // 34
	};
}
