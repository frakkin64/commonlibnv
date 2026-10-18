#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class Tile;

	class BGSMenuPacker
	{
	public:
		class PackedMenu;

		class PackedMenu
		{
		public:
			// members
			float x0;          // 00?
			float y0;          // 04?
			float w;           // 08?
			float h;           // 0C?
			float x_original;  // 10?
			float y_original;  // 14?
			Tile* pTile;       // 18?
		};

		void DumpInfo()
		{
			using func_t = decltype(&BGSMenuPacker::DumpInfo);
			static REL::Relocation<func_t> func{ Offsets::BGSMenuPacker::DumpInfo };
			func(this);
		}

	public:
		// members
		NiTPrimitiveArray<BGSMenuPacker::PackedMenu*> PackedMenus;     // 00?
		float                                         w;               // 10?
		float                                         h;               // 14?
		float                                         max_w;           // 18?
		float                                         max_h;           // 1C?
		bool                                          dump_info_flag;  // 20?
		bool                                          bPackFailed;     // 21
		std::uint16_t                                 pad22;           // 22
	};
}
