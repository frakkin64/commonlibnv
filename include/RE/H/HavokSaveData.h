#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiAVObject;
	class TESObjectREFR;
	class bhkNiCollisionObject;

	class HavokSaveData
	{
	public:
		HavokSaveData* ctor()
		{
			using func_t = HavokSaveData*(__thiscall*)(HavokSaveData*);
			static REL::Relocation<func_t> func{ Offsets::HavokSaveData::ctor };
			return func(this);
		}

	public:
		// members
		std::uint8_t          cFlags;              // 00
		std::uint8_t          pad01;               // 01
		std::uint16_t         sActiveBoneCount;    // 02
		std::uint16_t         sInactiveBoneCount;  // 04
		std::uint16_t         pad06;               // 06
		TESObjectREFR*        pRef;                // 08
		NiAVObject*           pObj3D;              // 0C
		bhkNiCollisionObject* pCollisionRoot;      // 10
	};
}
