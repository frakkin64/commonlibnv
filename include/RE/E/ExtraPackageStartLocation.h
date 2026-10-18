#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/W/WORLD_LOCATION.h"

namespace RE
{
	class NiPoint3;
	class TESObjectCELL;
	class TESWorldSpace;

	class ExtraPackageStartLocation :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPackageStartLocation };
		static constexpr auto VTABLE{ VTABLE::ExtraPackageStartLocation };

		// override (BSExtraData)
		virtual ~ExtraPackageStartLocation() = default;         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraPackageStartLocation* ctor()
		{
			using func_t = ExtraPackageStartLocation*(__thiscall*)(ExtraPackageStartLocation*);
			static REL::Relocation<func_t> func{ Offsets::ExtraPackageStartLocation::ctor };
			return func(this);
		}

		ExtraPackageStartLocation* ctor(TESWorldSpace* apWorld, TESObjectCELL* apIntCell, NiPoint3 const& aPt, float afzrotation)
		{
			using func_t = ExtraPackageStartLocation*(__thiscall*)(ExtraPackageStartLocation*, TESWorldSpace*, TESObjectCELL*, NiPoint3 const&, float);
			static REL::Relocation<func_t> func{ Offsets::ExtraPackageStartLocation::ctor_1 };
			return func(this, apWorld, apIntCell, aPt, afzrotation);
		}

	public:
		// members
		WORLD_LOCATION worldLoc;  // 0C
	};
	static_assert(sizeof(ExtraPackageStartLocation) == 0x20);
}
