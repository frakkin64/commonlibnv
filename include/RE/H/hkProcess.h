#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"

namespace RE
{
	class hkDebugDisplayHandler;
	class hkDisplaySerializeIStream;
	class hkDisplaySerializeOStream;
	class hkProcessHandler;

	class __declspec(novtable) hkProcess
	{
	public:
		static constexpr auto RTTI{ RTTI::hkProcess };
		static constexpr auto VTABLE{ VTABLE::hkProcess };

		// add
		virtual ~hkProcess() = default;                                                          // 00
		virtual std::int32_t getProcessTag();                                                    // 01
		virtual void getConsumableCommands(std::uint8_t*& commands, std::int32_t& numCommands);  // 02
		virtual void consumeCommand(std::uint8_t command);                                       // 03
		virtual bool isOk();                                                                     // 04
		virtual void init();                                                                     // 05
		virtual void step(float frameTimeInMs);                                                  // 06

		// members
		hkBool                     m_selectable;      // 04
		std::uint8_t               pad05[0x3];        // 05
		hkDisplaySerializeIStream* m_inStream;        // 08
		hkDisplaySerializeOStream* m_outStream;       // 0C
		hkDebugDisplayHandler*     m_displayHandler;  // 10?
		hkProcessHandler*          m_processHandler;  // 14?
	};
}
