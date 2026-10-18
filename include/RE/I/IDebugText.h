#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"

namespace RE
{
	class NiColorA;

	class __declspec(novtable) IDebugText
	{
	public:
		static constexpr auto RTTI{ RTTI::IDebugText };
		static constexpr auto VTABLE{ VTABLE::IDebugText };

		// add
		virtual void Reset();                                                                                                                                               // 00
		virtual void SkipLine(DEBUGTEXT_LOCATION a_arg1, std::int32_t a_arg2);                                                                                              // 01
		virtual std::int32_t PrintX(std::int32_t a_arg1, const char* a_arg2, ...);                                                                                          // 03 (reversed overload group)
		virtual std::int32_t PrintX(std::int32_t a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3, const char* a_arg4, ...);                                     // 02 (reversed overload group)
		virtual std::int32_t VAPrintX(std::int32_t a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3, const char* a_arg4, char* a_arg5, const NiColorA* a_arg6);  // 04
		virtual std::int32_t PrintLine(DEBUGTEXT_LOCATION a_arg1, DEBUGTEXT_JUSTIFY a_arg2, const char* a_arg3, ...);                                                       // 05
		virtual std::int32_t VAPrintLine(DEBUGTEXT_LOCATION a_arg1, DEBUGTEXT_JUSTIFY a_arg2, const char* a_arg3, char* a_arg4, const NiColorA* a_arg5);                    // 06
		virtual std::int32_t PrintXC(std::int32_t a_arg1, const NiColorA* a_arg2, const char* a_arg3, ...);                                                                 // 08 (reversed overload group)
		virtual std::int32_t PrintXC(std::int32_t a_arg1, const NiColorA* a_arg2, DEBUGTEXT_LOCATION a_arg3, DEBUGTEXT_JUSTIFY a_arg4, const char* a_arg5, ...);            // 07 (reversed overload group)
		virtual std::int32_t PrintLineC(const NiColorA* a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3, const char* a_arg4, ...);                              // 09
		virtual std::int32_t GetCurrentLine(DEBUGTEXT_LOCATION a_arg1);                                                                                                     // 0A
		virtual void SetCurrentLine(DEBUGTEXT_LOCATION a_arg1, std::int32_t a_arg2);                                                                                        // 0B
	};
}
