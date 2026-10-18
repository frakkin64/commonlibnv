#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiInterpolator.h"

namespace RE
{
	class NiKeyBasedInterpolator :
		public NiInterpolator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiKeyBasedInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiKeyBasedInterpolator };

		// add
		virtual void Unk_37();  // 37
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
		virtual void Unk_3A();  // 3A
		virtual void Unk_3B();  // 3B
		virtual void Unk_3C();  // 3C
		virtual void Unk_3D();  // 3D
	};
	static_assert(sizeof(NiKeyBasedInterpolator) == 0xC);
}
