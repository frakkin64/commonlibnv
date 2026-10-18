#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESObjectARMO.h"

namespace RE
{
	class TESFile;
	class TESForm;

	class TESObjectARMA :
		public TESObjectARMO  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectARMA };
		static constexpr auto VTABLE{ VTABLE::TESObjectARMA };

		// override (TESObjectARMO)
		virtual ~TESObjectARMA() = default;                                                   // 04
		virtual void ClearData() override;                                                    // 05
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitItem() override;                                                     // 22
		virtual bool IsArmorAddon() override;                                                 // 3D
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43
	};
	static_assert(sizeof(TESObjectARMA) == 0x190);
}
