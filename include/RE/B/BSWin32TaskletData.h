#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSNonReentrantSpinLock.h"
#include "RE/B/BSTaskletData.h"

namespace RE
{
	class BSWin32TaskletGroupData;

	class BSWin32TaskletData :
		public BSTaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWin32TaskletData };
		static constexpr auto VTABLE{ VTABLE::BSWin32TaskletData };

		BSWin32TaskletData* ctor()
		{
			using func_t = BSWin32TaskletData*(__thiscall*)(BSWin32TaskletData*);
			static REL::Relocation<func_t> func{ Offsets::BSWin32TaskletData::ctor };
			return func(this);
		}

	public:
		// members
		BSWin32TaskletData*      pLink;          // 08
		BSWin32TaskletGroupData* pGroupData;     // 0C
		bool                     bRunOnStartup;  // 10?
		std::uint8_t             pad11[0x3];     // 11
		BSNonReentrantSpinLock   TaskDataLock;   // 14?
		std::uint8_t             pad18[0x8];     // 18
	};
	static_assert(sizeof(BSWin32TaskletData) == 0x20);
}
