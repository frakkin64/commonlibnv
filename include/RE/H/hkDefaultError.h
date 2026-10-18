#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkError.h"
#include "RE/H/hkError_Message.h"
#include "RE/H/hkPointerMap.h"

namespace RE
{
	class hkDefaultError :
		public hkError  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDefaultError };
		static constexpr auto VTABLE{ VTABLE::hkDefaultError };

		// override (hkError)
		virtual ~hkDefaultError() = default;                                                                                                              // 00
		virtual std::int32_t message(hkError_Message a_arg1, std::int32_t a_arg2, const char* a_arg3, const char* a_arg4, std::int32_t a_arg5) override;  // 03
		virtual void setEnabled(std::int32_t a_arg1, hkBool a_arg2) override;                                                                             // 04
		virtual hkBool* isEnabled(hkBool* a_arg1, std::int32_t a_arg2) override;                                                                          // 05
		virtual void enableAll() override;                                                                                                                // 06
		virtual void sectionBegin(std::int32_t id, char const* sectionName) override;                                                                     // 07
		virtual void sectionEnd() override;                                                                                                               // 08

		hkDefaultError* ctor(void* errorReportFunction, void* errorReportObject)
		{
			using func_t = hkDefaultError*(__thiscall*)(hkDefaultError*, void*, void*);
			static REL::Relocation<func_t> func{ Offsets::hkDefaultError::ctor };
			return func(this, errorReportFunction, errorReportObject);
		}

	protected:
		void showMessage(char const* what, std::int32_t id, char const* desc, char const* file, std::int32_t line, hkBool stackTrace)
		{
			using func_t = decltype(&hkDefaultError::showMessage);
			static REL::Relocation<func_t> func{ Offsets::hkDefaultError::showMessage };
			func(this, what, id, desc, file, line, stackTrace);
		}

	public:
		// members
		hkPointerMap<std::int32_t, std::int32_t, hkContainerHeapAllocator> m_disabledAssertIds;  // 08
		hkArray<std::int32_t, hkContainerHeapAllocator>                    m_sectionIds;         // 14?
		void*                                                              m_errorFunction;      // 20?
		void*                                                              m_errorObject;        // 24?
	};
}
