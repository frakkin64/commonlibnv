#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"
#include "RE/S/Setting.h"
#include "RE/S/SettingCollectionList.h"

namespace RE
{
	class RegSettingCollection :
		public SettingCollectionList<Setting>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RegSettingCollection };
		static constexpr auto VTABLE{ VTABLE::RegSettingCollection };

		// override (SettingCollectionList<Setting>)
		virtual ~RegSettingCollection() = default;                                     // 00
		virtual std::uint32_t GetViewerStrings(NiTPrimitiveArray<char*>* apStringsA);  // 03
		virtual bool WriteSetting(Setting& arSetting);                                 // 04
		virtual bool ReadSetting(Setting& arSetting);                                  // 05
		virtual bool Open(bool bWrite);                                                // 06
		virtual bool Close();                                                          // 07

		RegSettingCollection* ctor()
		{
			using func_t = RegSettingCollection*(__thiscall*)(RegSettingCollection*);
			static REL::Relocation<func_t> func{ Offsets::RegSettingCollection::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(RegSettingCollection) == 0x114);
}
