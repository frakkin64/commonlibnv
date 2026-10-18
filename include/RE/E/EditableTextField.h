#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class EditableTextField
	{
	public:
		void HandleKey(std::int32_t iKey)
		{
			using func_t = decltype(&EditableTextField::HandleKey);
			static REL::Relocation<func_t> func{ Offsets::EditableTextField::HandleKey };
			func(this, iKey);
		}

		char const* GetDisplayText()
		{
			using func_t = decltype(&EditableTextField::GetDisplayText);
			static REL::Relocation<func_t> func{ Offsets::EditableTextField::GetDisplayText };
			return func(this);
		}

	public:
		// members
		BSStringT<char> sText;           // 00
		BSStringT<char> sDisplayText;    // 08
		std::int32_t    iCurPos;         // 10
		std::int32_t    iMaxPixelSize;   // 14
		std::int32_t    iFontIdx;        // 18
		std::uint32_t   uLastBlinkTime;  // 1C
		bool            bCursorOn;       // 20
		bool            bEditing;        // 21
		bool            bClearOnKey;     // 22
		std::uint8_t    pad23;           // 23
	};
}
