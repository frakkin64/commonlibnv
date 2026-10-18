#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LockFreeMap.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class EXTERIOR_CELL_DATA;
	class ExteriorCellLoaderTask;
	class TESObjectCELL;
	class TESWorldSpace;

	class ExteriorCellLoader
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(ExteriorCellLoader*);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::dtor };
			func(this);
		}

		std::uint32_t TryCancelTasks()
		{
			using func_t = decltype(&ExteriorCellLoader::TryCancelTasks);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::TryCancelTasks };
			return func(this);
		}

		void WaitForTasks()
		{
			using func_t = decltype(&ExteriorCellLoader::WaitForTasks);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::WaitForTasks };
			func(this);
		}

		void QueueCellLoad(TESWorldSpace* apWorld, std::int32_t aiCellX, std::int32_t aiCellY)
		{
			using func_t = decltype(&ExteriorCellLoader::QueueCellLoad);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::QueueCellLoad };
			func(this, apWorld, aiCellX, aiCellY);
		}

		void CancelAllCellLoads()
		{
			using func_t = decltype(&ExteriorCellLoader::CancelAllCellLoads);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::CancelAllCellLoads };
			func(this);
		}

		void RemoveCell(std::int32_t aiCellX, std::int32_t aiCellY)
		{
			using func_t = decltype(&ExteriorCellLoader::RemoveCell);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::RemoveCell };
			func(this, aiCellX, aiCellY);
		}

		void LoadCellData(EXTERIOR_CELL_DATA* apCellData)
		{
			using func_t = decltype(&ExteriorCellLoader::LoadCellData);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::LoadCellData };
			func(this, apCellData);
		}

		void AttachLoadedCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&ExteriorCellLoader::AttachLoadedCell);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::AttachLoadedCell };
			func(this, apCell);
		}

	protected:
		void ClearData()
		{
			using func_t = decltype(&ExteriorCellLoader::ClearData);
			static REL::Relocation<func_t> func{ Offsets::ExteriorCellLoader::ClearData };
			func(this);
		}

	public:
		// members
		LockFreeMap<std::uint32_t, NiPointer<ExteriorCellLoaderTask>> QueuedCellMap;  // 00
	};
}
