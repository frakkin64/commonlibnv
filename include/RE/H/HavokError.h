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
	class HavokError :
		public hkError  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::HavokError };
		static constexpr auto VTABLE{ VTABLE::HavokError };

		class hkFileLine;

		class hkFileLine
		{
		public:
			// members
			const char*  m_file;  // 00
			std::int32_t m_line;  // 04?
		};

		// override (hkError)
		virtual ~HavokError() = default;                                                                                                                  // 00
		virtual std::int32_t message(hkError_Message a_arg1, std::int32_t a_arg2, const char* a_arg3, const char* a_arg4, std::int32_t a_arg5) override;  // 03
		virtual void setEnabled(std::int32_t a_arg1, hkBool a_arg2) override;                                                                             // 04
		virtual hkBool* isEnabled(hkBool* a_arg1, std::int32_t a_arg2) override;                                                                          // 05
		virtual void enableAll() override;                                                                                                                // 06

		// add
		virtual void disableReport(char const* apFile, std::int32_t aiLine);                                                                         // 09
		virtual void enableReport(char const* apFile, std::int32_t aiLine);                                                                          // 0A
		virtual void assertMessage(char const* apWhat, std::int32_t aiID, char const* apDescription, char const* apFile, std::int32_t aiLine);       // 0B
		virtual void errorMessage(char const* apWhat, std::int32_t aiID, char const* apDescription, char const* apFile, std::int32_t aiLine);        // 0C
		virtual void warningMessage(char const* apWhat, std::int32_t aiID, char const* apDescription, char const* apFile, std::int32_t aiLine);      // 0D
		virtual void programFlowMessage(char const* apWhat, std::int32_t aiID, char const* apDescription, char const* apFile, std::int32_t aiLine);  // 0E
		virtual void showString(char const* apStr);                                                                                                  // 0F
		virtual char const* hkGetFileBaseName(char const* apPath);                                                                                   // 10

		void SetRootDir(char const* apRoot)
		{
			using func_t = decltype(&HavokError::SetRootDir);
			static REL::Relocation<func_t> func{ Offsets::HavokError::SetRootDir };
			func(this, apRoot);
		}

		HavokError* ctor()
		{
			using func_t = HavokError*(__thiscall*)(HavokError*);
			static REL::Relocation<func_t> func{ Offsets::HavokError::ctor };
			return func(this);
		}

	protected:
		bool isReportEnabled(char const* apFile, std::int32_t aiLine)
		{
			using func_t = decltype(&HavokError::isReportEnabled);
			static REL::Relocation<func_t> func{ Offsets::HavokError::isReportEnabled };
			return func(this, apFile, aiLine);
		}

	public:
		// members
		hkArray<HavokError::hkFileLine, hkContainerHeapAllocator>          m_disabledReports;    // 08
		hkPointerMap<std::int32_t, std::int32_t, hkContainerHeapAllocator> m_disabledAssertIds;  // 14
		char                                                               pRootDir[260];        // 20
	};
}
