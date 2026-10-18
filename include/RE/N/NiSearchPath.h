#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) NiSearchPath
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSearchPath };
		static constexpr auto VTABLE{ VTABLE::NiSearchPath };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02

		// members
		std::uint32_t m_uiNextPath;            // 04
		char          m_acFilePath[260];       // 08?
		char          m_acReferencePath[260];  // 10C?
	};
}
