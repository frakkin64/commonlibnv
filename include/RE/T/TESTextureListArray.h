#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESFile;
	class TESModelList;
	class TESTextureList;

	class TESTextureListArray
	{
	public:
		void ClearData()
		{
			using func_t = decltype(&TESTextureListArray::ClearData);
			static REL::Relocation<func_t> func{ Offsets::TESTextureListArray::ClearData };
			func(this);
		}

		void Load(TESModelList* apModelList, TESFile* apFile)
		{
			using func_t = decltype(&TESTextureListArray::Load);
			static REL::Relocation<func_t> func{ Offsets::TESTextureListArray::Load };
			func(this, apModelList, apFile);
		}

		void Copy(TESTextureListArray* apTextureListArray)
		{
			using func_t = decltype(&TESTextureListArray::Copy);
			static REL::Relocation<func_t> func{ Offsets::TESTextureListArray::Copy };
			func(this, apTextureListArray);
		}

	public:
		// members
		std::uint32_t    iTextureListCount;  // 00
		TESTextureList** pTextureLists;      // 04
	};
}
