#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"

namespace RE
{
	class __declspec(novtable) hkProcessHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::hkProcessHandler };
		static constexpr auto VTABLE{ VTABLE::hkProcessHandler };

		// add
		virtual ~hkProcessHandler() = default;                                      // 00
		virtual hkResult registerProcess(const char* a_arg1, std::int32_t a_arg2);  // 01
		virtual std::int32_t getProcessId(const char* a_arg1);                      // 02
		virtual const char* getProcessName(std::int32_t a_arg1);                    // 03
		virtual hkResult selectProcess(std::int32_t a_arg1);                        // 04
		virtual hkResult createProcess(std::int32_t a_arg1);                        // 05
		virtual hkResult deleteProcess(std::int32_t a_arg1);                        // 06
	};
}
