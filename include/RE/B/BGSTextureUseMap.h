#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class NiAVObject;
	class NiNode;
	class NiTexture;
	class TESForm;
	class TEX_USER_DATA;

	class BGSTextureUseMap
	{
	public:
		BGSTextureUseMap* ctor()
		{
			using func_t = BGSTextureUseMap*(__thiscall*)(BGSTextureUseMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureUseMap::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSTextureUseMap*);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureUseMap::dtor };
			func(this);
		}

		void CollectTexUseData(NiNode* apNode, TESForm* apDefaultUser, bool abCheckActors)
		{
			using func_t = decltype(&BGSTextureUseMap::CollectTexUseData);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureUseMap::CollectTexUseData };
			func(this, apNode, apDefaultUser, abCheckActors);
		}

		void CollectTexUseDataRecursive(NiAVObject* ap3D, bool abCheckActors)
		{
			using func_t = decltype(&BGSTextureUseMap::CollectTexUseDataRecursive);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureUseMap::CollectTexUseDataRecursive };
			func(this, ap3D, abCheckActors);
		}

		bool WriteToFile(char const* apFilename)
		{
			using func_t = decltype(&BGSTextureUseMap::WriteToFile);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureUseMap::WriteToFile };
			return func(this, apFilename);
		}

		void CollectTextureUseDataForLoadedArea(bool abCheckActors)
		{
			using func_t = decltype(&BGSTextureUseMap::CollectTextureUseDataForLoadedArea);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureUseMap::CollectTextureUseDataForLoadedArea };
			func(this, abCheckActors);
		}

	public:
		// members
		TESForm*                           pDefaultUser;  // 00
		NiTMap<NiTexture*, TEX_USER_DATA*> UserMap;       // 04
	};
}
