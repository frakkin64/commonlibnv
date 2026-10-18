#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) BSExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSExtraData };
		static constexpr auto VTABLE{ VTABLE::BSExtraData };

		// add
		virtual ~BSExtraData() = default;              // 00
		virtual bool Compare(BSExtraData* apCompare);  // 01

		BSExtraData* ctor(std::uint8_t acType)
		{
			using func_t = BSExtraData*(__thiscall*)(BSExtraData*, std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::BSExtraData::ctor };
			return func(this, acType);
		}

	public:
		// members
		std::uint8_t cEtype;      // 04
		std::uint8_t pad05[0x3];  // 05
		BSExtraData* pNext;       // 08
	};
	static_assert(sizeof(BSExtraData) == 0xC);
}
