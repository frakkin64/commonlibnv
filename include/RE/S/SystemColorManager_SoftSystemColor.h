#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SystemColorManager_SystemColor.h"

namespace RE
{
	class INIPrefSetting;

	class SystemColorManager_SoftSystemColor :
		public SystemColorManager_SystemColor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SystemColorManager_SoftSystemColor };
		static constexpr auto VTABLE{ VTABLE::SystemColorManager_SoftSystemColor };

		// override (SystemColorManager_SystemColor)
		virtual ~SystemColorManager_SoftSystemColor() = default;  // 00
		virtual void SetColor(std::uint32_t a_arg1) override;     // 02

		SystemColorManager_SoftSystemColor* ctor(char const* apName, INIPrefSetting* apSetting, std::uint32_t aiID)
		{
			using func_t = SystemColorManager_SoftSystemColor*(__thiscall*)(SystemColorManager_SoftSystemColor*, char const*, INIPrefSetting*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager_SoftSystemColor::ctor };
			return func(this, apName, apSetting, aiID);
		}

	public:
		// members
		INIPrefSetting* pSetting;  // 0C
	};
}
