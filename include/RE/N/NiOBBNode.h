#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiOBBox.h"

namespace RE
{
	class __declspec(novtable) NiOBBNode
	{
	public:
		static constexpr auto RTTI{ RTTI::NiOBBNode };
		static constexpr auto VTABLE{ VTABLE::NiOBBNode };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04

		// members
		NiOBBox       m_box;            // 04?
		NiOBBNode*    m_pLeft;          // 80?
		NiOBBNode*    m_pRight;         // 84?
		std::uint32_t m_uiChangeStamp;  // 88
	};
}
