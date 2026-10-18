#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class TESForm;

	class __declspec(novtable) TESPackageData
	{
	public:
		static constexpr auto RTTI{ RTTI::TESPackageData };
		static constexpr auto VTABLE{ VTABLE::TESPackageData };

		// add
		virtual ~TESPackageData() = default;                     // 00
		virtual void Copy(TESPackageData* __formal);             // 01
		virtual bool Compare(TESPackageData* __formal);          // 02
		virtual void Save();                                     // 03
		virtual void InitItem(TESForm* __formal);                // 04
		virtual void SaveGame(BGSSaveFormBuffer* __formal);      // 05
		virtual void LoadGame(BGSLoadFormBuffer* __formal);      // 06
		virtual void InitLoadGame(BGSLoadFormBuffer* __formal);  // 07

		TESPackageData* ctor()
		{
			using func_t = TESPackageData*(__thiscall*)(TESPackageData*);
			static REL::Relocation<func_t> func{ Offsets::TESPackageData::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESPackageData) == 0x4);
}
