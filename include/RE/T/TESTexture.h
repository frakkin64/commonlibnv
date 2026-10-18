#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/C/CHUNK_ID.h"

namespace RE
{
	class TESForm;
	class TESObjectREFR;

	class TESTexture :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESTexture };
		static constexpr auto VTABLE{ VTABLE::TESTexture };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual std::uint32_t GetMaxAllowedSize();                           // 04
		virtual const char* GetAsNormalFile(BSStringT<char>* a_arg1) const;  // 05
		virtual char* GetDefaultPath() const;                                // 06

		void SetTextureName(char const* apTextureName)
		{
			using func_t = decltype(&TESTexture::SetTextureName);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::SetTextureName };
			func(this, apTextureName);
		}

		TESTexture* ctor()
		{
			using func_t = TESTexture*(__thiscall*)(TESTexture*);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESTexture*);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::dtor };
			func(this);
		}

		void Save(CHUNK_ID aeTextureID)
		{
			using func_t = decltype(&TESTexture::Save);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::Save };
			func(this, aeTextureID);
		}

		static char const* GetAsNormalFile(BSStringT<char>& aOutFilename, char const* apTextureName)
		{
			using func_t = char const*(__cdecl*)(BSStringT<char>&, char const*);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::GetAsNormalFile };
			return func(aOutFilename, apTextureName);
		}

		static void GetAsNormalFile(char const* apTextureName, char* apNormalTextureName)
		{
			using func_t = void(__cdecl*)(char const*, char*);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::GetAsNormalFile_1 };
			func(apTextureName, apNormalTextureName);
		}

		static void GetAsSkinFile(char const* apTextureName, char* apSkinTextureName)
		{
			using func_t = decltype(&TESTexture::GetAsSkinFile);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::GetAsSkinFile };
			func(apTextureName, apSkinTextureName);
		}

		static char const* GetTextureName(TESForm* apObj, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESTexture::GetTextureName);
			static REL::Relocation<func_t> func{ Offsets::TESTexture::GetTextureName };
			return func(apObj, apRef);
		}

	public:
		// members
		BSStringT<char> TextureName;  // 04
	};
	static_assert(sizeof(TESTexture) == 0xC);
}
