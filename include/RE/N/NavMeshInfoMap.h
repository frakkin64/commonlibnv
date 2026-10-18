#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiTMap.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class NavMeshInfo;
	class TESFile;
	class TESObjectCELL;
	class TESWorldSpace;

	class NavMeshInfoMap :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshInfoMap };
		static constexpr auto VTABLE{ VTABLE::NavMeshInfoMap };

		// override (TESForm)
		virtual ~NavMeshInfoMap() = default;                 // 04
		virtual bool Load(TESFile* apFile) override;         // 08
		virtual void Save() override;                        // 0B
		virtual bool SavesBefore(TESForm* apForm) override;  // 0F
		virtual void InitItem() override;                    // 22
		virtual void SetAltered(bool abAltered) override;    // 32

		NavMeshInfo* GetNavMeshInfo(std::uint32_t auiNavMeshID)
		{
			using func_t = decltype(&NavMeshInfoMap::GetNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::GetNavMeshInfo };
			return func(this, auiNavMeshID);
		}

		NavMeshInfoMap* ctor()
		{
			using func_t = NavMeshInfoMap*(__thiscall*)(NavMeshInfoMap*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::ctor };
			return func(this);
		}

		void DeleteNavMeshInfo(std::uint32_t auiNavMeshID)
		{
			using func_t = decltype(&NavMeshInfoMap::DeleteNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::DeleteNavMeshInfo };
			func(this, auiNavMeshID);
		}

		void Clear()
		{
			using func_t = decltype(&NavMeshInfoMap::Clear);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::Clear };
			func(this);
		}

		void CheckMap()
		{
			using func_t = decltype(&NavMeshInfoMap::CheckMap);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::CheckMap };
			func(this);
		}

		BSSimpleArray<NavMeshInfo*, 1024> const* FindNavMeshInfoForCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&NavMeshInfoMap::FindNavMeshInfoForCell);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::FindNavMeshInfoForCell };
			return func(this, apCell);
		}

		BSSimpleArray<NavMeshInfo*, 1024> const* FindNavMeshInfoForCellKey(TESWorldSpace* apWorldSpace, std::int32_t aiCellKey)
		{
			using func_t = decltype(&NavMeshInfoMap::FindNavMeshInfoForCellKey);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::FindNavMeshInfoForCellKey };
			return func(this, apWorldSpace, aiCellKey);
		}

		void GetAllNavMeshInfo(BSSimpleArray<NavMeshInfo*, 1024>* apReturnArray)
		{
			using func_t = decltype(&NavMeshInfoMap::GetAllNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::GetAllNavMeshInfo };
			func(this, apReturnArray);
		}

	private:
		void AddInfoToCellKeyMap(NavMeshInfo* apNavMeshInfo)
		{
			using func_t = decltype(&NavMeshInfoMap::AddInfoToCellKeyMap);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfoMap::AddInfoToCellKeyMap };
			func(this, apNavMeshInfo);
		}

	public:
		// members
		bool                                                                              bUpdateAll;             // 18
		std::uint8_t                                                                      pad19[0x3];             // 19
		NiTPointerMap<std::uint32_t, NavMeshInfo*>                                        InfoMap;                // 1C
		NiTMap<std::uint32_t, NiTMap<std::uint32_t, BSSimpleArray<NavMeshInfo*, 1024>*>*> CellKeyNavMeshInfoMap;  // 2C
		bool                                                                              bInit;                  // 3C
		std::uint8_t                                                                      pad3D[0x3];             // 3D
	};
	static_assert(sizeof(NavMeshInfoMap) == 0x40);
}
