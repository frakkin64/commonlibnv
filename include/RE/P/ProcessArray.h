#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPrimitiveArray.h"
#include "RE/P/PROCESS_TYPE.h"

namespace RE
{
	class MobileObject;

	class ProcessArray
	{
	public:
		std::uint32_t GetProcessLevelTail(PROCESS_TYPE aProcessLevel) const
		{
			using func_t = decltype(&ProcessArray::GetProcessLevelTail);
			static REL::Relocation<func_t> func{ Offsets::ProcessArray::GetProcessLevelTail };
			return func(this, aProcessLevel);
		}

		std::uint32_t GetProcessLevelHead(PROCESS_TYPE aProcessLevel) const
		{
			using func_t = decltype(&ProcessArray::GetProcessLevelHead);
			static REL::Relocation<func_t> func{ Offsets::ProcessArray::GetProcessLevelHead };
			return func(this, aProcessLevel);
		}

		MobileObject* GetItem(std::uint32_t auiIndex) const
		{
			using func_t = decltype(&ProcessArray::GetItem);
			static REL::Relocation<func_t> func{ Offsets::ProcessArray::GetItem };
			return func(this, auiIndex);
		}

		void RemoveActor(MobileObject* apActor, PROCESS_TYPE aWhichList)
		{
			using func_t = decltype(&ProcessArray::RemoveActor);
			static REL::Relocation<func_t> func{ Offsets::ProcessArray::RemoveActor };
			func(this, apActor, aWhichList);
		}

	public:
		// members
		NiTPrimitiveArray<MobileObject*> AIProcessArray;             // 00
		std::uint32_t                    ProcessLevelHeads[4];       // 10
		std::uint32_t                    ProcessLevelTails[4];       // 20
		std::uint32_t                    ProcessLevelNextUpdate[4];  // 30?
	};
}
