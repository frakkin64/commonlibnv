#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class NiPoint3;
	class TESForm;
	class TESObjectREFR;

	class CombatLocation
	{
	public:
		void SetRadius(float afRadius)
		{
			using func_t = decltype(&CombatLocation::SetRadius);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::SetRadius };
			func(this, afRadius);
		}

		bool GetFlag(std::uint32_t aiFlag)
		{
			using func_t = decltype(&CombatLocation::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::GetFlag };
			return func(this, aiFlag);
		}

		CombatLocation* ctor()
		{
			using func_t = CombatLocation*(__thiscall*)(CombatLocation*);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::ctor };
			return func(this);
		}

		void SetWorldLocation(BGSWorldLocation const& arWorldLoc)
		{
			using func_t = decltype(&CombatLocation::SetWorldLocation);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::SetWorldLocation };
			func(this, arWorldLoc);
		}

		void SetRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&CombatLocation::SetRef);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::SetRef };
			func(this, apRef);
		}

		void SetPoint(NiPoint3 const& arPoint, TESForm* apSpace)
		{
			using func_t = decltype(&CombatLocation::SetPoint);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::SetPoint };
			func(this, arPoint, apSpace);
		}

		void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatLocation::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatLocation::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BGSWorldLocation WorldLoc;   // 00
		TESObjectREFR*   pRef;       // 10
		std::int32_t     iLocation;  // 14
		float            fRadius;    // 18
		std::uint32_t    iFlags;     // 1C
	};
	static_assert(sizeof(CombatLocation) == 0x20);
}
