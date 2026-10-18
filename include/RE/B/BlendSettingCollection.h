#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/INISettingCollection.h"

namespace RE
{
	class BlendSettingCollection :
		public INISettingCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BlendSettingCollection };
		static constexpr auto VTABLE{ VTABLE::BlendSettingCollection };

		// override (INISettingCollection)
		virtual ~BlendSettingCollection() = default;  // 00

		BlendSettingCollection* ctor()
		{
			using func_t = BlendSettingCollection*(__thiscall*)(BlendSettingCollection*);
			static REL::Relocation<func_t> func{ Offsets::BlendSettingCollection::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BlendSettingCollection) == 0x114);
}
