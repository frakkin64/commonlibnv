#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiMaterialLibrary.h"

namespace RE
{
	class NiShaderLibrary;

	class NiSingleShaderMaterialLibrary :
		public NiMaterialLibrary  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSingleShaderMaterialLibrary };
		static constexpr auto VTABLE{ VTABLE::NiSingleShaderMaterialLibrary };

	protected:
		NiSingleShaderMaterialLibrary* ctor()
		{
			using func_t = NiSingleShaderMaterialLibrary*(__thiscall*)(NiSingleShaderMaterialLibrary*);
			static REL::Relocation<func_t> func{ Offsets::NiSingleShaderMaterialLibrary::ctor };
			return func(this);
		}

	public:
		// members
		NiShaderLibrary* m_pkLastLibrary;  // 0C
		std::uint32_t    m_uiLastDesc;     // 10
	};
}
