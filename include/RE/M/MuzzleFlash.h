#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSProjectile;
	class NiAVObject;
	class NiLight;
	class TESObjectREFR;
	class TESObjectWEAP;

	class MuzzleFlash
	{
	public:
		void Init(TESObjectREFR* apParentRef)
		{
			using func_t = decltype(&MuzzleFlash::Init);
			static REL::Relocation<func_t> func{ Offsets::MuzzleFlash::Init };
			func(this, apParentRef);
		}

		void Update(float a_arg1, TESObjectREFR* a_arg2)
		{
			using func_t = decltype(&MuzzleFlash::Update);
			static REL::Relocation<func_t> func{ Offsets::MuzzleFlash::Update };
			func(this, a_arg1, a_arg2);
		}

		void Position3D(TESObjectREFR* apParentRef)
		{
			using func_t = decltype(&MuzzleFlash::Position3D);
			static REL::Relocation<func_t> func{ Offsets::MuzzleFlash::Position3D };
			func(this, apParentRef);
		}

		void UpdateLight()
		{
			using func_t = decltype(&MuzzleFlash::UpdateLight);
			static REL::Relocation<func_t> func{ Offsets::MuzzleFlash::UpdateLight };
			func(this);
		}

	public:
		// members
		bool                  bEnabled;          // 00
		bool                  bMPSEnabled;       // 01
		bool                  bUpdateLight;      // 02
		std::uint8_t          pad03;             // 03
		float                 fEnableTimer;      // 04
		float                 fDurationTimer;    // 08
		NiPointer<NiAVObject> spAVObject;        // 0C
		NiPointer<NiLight>    spLight;           // 10
		BGSProjectile*        pProjectile;       // 14
		TESObjectWEAP*        pWeaponSource;     // 18?
		TESObjectREFR*        pParentReference;  // 1C?
	};
}
