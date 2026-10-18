#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/INISettingCollection.h"

namespace RE
{
	class INIPrefSettingCollection :
		public INISettingCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::INIPrefSettingCollection };
		static constexpr auto VTABLE{ VTABLE::INIPrefSettingCollection };

		// override (INISettingCollection)
		virtual ~INIPrefSettingCollection() = default;  // 00
		virtual bool WriteSettings() override;          // 08
		virtual bool ReadSettings() override;           // 09

		INIPrefSettingCollection* ctor()
		{
			using func_t = INIPrefSettingCollection*(__thiscall*)(INIPrefSettingCollection*);
			static REL::Relocation<func_t> func{ Offsets::INIPrefSettingCollection::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(INIPrefSettingCollection) == 0x114);
}
