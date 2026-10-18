#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCoreMessage.h"
#include "RE/B/BSCoreMessage_MsgReturn.h"
#include "RE/B/BSCoreMessage_MsgStyle.h"

namespace RE
{
	class MessageHandler :
		public BSCoreMessage  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MessageHandler };
		static constexpr auto VTABLE{ VTABLE::MessageHandler };

		// override (BSCoreMessage)
		virtual ~MessageHandler() = default;                                                                                                                                             // 00
		virtual void Error(char const* apMessage) override;                                                                                                                              // 02
		virtual std::int32_t Assert(char const* apFileName, std::uint32_t aiLineNumber, char const* apMessage, ...) override;                                                            // 03
		virtual BSCoreMessage_MsgReturn Message(BSCoreMessage_MsgStyle aeStyle, char const* apText, char const* apCaption, std::uint32_t aiTextID, std::uint32_t aiCaptionID) override;  // 04
		virtual void DebugString(char const* apMessage) override;                                                                                                                        // 05

		static void IncDisableWarningCount(bool abTF)
		{
			using func_t = decltype(&MessageHandler::IncDisableWarningCount);
			static REL::Relocation<func_t> func{ Offsets::MessageHandler::IncDisableWarningCount };
			func(abTF);
		}

		static void ForceNextWarningToDisplay()
		{
			using func_t = decltype(&MessageHandler::ForceNextWarningToDisplay);
			static REL::Relocation<func_t> func{ Offsets::MessageHandler::ForceNextWarningToDisplay };
			func();
		}

		static std::int32_t QWarningCount()
		{
			using func_t = decltype(&MessageHandler::QWarningCount);
			static REL::Relocation<func_t> func{ Offsets::MessageHandler::QWarningCount };
			return func();
		}

		static void SetWarningCount(std::int32_t aiCount)
		{
			using func_t = decltype(&MessageHandler::SetWarningCount);
			static REL::Relocation<func_t> func{ Offsets::MessageHandler::SetWarningCount };
			func(aiCount);
		}

		static MessageHandler& Handler()
		{
			using func_t = decltype(&MessageHandler::Handler);
			static REL::Relocation<func_t> func{ Offsets::MessageHandler::Handler };
			return func();
		}

	protected:
		static bool WriteFile(char const* apFileName, char const* apBuffer, bool abFlush)
		{
			using func_t = decltype(&MessageHandler::WriteFile);
			static REL::Relocation<func_t> func{ Offsets::MessageHandler::WriteFile };
			return func(apFileName, apBuffer, abFlush);
		}

	public:
		// members
		bool         bStatic;     // 04
		std::uint8_t pad05[0x3];  // 05
	};
	static_assert(sizeof(MessageHandler) == 0x8);
}
