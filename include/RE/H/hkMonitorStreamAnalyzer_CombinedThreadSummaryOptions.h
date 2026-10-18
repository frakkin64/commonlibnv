#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMonitorStreamAnalyzer_Node;

	class hkMonitorStreamAnalyzer_CombinedThreadSummaryOptions
	{
	public:
		// members
		std::int32_t                  m_indentationToFirstTimerValue;  // 00
		std::int32_t                  m_timerColumnWidth;              // 04?
		std::int32_t                  m_tabSpacingForTimerNames;       // 08?
		std::int32_t                  m_tabSpacingForTimerValues;      // 0C?
		bool                          m_displayPartialTree;            // 10?
		std::uint8_t                  pad11[0x3];                      // 11
		hkMonitorStreamAnalyzer_Node* m_activeNode;                    // 14?
		char                          m_rightArrowChar;                // 18?
		char                          m_downArrowChar;                 // 19?
		bool                          m_useTabsNotSpacesForColumns;    // 1A?
		std::uint8_t                  pad1B;                           // 1B
	};
}
