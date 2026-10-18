#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/T/TESTextureListArray.h"

namespace RE
{
	class TESFile;

	class TESModelList :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModelList };
		static constexpr auto VTABLE{ VTABLE::TESModelList };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESModelList* ctor()
		{
			using func_t = TESModelList*(__thiscall*)(TESModelList*);
			static REL::Relocation<func_t> func{ Offsets::TESModelList::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESModelList*);
			static REL::Relocation<func_t> func{ Offsets::TESModelList::dtor };
			func(this);
		}

		void Save(CHUNK_ID aeModelListID, CHUNK_ID aeTextureListID)
		{
			using func_t = decltype(&TESModelList::Save);
			static REL::Relocation<func_t> func{ Offsets::TESModelList::Save };
			func(this, aeModelListID, aeTextureListID);
		}

		void LoadModelListChunk(TESModelList* apModelList, TESFile* apFile)
		{
			using func_t = decltype(&TESModelList::LoadModelListChunk);
			static REL::Relocation<func_t> func{ Offsets::TESModelList::LoadModelListChunk };
			func(this, apModelList, apFile);
		}

		void AddNIFFile(char const* apFilename)
		{
			using func_t = decltype(&TESModelList::AddNIFFile);
			static REL::Relocation<func_t> func{ Offsets::TESModelList::AddNIFFile };
			func(this, apFilename);
		}

	public:
		// members
		BSSimpleList<char const*> nifFilenames;      // 04
		TESTextureListArray       TextureListArray;  // 0C
	};
}
