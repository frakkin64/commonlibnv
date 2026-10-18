#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class BSMultiBoundNode;
	class NiNode;
	class TESForm;
	class TESObjectREFR;

	class LOADED_CELL_DATA
	{
	public:
		LOADED_CELL_DATA* ctor()
		{
			using func_t = LOADED_CELL_DATA*(__thiscall*)(LOADED_CELL_DATA*);
			static REL::Relocation<func_t> func{ Offsets::LOADED_CELL_DATA::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(LOADED_CELL_DATA*);
			static REL::Relocation<func_t> func{ Offsets::LOADED_CELL_DATA::dtor };
			func(this);
		}

	public:
		// members
		NiPointer<NiNode>                                   spCell3D;               // 00
		BSSimpleList<TESObjectREFR*>                        LargeAnimatedRefs;      // 04
		NiTMap<TESObjectREFR*, NiNode*>                     AnimatedRefMap;         // 0C
		NiTMap<TESForm*, TESObjectREFR*>                    EmittanceSourceRefMap;  // 1C
		NiTMap<TESObjectREFR*, NiNode*>                     EmittanceLightRefMap;   // 2C
		NiTMap<TESObjectREFR*, NiPointer<BSMultiBoundNode>> MultiboundRefMap;       // 3C
		BSSimpleList<TESObjectREFR*>                        ScriptedRefs;           // 4C
		BSSimpleList<TESObjectREFR*>                        ActivatingRefs;         // 54
		BSSimpleList<TESObjectREFR*>                        WaterRefs;              // 5C
	};
	static_assert(sizeof(LOADED_CELL_DATA) == 0x64);
}
