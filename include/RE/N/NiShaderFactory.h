#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"
#include "RE/N/NiTFixedStringMap.h"

namespace RE
{
	class NiGlobalConstantEntry;

	class NiShaderFactory :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiShaderFactory };
		static constexpr auto VTABLE{ VTABLE::NiShaderFactory };

		// add
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A
		virtual void Unk_0B();  // 0B
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F
		virtual void Unk_10();  // 10
		virtual void Unk_11();  // 11
		virtual void Unk_12();  // 12
		virtual void Unk_13();  // 13
		virtual void Unk_14();  // 14
		virtual void Unk_15();  // 15
		virtual void Unk_16();  // 16
		virtual void Unk_17();  // 17
		virtual void Unk_18();  // 18
		virtual void Unk_19();  // 19
		virtual void Unk_1A();  // 1A
		virtual void Unk_1B();  // 1B

		// members
		NiTFixedStringMap<NiGlobalConstantEntry*> m_kGlobalConstantMap;  // 08?
		void*                                     m_pfnClassCreate;      // 18?
		void*                                     m_pfnRunParser;        // 1C?
		void*                                     m_pfnErrorCallback;    // 20?
	};
}
