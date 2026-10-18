#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/L/ListBoxBase.h"
#include "RE/L/ListBoxItem.h"
#include "RE/T/T.h"

namespace RE
{
	class Tile;

	template <class T>
	class ListBox :
		public ListBoxBase,  // 00
		public BSSimpleList<ListBoxItem<T>*>  // 04
	{
	public:
		enum class Flag : std::int32_t
		{
			kLBF_AUTO_UPDATE = 0x0,
			kLBF_FROM_CONTAINER = 0x1,
		};

		enum class SelectMode : std::int32_t
		{
			kLBSM_ON = 0x0,
			kLBSM_OFF = 0x1,
			kLBSM_TOGGLE = 0x2,
		};

		// override (ListBoxBase)
		virtual bool Highlight(Tile* apHighlightItem);  // 00
		virtual void ScrollToHighlight();               // 04

		// add
		virtual ~ListBox() = default;          // 06
		virtual void RemoveAll();              // 07
		virtual void Sort(void* apCompareFn);  // 08

		// members
		Tile* pContainerRect;
		Tile* pHighlightedItem;
		Tile* pScrollBar;
		const char* pTemplateName;
		std::uint16_t usNextIndex;
		float fTotalListHeight;
		float fSavedHighlightIndex;
		float fSavedScrollbarValue;
		std::uint16_t usFlags;
	};
}
