#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkArrowTargetListener.h"

namespace RE
{
	class NiAVObject;
	class hkVector4;
	class hkpEntity;

	class TESArrowTargetListener :
		public bhkArrowTargetListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESArrowTargetListener };
		static constexpr auto VTABLE{ VTABLE::TESArrowTargetListener };

		// override (bhkArrowTargetListener)
		virtual ~TESArrowTargetListener() = default;                     // 00
		virtual void entityRemovedCallback(hkpEntity* entity) override;  // 02
		virtual void entityDeletedCallback(hkpEntity* entity) override;  // 05
		virtual void Update(float a_arg1) override;                      // 06

		TESArrowTargetListener* ctor()
		{
			using func_t = TESArrowTargetListener*(__thiscall*)(TESArrowTargetListener*);
			static REL::Relocation<func_t> func{ Offsets::TESArrowTargetListener::ctor };
			return func(this);
		}

		static void AddArrowTarget(hkVector4& aArrowCenterOfMassWorld, NiAVObject* apTargetObject)
		{
			using func_t = decltype(&TESArrowTargetListener::AddArrowTarget);
			static REL::Relocation<func_t> func{ Offsets::TESArrowTargetListener::AddArrowTarget };
			func(aArrowCenterOfMassWorld, apTargetObject);
		}

		static void RemoveArrowTarget(hkVector4& aArrowCenterOfMassWorld, NiAVObject* apTargetObject)
		{
			using func_t = decltype(&TESArrowTargetListener::RemoveArrowTarget);
			static REL::Relocation<func_t> func{ Offsets::TESArrowTargetListener::RemoveArrowTarget };
			func(aArrowCenterOfMassWorld, apTargetObject);
		}
	};
	static_assert(sizeof(TESArrowTargetListener) == 0x14);
}
