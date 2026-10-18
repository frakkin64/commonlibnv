#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BGSFormChanges;

	class BGSSaveLoadChangesMap :
		public NiTPointerMap<std::uint32_t, BGSFormChanges*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSaveLoadChangesMap };
		static constexpr auto VTABLE{ VTABLE::BGSSaveLoadChangesMap };

		// override (NiTPointerMap<std::uint32_t, BGSFormChanges*>)
		virtual ~BGSSaveLoadChangesMap() = default;  // 00

		BGSSaveLoadChangesMap* ctor()
		{
			using func_t = BGSSaveLoadChangesMap*(__thiscall*)(BGSSaveLoadChangesMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadChangesMap::ctor };
			return func(this);
		}

		bool CheckChangeFlags(std::uint32_t aiFormID, BGSChangeFlags aiChangeFlags)
		{
			using func_t = decltype(&BGSSaveLoadChangesMap::CheckChangeFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadChangesMap::CheckChangeFlags };
			return func(this, aiFormID, aiChangeFlags);
		}

		void AddChangeFlags(std::uint32_t aiFormID, BGSChangeFlags aiChangeFlags)
		{
			using func_t = decltype(&BGSSaveLoadChangesMap::AddChangeFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadChangesMap::AddChangeFlags };
			func(this, aiFormID, aiChangeFlags);
		}

		bool RemoveChanges(std::uint32_t aiFormID)
		{
			using func_t = decltype(&BGSSaveLoadChangesMap::RemoveChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadChangesMap::RemoveChanges };
			return func(this, aiFormID);
		}

		bool RemoveChangeFlags(std::uint32_t aiFormID, BGSChangeFlags aiChangeFlags)
		{
			using func_t = decltype(&BGSSaveLoadChangesMap::RemoveChangeFlags);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadChangesMap::RemoveChangeFlags };
			return func(this, aiFormID, aiChangeFlags);
		}

		BGSFormChanges* GetChanges(std::uint32_t aiFormID)
		{
			using func_t = decltype(&BGSSaveLoadChangesMap::GetChanges);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadChangesMap::GetChanges };
			return func(this, aiFormID);
		}
	};
	static_assert(sizeof(BGSSaveLoadChangesMap) == 0x10);
}
