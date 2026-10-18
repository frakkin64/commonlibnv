#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCoreMessage_MsgReturn.h"
#include "RE/B/BSCoreMessage_MsgStyle.h"

namespace RE
{
	class __declspec(novtable) BSCoreMessage
	{
	public:
		static constexpr auto RTTI{ RTTI::BSCoreMessage };
		static constexpr auto VTABLE{ VTABLE::BSCoreMessage };

		using MsgReturn = BSCoreMessage_MsgReturn;
		using MsgStyle = BSCoreMessage_MsgStyle;

		// add
		virtual ~BSCoreMessage() = default;                                                                                                                                     // 00
		virtual void Unk_01();                                                                                                                                                  // 01
		virtual void Error(char const* apMessage);                                                                                                                              // 02
		virtual std::int32_t Assert(char const* apFileName, std::uint32_t aiLineNumber, char const* apMessage, ...);                                                            // 03
		virtual BSCoreMessage_MsgReturn Message(BSCoreMessage_MsgStyle aeStyle, char const* apText, char const* apCaption, std::uint32_t aiTextID, std::uint32_t aiCaptionID);  // 04
		virtual void DebugString(char const* apMessage);                                                                                                                        // 05
	};
}
