#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiMaterialLibrary :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMaterialLibrary };
		static constexpr auto VTABLE{ VTABLE::NiMaterialLibrary };

		// add
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06

		// members
		NiFixedString m_kName;  // 08?
	};
}
