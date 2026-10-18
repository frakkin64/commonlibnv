#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	class Tile;

	template <class T>
	class ListBoxItem
	{
	public:
		// members
		Tile* pTile;
		T data;
		bool bFiltered;
	};
}
