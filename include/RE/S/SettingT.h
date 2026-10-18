#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/Setting.h"

namespace RE
{
	template <class T>
	class SettingT :
		public Setting  // 00
	{
	public:
		// override (Setting)
		virtual ~SettingT() = default;  // 00
	};
}
