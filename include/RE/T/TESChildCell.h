#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectCELL;

	class __declspec(novtable) TESChildCell
	{
	public:
		static constexpr auto RTTI{ RTTI::TESChildCell };
		static constexpr auto VTABLE{ VTABLE::TESChildCell };

		// add
		virtual TESObjectCELL* GetSaveParentCell();  // 00

		TESChildCell* ctor()
		{
			using func_t = TESChildCell*(__thiscall*)(TESChildCell*);
			static REL::Relocation<func_t> func{ Offsets::TESChildCell::ctor };
			return func(this);
		}
	};
}
