#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"
#include "RE/S/Setting.h"
#include "RE/S/SettingCollectionList.h"

namespace RE
{
	class INISettingCollection :
		public SettingCollectionList<Setting>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::INISettingCollection };
		static constexpr auto VTABLE{ VTABLE::INISettingCollection };

		// override (SettingCollectionList<Setting>)
		virtual ~INISettingCollection() = default;                                     // 00
		virtual std::uint32_t GetViewerStrings(NiTPrimitiveArray<char*>* apStringsA);  // 03
		virtual bool WriteSetting(Setting& arSetting);                                 // 04
		virtual bool ReadSetting(Setting& arSetting);                                  // 05
		virtual bool Open(bool abWrite);                                               // 06
		virtual bool Close();                                                          // 07

		INISettingCollection* ctor()
		{
			using func_t = INISettingCollection*(__thiscall*)(INISettingCollection*);
			static REL::Relocation<func_t> func{ Offsets::INISettingCollection::ctor };
			return func(this);
		}

		static void MainKey(Setting& arSetting, char* apMainKey)
		{
			using func_t = decltype(&INISettingCollection::MainKey);
			static REL::Relocation<func_t> func{ Offsets::INISettingCollection::MainKey };
			func(arSetting, apMainKey);
		}
	};
	static_assert(sizeof(INISettingCollection) == 0x114);
}
