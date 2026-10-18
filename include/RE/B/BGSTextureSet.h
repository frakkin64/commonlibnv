#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTextureSet.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/T/TESBoundObject.h"

namespace RE
{
	class BSShaderTextureSet;
	class DecalData;
	class NiAVObject;
	class QueuedFile;
	class TESFile;
	class TESForm;
	class TESObjectREFR;

	class BGSTextureSet :
		public TESBoundObject,  // 00
		public BSTextureSet  // 30
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSTextureSet };
		static constexpr auto VTABLE{ VTABLE::BGSTextureSet };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kTXST_ID };

		// override (TESBoundObject)
		virtual ~BGSTextureSet() = default;                                  // 04
		virtual void ClearData() override;                                   // 05
		virtual bool ProcessBeforeSave() override;                           // 06
		virtual bool Load(TESFile* apFile) override;                         // 08
		virtual void Save() override;                                        // 0B
		virtual void Copy(TESForm* apCopy) override;                         // 42
		virtual bool Compare(TESForm* apCopy) override;                      // 43
		virtual void UnClone3D(TESObjectREFR* apRequester) override;         // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;  // 5E

		DecalData* GetDecalData()
		{
			using func_t = decltype(&BGSTextureSet::GetDecalData);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureSet::GetDecalData };
			return func(this);
		}

		BGSTextureSet* ctor()
		{
			using func_t = BGSTextureSet*(__thiscall*)(BGSTextureSet*);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureSet::ctor };
			return func(this);
		}

		BSTextureSet* GetAsShaderTextureSet()
		{
			using func_t = decltype(&BGSTextureSet::GetAsShaderTextureSet);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureSet::GetAsShaderTextureSet };
			return func(this);
		}

		BSShaderTextureSet* CreateShaderTextureSet()
		{
			using func_t = decltype(&BGSTextureSet::CreateShaderTextureSet);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureSet::CreateShaderTextureSet };
			return func(this);
		}

		void QueueTextureSet(IO_TASK_PRIORITY aePriority, QueuedFile* apParent, bool abNoSpecular)
		{
			using func_t = decltype(&BGSTextureSet::QueueTextureSet);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureSet::QueueTextureSet };
			func(this, aePriority, apParent, abNoSpecular);
		}

		static void CreateNullTextureSet()
		{
			using func_t = decltype(&BGSTextureSet::CreateNullTextureSet);
			static REL::Relocation<func_t> func{ Offsets::BGSTextureSet::CreateNullTextureSet };
			func();
		}

	public:
		// members
		// not placed: pTextures, pDecalData, iFlags, pTextureFileEntries
		std::uint8_t pad38[0x68];  // 38
	};
	static_assert(sizeof(BGSTextureSet) == 0xA0);
}
