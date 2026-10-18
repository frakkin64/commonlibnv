#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkCharacterProxyCinfo.h"
#include "RE/C/CFilter.h"
#include "RE/C/COL_LAYER.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkpCharacterStateType.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SHAPE_TYPES.h"

namespace RE
{
	class NiAVObject;
	class NiPoint3;
	class bhkShape;
	class bhkWorld;
	class hkpCharacterStateManager;

	class alignas(16) bhkCharacterControllerCinfo :
		public bhkCharacterProxyCinfo  // 00
	{
	public:
		void SetGravity(float afValue)
		{
			using func_t = decltype(&bhkCharacterControllerCinfo::SetGravity);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::SetGravity };
			func(this, afValue);
		}

		void SetPosition(NiPoint3 const& arPos)
		{
			using func_t = decltype(&bhkCharacterControllerCinfo::SetPosition);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::SetPosition };
			func(this, arPos);
		}

		void SetAcrobatics(float afValue)
		{
			using func_t = decltype(&bhkCharacterControllerCinfo::SetAcrobatics);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::SetAcrobatics };
			func(this, afValue);
		}

		void SetStartState(hkpCharacterStateType aeState)
		{
			using func_t = decltype(&bhkCharacterControllerCinfo::SetStartState);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::SetStartState };
			func(this, aeState);
		}

		void SetColFilter(COL_LAYER aeLayer, std::int32_t aiGroup)
		{
			using func_t = decltype(&bhkCharacterControllerCinfo::SetColFilter);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::SetColFilter };
			func(this, aeLayer, aiGroup);
		}

		void SetShape(bhkShape* apShape)
		{
			using func_t = decltype(&bhkCharacterControllerCinfo::SetShape);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::SetShape };
			func(this, apShape);
		}

		bhkCharacterControllerCinfo* ctor(bool abDefaultStates)
		{
			using func_t = bhkCharacterControllerCinfo*(__thiscall*)(bhkCharacterControllerCinfo*, bool);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterControllerCinfo::ctor };
			return func(this, abDefaultStates);
		}

	public:
		// members
		NiAVObject*                        pObject;           // 80
		CFilter                            iColFilter;        // 84
		bhkWorld*                          pWorld;            // 88
		float                              fAcrobatics;       // 8C
		float                              fGravity;          // 90
		bool                               bAvoidBox;         // 94
		bool                               bCollisionBox;     // 95
		bool                               bUseDefaultShape;  // 96
		bool                               bCanPitch;         // 97
		bool                               bCanRoll;          // 98
		std::uint8_t                       pad99[0x3];        // 99
		hkpCharacterStateType              eStartState;       // 9C
		NiPointer<bhkShape>                spShape;           // A0
		hkRefPtr<hkpCharacterStateManager> spManager;         // A4
		float                              fStepHeight;       // A8
		float                              fScale;            // AC
		SHAPE_TYPES                        eShapeType;        // B0
		std::uint32_t                      iPriority;         // B4
		std::uint8_t                       padB8[0x8];        // B8
	};
}
