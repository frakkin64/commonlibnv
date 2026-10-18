#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SYSUTIL_REGION.h"

namespace RE
{
	class BSDLCSystemUtility;

	class __declspec(novtable) BSSystemUtility
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSystemUtility };
		static constexpr auto VTABLE{ VTABLE::BSSystemUtility };

		enum class EVENT_NOTIFICATION : std::int32_t
		{
			kEVENT_NOTIFICATION_UTILITY_VISIBLE_BEGIN = 0x0,
			kEVENT_NOTIFICATION_UTILITY_VISIBLE_END = 0x1,
			kEVENT_NOTIFICATION_USER_REQUEST_EXIT = 0x2,
			kEVENT_NOTIFICATION_UNKNOWN = 0x3,
		};

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04

		BSDLCSystemUtility& QDLCUtility()
		{
			using func_t = decltype(&BSSystemUtility::QDLCUtility);
			static REL::Relocation<func_t> func{ Offsets::BSSystemUtility::QDLCUtility };
			return func(this);
		}

		static BSSystemUtility& QInstance()
		{
			using func_t = decltype(&BSSystemUtility::QInstance);
			static REL::Relocation<func_t> func{ Offsets::BSSystemUtility::QInstance };
			return func();
		}

	public:
		// members
		char           cTitle[128];                 // 04?
		void*          pEventNotificationCallback;  // 84
		void*          pFocusNotificationCallback;  // 88
		bool           bVisible;                    // 8C
		std::uint8_t   pad8D[0x3];                  // 8D
		SYSUTIL_REGION eRegion;                     // 90
		bool           bLostFocus;                  // 94
		bool           bExitApp;                    // 95?
		std::uint16_t  pad96;                       // 96
	};
}
