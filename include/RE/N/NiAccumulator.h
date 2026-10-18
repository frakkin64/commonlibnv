#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiCamera;

	class NiAccumulator :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAccumulator };
		static constexpr auto VTABLE{ VTABLE::NiAccumulator };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28

		// members
		const NiCamera* m_pkCamera;  // 08
	};
}
