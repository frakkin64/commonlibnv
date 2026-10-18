#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiInterpolator :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiInterpolator };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B
		virtual void Unk_2C();  // 2C
		virtual void Unk_2D();  // 2D
		virtual void Unk_2E();  // 2E
		virtual void Unk_2F();  // 2F
		virtual void Unk_30();  // 30
		virtual void Unk_31();  // 31
		virtual void Unk_32();  // 32
		virtual void Unk_33();  // 33
		virtual void Unk_34();  // 34
		virtual void Unk_35();  // 35
		virtual void Unk_36();  // 36

		// members
		float m_fLastTime;  // 08
	};
	static_assert(sizeof(NiInterpolator) == 0xC);
}
