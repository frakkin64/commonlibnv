#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LoadScreenType_Data.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESFile;

	class TESLoadScreenType :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLoadScreenType };
		static constexpr auto VTABLE{ VTABLE::TESLoadScreenType };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLSCT_ID };

		// override (TESForm)
		virtual ~TESLoadScreenType() = default;                                               // 04
		virtual bool Load(TESFile* apFile) override;                                          // 08
		virtual void Save() override;                                                         // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                    // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                  // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                  // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;  // 18
		virtual void InitItem() override;                                                     // 22
		virtual void Copy(TESForm* apCopy) override;                                          // 42
		virtual bool Compare(TESForm* apCopy) override;                                       // 43

		TESLoadScreenType* ctor()
		{
			using func_t = TESLoadScreenType*(__thiscall*)(TESLoadScreenType*);
			static REL::Relocation<func_t> func{ Offsets::TESLoadScreenType::ctor };
			return func(this);
		}

	public:
		// members
		LoadScreenType_Data data;  // 18
	};
	static_assert(sizeof(TESLoadScreenType) == 0x70);
}
