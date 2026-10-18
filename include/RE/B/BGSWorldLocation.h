#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class TESForm;
	class TESObjectCELL;
	class TESWorldSpace;

	class BGSWorldLocation
	{
	public:
		BGSWorldLocation* ctor(NiPoint3 const& arPoint, TESForm* apSpace)
		{
			using func_t = BGSWorldLocation*(__thiscall*)(BGSWorldLocation*, NiPoint3 const&, TESForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::ctor };
			return func(this, arPoint, apSpace);
		}

		TESObjectCELL* GetCell() const
		{
			using func_t = decltype(&BGSWorldLocation::GetCell);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::GetCell };
			return func(this);
		}

		bool GetCellOrWorld(TESObjectCELL*& arpCell, TESWorldSpace*& arpWorld) const
		{
			using func_t = decltype(&BGSWorldLocation::GetCellOrWorld);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::GetCellOrWorld };
			return func(this, arpCell, arpWorld);
		}

		float GetDistanceSquared(BGSWorldLocation const& arWorldLocation) const
		{
			using func_t = decltype(&BGSWorldLocation::GetDistanceSquared);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::GetDistanceSquared };
			return func(this, arWorldLocation);
		}

		float GetDistance(BGSWorldLocation const& arWorldLocation) const
		{
			using func_t = decltype(&BGSWorldLocation::GetDistance);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::GetDistance };
			return func(this, arWorldLocation);
		}

		float GetModifiedDistanceSquared(BGSWorldLocation const& arWorldLocation, NiPoint3 const& arCoordMult) const
		{
			using func_t = decltype(&BGSWorldLocation::GetModifiedDistanceSquared);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::GetModifiedDistanceSquared };
			return func(this, arWorldLocation, arCoordMult);
		}

		static bool CheckSpace(TESForm* apSpace)
		{
			using func_t = decltype(&BGSWorldLocation::CheckSpace);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::CheckSpace };
			return func(apSpace);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&BGSWorldLocation::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&BGSWorldLocation::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::LoadGame };
			func(this, apLoadGameBuffer);
		}

		BGSWorldLocation* ctor()
		{
			using func_t = BGSWorldLocation*(__thiscall*)(BGSWorldLocation*);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::ctor_1 };
			return func(this);
		}

		void SetLocation(NiPoint3 const& arPoint, TESForm* apSpace)
		{
			using func_t = decltype(&BGSWorldLocation::SetLocation);
			static REL::Relocation<func_t> func{ Offsets::BGSWorldLocation::SetLocation };
			func(this, arPoint, apSpace);
		}

	public:
		// members
		NiPoint3 Point;   // 00
		TESForm* pSpace;  // 0C
	};
}
