#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) NiGeometryGroup
	{
	public:
		static constexpr auto RTTI{ RTTI::NiGeometryGroup };
		static constexpr auto VTABLE{ VTABLE::NiGeometryGroup };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09

		// members
		std::uint32_t m_uiRefCount;   // 04?
		void*         m_pkD3DDevice;  // 08
	};
}
