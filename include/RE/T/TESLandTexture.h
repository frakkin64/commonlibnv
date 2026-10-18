#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/T/TESForm.h"
#include "RE/T/TEXTURE_HAVOK_DATA.h"

namespace RE
{
	class BGSTextureSet;
	class QueuedFile;
	class TESFile;
	class TESGrass;

	class TESLandTexture :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESLandTexture };
		static constexpr auto VTABLE{ VTABLE::TESLandTexture };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLTEX_ID };

		// override (TESForm)
		virtual ~TESLandTexture() = default;             // 04
		virtual void ClearData() override;               // 05
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESLandTexture* ctor()
		{
			using func_t = TESLandTexture*(__thiscall*)(TESLandTexture*);
			static REL::Relocation<func_t> func{ Offsets::TESLandTexture::ctor };
			return func(this);
		}

		void QueueTexture(IO_TASK_PRIORITY aePriority, QueuedFile* apParent)
		{
			using func_t = decltype(&TESLandTexture::QueueTexture);
			static REL::Relocation<func_t> func{ Offsets::TESLandTexture::QueueTexture };
			func(this, aePriority, apParent);
		}

		MATERIAL_TYPE GetHavokMaterialType()
		{
			using func_t = decltype(&TESLandTexture::GetHavokMaterialType);
			static REL::Relocation<func_t> func{ Offsets::TESLandTexture::GetHavokMaterialType };
			return func(this);
		}

	public:
		// members
		BGSTextureSet*          pTextureSet;        // 18
		TEXTURE_HAVOK_DATA      HavokData;          // 1C
		std::uint8_t            cSpecularExponent;  // 1F
		BSSimpleList<TESGrass*> TextureGrassList;   // 20
	};
	static_assert(sizeof(TESLandTexture) == 0x28);
}
