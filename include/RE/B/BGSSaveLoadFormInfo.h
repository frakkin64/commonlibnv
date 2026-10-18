#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/ENUM_FORM_ID.h"
#include "RE/S/SIZE_TYPE.h"

namespace RE
{
	class BGSSaveLoadFormInfo
	{
	public:
		void SetFormType(ENUM_FORM_ID aeFormType)
		{
			using func_t = decltype(&BGSSaveLoadFormInfo::SetFormType);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormInfo::SetFormType };
			func(this, aeFormType);
		}

		SIZE_TYPE GetSizeType()
		{
			using func_t = decltype(&BGSSaveLoadFormInfo::GetSizeType);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormInfo::GetSizeType };
			return func(this);
		}

	public:
		// members
		std::uint8_t cData;  // 00
	};
}
