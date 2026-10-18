#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSTasklet;
	class BSTaskletGroupData;

	class BSTaskletGroup
	{
	public:
		bool Open()
		{
			using func_t = decltype(&BSTaskletGroup::Open);
			static REL::Relocation<func_t> func{ Offsets::BSTaskletGroup::Open };
			return func(this);
		}

		bool Close()
		{
			using func_t = decltype(&BSTaskletGroup::Close);
			static REL::Relocation<func_t> func{ Offsets::BSTaskletGroup::Close };
			return func(this);
		}

		bool AttachTask(BSTasklet& aTask, bool abLastTask)
		{
			using func_t = decltype(&BSTaskletGroup::AttachTask);
			static REL::Relocation<func_t> func{ Offsets::BSTaskletGroup::AttachTask };
			return func(this, aTask, abLastTask);
		}

	public:
		// members
		BSTaskletGroupData* pData;  // 00
	};
}
