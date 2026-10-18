#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTextureManager_eTextureType.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTexturingProperty_FilterMode.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectParam
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectParam };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectParam };

		// add
		virtual ~ImageSpaceEffectParam() = default;  // 00

		ImageSpaceEffectParam* ctor()
		{
			using func_t = ImageSpaceEffectParam*(__thiscall*)(ImageSpaceEffectParam*);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceEffectParam::ctor };
			return func(this);
		}

	public:
		// members
		NiTPrimitiveArray<BSTextureManager_eTextureType>  pBorrowTextureTypes;    // 04
		NiTPrimitiveArray<NiTexturingProperty_FilterMode> pBorrowTextureFilters;  // 14
	};
}
