#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class EGTData;

	class BSFaceGenModelTextureData
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(BSFaceGenModelTextureData*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelTextureData::dtor };
			func(this);
		}

	public:
		// members
		BSStringT<char> EGTFilename;  // 00
		EGTData*        pEGTData;     // 08
	};
	static_assert(sizeof(BSFaceGenModelTextureData) == 0xC);
}
