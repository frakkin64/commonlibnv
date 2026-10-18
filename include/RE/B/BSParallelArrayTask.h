#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSParallelArrayTask
	{
	public:
		BSParallelArrayTask* ctor(void* apTaskFunc, void* apData, std::uint32_t aiSize)
		{
			using func_t = BSParallelArrayTask*(__thiscall*)(BSParallelArrayTask*, void*, void*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BSParallelArrayTask::ctor };
			return func(this, apTaskFunc, apData, aiSize);
		}

	public:
		// members
		void*                  pTaskFunc;  // 00
		void*                  pData;      // 04
		std::uint32_t          iSize;      // 08
		volatile std::uint32_t iIndex;     // 0C
	};
}
