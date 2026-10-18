#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/REGION_DATA_ID.h"

namespace RE
{
	class REGION_DATA_BASE;
	class TESForm;

	class __declspec(novtable) TESRegionData
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionData };
		static constexpr auto VTABLE{ VTABLE::TESRegionData };

		// add
		virtual ~TESRegionData() = default;                                         // 00
		virtual void Save();                                                        // 01
		virtual bool LoadRegionData(REGION_DATA_BASE* apData);                      // 02
		virtual void InitItem(TESForm* apOwner);                                    // 03
		virtual REGION_DATA_ID GetID();                                             // 04
		virtual TESRegionData* Copy();                                              // 05
		virtual TESRegionData* Blend(const TESRegionData* a_arg1);                  // 06
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2);  // 07
		virtual bool Validate();                                                    // 08

		TESRegionData* ctor()
		{
			using func_t = TESRegionData*(__thiscall*)(TESRegionData*);
			static REL::Relocation<func_t> func{ Offsets::TESRegionData::ctor };
			return func(this);
		}

		bool GetOverride() const
		{
			using func_t = decltype(&TESRegionData::GetOverride);
			static REL::Relocation<func_t> func{ Offsets::TESRegionData::GetOverride };
			return func(this);
		}

		void SetOverride(bool abNewOverride)
		{
			using func_t = decltype(&TESRegionData::SetOverride);
			static REL::Relocation<func_t> func{ Offsets::TESRegionData::SetOverride };
			func(this, abNewOverride);
		}

		bool SetPriority(std::uint8_t acPriority)
		{
			using func_t = decltype(&TESRegionData::SetPriority);
			static REL::Relocation<func_t> func{ Offsets::TESRegionData::SetPriority };
			return func(this, acPriority);
		}

		std::uint8_t GetPriority() const
		{
			using func_t = decltype(&TESRegionData::GetPriority);
			static REL::Relocation<func_t> func{ Offsets::TESRegionData::GetPriority };
			return func(this);
		}

	public:
		// members
		bool         bOverride;  // 04
		bool         bIgnore;    // 05
		std::uint8_t cPriority;  // 06
		std::uint8_t pad07;      // 07
	};
	static_assert(sizeof(TESRegionData) == 0x8);
}
