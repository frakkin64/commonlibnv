#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiOBBNode;

	class __declspec(novtable) NiOBBRoot
	{
	public:
		static constexpr auto RTTI{ RTTI::NiOBBRoot };
		static constexpr auto VTABLE{ VTABLE::NiOBBRoot };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03

		// members
		float         m_fDeltaTime;         // 04?
		NiOBBNode*    m_pTree;              // 08
		bool          m_bTransformChanged;  // 0C?
		std::uint8_t  pad0D[0x3];           // 0D
		NiPoint3      m_velocity;           // 10?
		NiTransform   m_xform;              // 1C?
		std::uint32_t m_uiChangeStamp;      // 50
	};
}
