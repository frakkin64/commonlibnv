#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkCharacterController.h"

namespace RE
{
	class Projectile;
	class TESObjectREFR;
	class bhkCharacterControllerCinfo;
	class hkpCollidable;

	class alignas(16) ProjectileListener :
		public bhkCharacterController  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ProjectileListener };
		static constexpr auto VTABLE{ VTABLE::ProjectileListener };

		// override (bhkCharacterController)
		virtual ~ProjectileListener() = default;  // 00

		ProjectileListener* ctor(bhkCharacterControllerCinfo& arInfo, Projectile* apProjectile)
		{
			using func_t = ProjectileListener*(__thiscall*)(ProjectileListener*, bhkCharacterControllerCinfo&, Projectile*);
			static REL::Relocation<func_t> func{ Offsets::ProjectileListener::ctor };
			return func(this, arInfo, apProjectile);
		}

	private:
		static TESObjectREFR* GetObjectREFR(hkpCollidable const* apCollidable)
		{
			using func_t = decltype(&ProjectileListener::GetObjectREFR);
			static REL::Relocation<func_t> func{ Offsets::ProjectileListener::GetObjectREFR };
			return func(apCollidable);
		}

	public:
		// members
		Projectile*  pProj;        // 650
		std::uint8_t pad654[0xC];  // 654
	};
}
