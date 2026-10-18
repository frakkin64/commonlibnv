#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CASINO_DATA.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class TESCasinoChips;
	class TESFile;
	class TESQuest;

	class TESCasino :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCasino };
		static constexpr auto VTABLE{ VTABLE::TESCasino };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCSNO_ID };

		// override (TESForm)
		virtual ~TESCasino() = default;                  // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESCasino* ctor()
		{
			using func_t = TESCasino*(__thiscall*)(TESCasino*);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::ctor };
			return func(this);
		}

		TESModelTextureSwap* GetModel(std::int32_t index)
		{
			using func_t = decltype(&TESCasino::GetModel);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::GetModel };
			return func(this, index);
		}

		TESTexture* GetTexture(std::int32_t index)
		{
			using func_t = decltype(&TESCasino::GetTexture);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::GetTexture };
			return func(this, index);
		}

		TESQuest* GetQuest()
		{
			using func_t = decltype(&TESCasino::GetQuest);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::GetQuest };
			return func(this);
		}

		CASINO_DATA* GetData()
		{
			using func_t = decltype(&TESCasino::GetData);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::GetData };
			return func(this);
		}

		TESCasinoChips* GetChipType()
		{
			using func_t = decltype(&TESCasino::GetChipType);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::GetChipType };
			return func(this);
		}

		std::int32_t GetMaxTotalWinnings()
		{
			using func_t = decltype(&TESCasino::GetMaxTotalWinnings);
			static REL::Relocation<func_t> func{ Offsets::TESCasino::GetMaxTotalWinnings };
			return func(this);
		}

	public:
		// members
		TESModelTextureSwap modelArrayList[10];    // 24
		TESTexture          textureArrayList[11];  // 164
		CASINO_DATA         data;                  // 1E8
	};
	static_assert(sizeof(TESCasino) == 0x220);
}
