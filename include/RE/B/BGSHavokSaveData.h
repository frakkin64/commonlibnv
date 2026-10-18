#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiAVObject;
	class TESObjectREFR;
	class bhkNiCollisionObject;

	class BGSHavokSaveData
	{
	public:
		// members
		std::uint8_t          cFlags;               // 00
		std::uint8_t          pad01[0x3];           // 01
		std::uint32_t         iActiveBoneCount;     // 04
		std::uint32_t         iInactiveBoneCount;   // 08
		std::uint32_t         iKeyFramedBoneCount;  // 0C
		TESObjectREFR*        pRef;                 // 10
		NiAVObject*           pObj3D;               // 14
		bhkNiCollisionObject* pCollisionRoot;       // 18
		void*                 pSaveLoadBuffer;      // 1C
	};
}
