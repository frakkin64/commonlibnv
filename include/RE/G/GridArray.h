#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) GridArray
	{
	public:
		static constexpr auto RTTI{ RTTI::GridArray };
		static constexpr auto VTABLE{ VTABLE::GridArray };

		// add
		virtual ~GridArray() = default;                                                                                 // 00
		virtual void Init();                                                                                            // 01
		virtual void DetachAll();                                                                                       // 02
		virtual void KillAll();                                                                                         // 03
		virtual bool SetCenter(std::int32_t aiX, std::int32_t aiY);                                                     // 04
		virtual void Shift(std::int32_t aiCols, std::int32_t aiRows);                                                   // 05
		virtual void Detach(std::uint32_t a_arg1, std::uint32_t a_arg2);                                                // 06
		virtual void ClearItem(std::uint32_t a_arg1, std::uint32_t a_arg2);                                             // 07
		virtual void MoveItem(std::uint32_t a_arg1, std::uint32_t a_arg2, std::uint32_t a_arg3, std::uint32_t a_arg4);  // 08
		virtual void SwapItem(std::uint32_t a_arg1, std::uint32_t a_arg2, std::uint32_t a_arg3, std::uint32_t a_arg4);  // 09

		GridArray* ctor()
		{
			using func_t = GridArray*(__thiscall*)(GridArray*);
			static REL::Relocation<func_t> func{ Offsets::GridArray::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t  iCenterX;    // 04
		std::int32_t  iCenterY;    // 08
		std::uint32_t iDimension;  // 0C
	};
	static_assert(sizeof(GridArray) == 0x10);
}
