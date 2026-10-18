#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SystemColorManager_SystemColor.h"

namespace RE
{
	class SystemColorManager_HardSystemColor :
		public SystemColorManager_SystemColor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SystemColorManager_HardSystemColor };
		static constexpr auto VTABLE{ VTABLE::SystemColorManager_HardSystemColor };

		// override (SystemColorManager_SystemColor)
		virtual ~SystemColorManager_HardSystemColor() = default;  // 00
		virtual void SetColor(std::uint32_t a_arg1) override;     // 02

		SystemColorManager_HardSystemColor* ctor(char const* apName, std::uint32_t aiColor, std::uint32_t aiID)
		{
			using func_t = SystemColorManager_HardSystemColor*(__thiscall*)(SystemColorManager_HardSystemColor*, char const*, std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::SystemColorManager_HardSystemColor::ctor };
			return func(this, apName, aiColor, aiID);
		}

	public:
		// members
		std::uint32_t iRGB;  // 0C?
	};
}
