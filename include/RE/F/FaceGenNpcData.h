#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BS_FACEGEN_LOD.h"
#include "RE/F/FR2MatrixVTC.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/S/SEX.h"

namespace RE
{
	class BGSHeadPart;
	class TESEyes;
	class TESHair;
	class TESModel;

	class FaceGenNpcData
	{
	public:
		FaceGenNpcData* ctor()
		{
			using func_t = FaceGenNpcData*(__thiscall*)(FaceGenNpcData*);
			static REL::Relocation<func_t> func{ Offsets::FaceGenNpcData::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(FaceGenNpcData*);
			static REL::Relocation<func_t> func{ Offsets::FaceGenNpcData::dtor };
			func(this);
		}

	public:
		// members
		// not placed: pTexture, pHeadPartNodeName, spTexBaseMod, pLeftEye, pRightEye
		FR2MatrixVTC<float>          FaceCoord[2][2];    // 00
		TESHair*                     pHair;              // 80
		std::int32_t                 iHairColor;         // 84
		float                        fHairLength;        // 88
		TESEyes*                     pEyes;              // 8C
		SEX                          eSex;               // 90
		NiTPrimitiveArray<TESModel*> pModel;             // 94
		std::uint8_t                 padA4[0x20];        // A4
		BSSimpleList<BGSHeadPart*>   Accessories;        // C4
		std::uint8_t                 padCC[0x8];         // CC
		bool                         bFaceGenTexturing;  // D4
		bool                         bPlayer;            // D5
		std::uint8_t                 padD6[0xA];         // D6
		BS_FACEGEN_LOD               eLod;               // E0
	};
}
