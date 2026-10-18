#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ExtraDataList;
	class TESFile;
	class TESForm;
	class TESGlobal;
	class TESHealthForm;

	class ContainerItemExtra
	{
	public:
		ContainerItemExtra* ctor()
		{
			using func_t = ContainerItemExtra*(__thiscall*)(ContainerItemExtra*);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&ContainerItemExtra::Save);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::Save };
			func(this);
		}

		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&ContainerItemExtra::Load);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::Load };
			return func(this, apFile);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&ContainerItemExtra::InitItem);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::InitItem };
			func(this, apOwner);
		}

		bool Compare(ContainerItemExtra* apCompare)
		{
			using func_t = decltype(&ContainerItemExtra::Compare);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::Compare };
			return func(this, apCompare);
		}

		void Copy(ContainerItemExtra* apCopy)
		{
			using func_t = decltype(&ContainerItemExtra::Copy);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::Copy };
			func(this, apCopy);
		}

		bool IsDefault()
		{
			using func_t = decltype(&ContainerItemExtra::IsDefault);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::IsDefault };
			return func(this);
		}

		void AddToExtraDataList(ExtraDataList* apExtra, TESHealthForm* apHealthForm)
		{
			using func_t = decltype(&ContainerItemExtra::AddToExtraDataList);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::AddToExtraDataList };
			func(this, apExtra, apHealthForm);
		}

		void AdjustHealthPercent(float afHealthPerc)
		{
			using func_t = decltype(&ContainerItemExtra::AdjustHealthPercent);
			static REL::Relocation<func_t> func{ Offsets::ContainerItemExtra::AdjustHealthPercent };
			func(this, afHealthPerc);
		}

	public:
		// members
		TESForm* pOwnerForm;   // 00
		union
		{
			TESGlobal* pOwnerGlobal;
			std::int32_t iOwnerRank;
			std::uint32_t iUnion;
		} ___u1;  // 04
		float    fHealthMult;  // 08
	};
	static_assert(sizeof(ContainerItemExtra) == 0xC);
}
