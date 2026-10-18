#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkError_Message.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkError :
		public hkReferencedObject,  // 00
		public hkSingleton<hkError>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkError };
		static constexpr auto VTABLE{ VTABLE::hkError };

		using Message = hkError_Message;

		// override (hkReferencedObject)
		virtual ~hkError() = default;  // 00

		// add
		virtual std::int32_t message(hkError_Message a_arg1, std::int32_t a_arg2, const char* a_arg3, const char* a_arg4, std::int32_t a_arg5);  // 03
		virtual void setEnabled(std::int32_t a_arg1, hkBool a_arg2);                                                                             // 04
		virtual hkBool* isEnabled(hkBool* a_arg1, std::int32_t a_arg2);                                                                          // 05
		virtual void enableAll();                                                                                                                // 06
		virtual void sectionBegin(std::int32_t id, char const* sectionName);                                                                     // 07
		virtual void sectionEnd();                                                                                                               // 08

		hkError* ctor()
		{
			using func_t = hkError*(__thiscall*)(hkError*);
			static REL::Relocation<func_t> func{ Offsets::hkError::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(hkError) == 0x8);
}
