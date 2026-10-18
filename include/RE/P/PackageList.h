#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class Actor;
	class TESForm;
	class TESPackage;

	class PackageList
	{
	public:
		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&PackageList::InitItem);
			static REL::Relocation<func_t> func{ Offsets::PackageList::InitItem };
			func(this, apOwner);
		}

		TESPackage* FindCurrentPackage(Actor* apActor)
		{
			using func_t = decltype(&PackageList::FindCurrentPackage);
			static REL::Relocation<func_t> func{ Offsets::PackageList::FindCurrentPackage };
			return func(this, apActor);
		}

		void FindMissedPackages(Actor* apActor, BSSimpleList<TESPackage*>* apPacks, float afStartdate, float afhour)
		{
			using func_t = decltype(&PackageList::FindMissedPackages);
			static REL::Relocation<func_t> func{ Offsets::PackageList::FindMissedPackages };
			func(this, apActor, apPacks, afStartdate, afhour);
		}

	public:
		// members
		BSSimpleList<TESPackage*> listPackages;  // 00
	};
}
