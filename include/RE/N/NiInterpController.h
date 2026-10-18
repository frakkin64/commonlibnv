#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTimeController.h"

namespace RE
{
	class NiInterpController :
		public NiTimeController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiInterpController };
		static constexpr auto VTABLE{ VTABLE::NiInterpController };

		// add
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
		virtual void Unk_37();  // 37
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
	};
}
