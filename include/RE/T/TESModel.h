#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/T/TESTextureList.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class TESModelTextureSwap;

	class TESModel :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModel };
		static constexpr auto VTABLE{ VTABLE::TESModel };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual ~TESModel() = default;                         // 04
		virtual const char* GetModel() const;                  // 05
		virtual void SetModel(char const* apModel);            // 06
		virtual TESModelTextureSwap* GetAsModelTextureSwap();  // 07

		TESModel* ctor()
		{
			using func_t = TESModel*(__thiscall*)(TESModel*);
			static REL::Relocation<func_t> func{ Offsets::TESModel::ctor };
			return func(this);
		}

		void GetDistantModelName(char* apModelName)
		{
			using func_t = void (TESModel::*)(char*);
			static REL::Relocation<func_t> func{ Offsets::TESModel::GetDistantModelName };
			func(this, apModelName);
		}

		static void GetDistantModelName(char* apModelName, TESForm* apForm)
		{
			using func_t = void(__cdecl*)(char*, TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESModel::GetDistantModelName_1 };
			func(apModelName, apForm);
		}

		void Save(CHUNK_ID aeModelID, CHUNK_ID aeTextureID)
		{
			using func_t = decltype(&TESModel::Save);
			static REL::Relocation<func_t> func{ Offsets::TESModel::Save };
			func(this, aeModelID, aeTextureID);
		}

		static void LoadModelChunk(TESModel* apModel, TESFile* apFile)
		{
			using func_t = decltype(&TESModel::LoadModelChunk);
			static REL::Relocation<func_t> func{ Offsets::TESModel::LoadModelChunk };
			func(apModel, apFile);
		}

		static char const* GetModel(TESForm* apObj)
		{
			using func_t = char const*(__cdecl*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESModel::GetModel };
			return func(apObj);
		}

	public:
		// members
		BSStringT<char> cModel;       // 04
		TESTextureList  TextureList;  // 0C
		std::uint8_t    cFlags;       // 14
		std::uint8_t    pad15[0x3];   // 15
	};
}
