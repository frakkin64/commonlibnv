#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class ChangeData;
	class TESForm;

	class ChangesMap :
		public NiTPointerMap<std::uint32_t, ChangeData*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ChangesMap };
		static constexpr auto VTABLE{ VTABLE::ChangesMap };

		// override (NiTPointerMap<std::uint32_t, ChangeData*>)
		virtual ~ChangesMap() = default;  // 00

		// add
		virtual void RemoveAllChanges();  // 07

		ChangeData* AddChange(TESForm* apForm, std::uint32_t aiChange)
		{
			using func_t = decltype(&ChangesMap::AddChange);
			static REL::Relocation<func_t> func{ Offsets::ChangesMap::AddChange };
			return func(this, apForm, aiChange);
		}

		ChangeData* GetChanges(TESForm* apForm)
		{
			using func_t = decltype(&ChangesMap::GetChanges);
			static REL::Relocation<func_t> func{ Offsets::ChangesMap::GetChanges };
			return func(this, apForm);
		}

		bool RemoveChange(TESForm* apForm, std::uint32_t aiChange)
		{
			using func_t = decltype(&ChangesMap::RemoveChange);
			static REL::Relocation<func_t> func{ Offsets::ChangesMap::RemoveChange };
			return func(this, apForm, aiChange);
		}

		bool RemoveChanges(TESForm* apForm, bool abForceRemove)
		{
			using func_t = bool (ChangesMap::*)(TESForm*, bool);
			static REL::Relocation<func_t> func{ Offsets::ChangesMap::RemoveChanges };
			return func(this, apForm, abForceRemove);
		}

		bool RemoveChanges(std::uint32_t aiFormID, bool abForceRemove)
		{
			using func_t = bool (ChangesMap::*)(std::uint32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::ChangesMap::RemoveChanges_1 };
			return func(this, aiFormID, abForceRemove);
		}
	};
	static_assert(sizeof(ChangesMap) == 0x10);
}
