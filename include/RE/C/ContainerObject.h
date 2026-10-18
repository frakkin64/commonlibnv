#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ContainerItemExtra;
	class TESBoundObject;
	class TESForm;

	class ContainerObject
	{
	public:
		void Save()
		{
			using func_t = decltype(&ContainerObject::Save);
			static REL::Relocation<func_t> func{ Offsets::ContainerObject::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ContainerObject::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ContainerObject::InitItem };
			func(this, apOwner);
		}

		bool Compare(ContainerObject* apCompare)
		{
			using func_t = decltype(&ContainerObject::Compare);
			static REL::Relocation<func_t> func{ Offsets::ContainerObject::Compare };
			return func(this, apCompare);
		}

	public:
		// members
		std::int32_t        i_count;     // 00
		TESBoundObject*     pObj;        // 04
		ContainerItemExtra* pItemExtra;  // 08
	};
}
