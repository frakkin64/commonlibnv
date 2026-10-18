#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty_TextureTypeEnum.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiStream;
	class NiTexture;

	class BSTextureSet :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTextureSet };
		static constexpr auto VTABLE{ VTABLE::BSTextureSet };

		// override (NiObject)
		virtual ~BSTextureSet() = default;                              // 00
		virtual void LoadBinary(NiStream& arStream) override;           // 13
		virtual void LinkObject(NiStream& arStream) override;           // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;  // 15
		virtual void SaveBinary(NiStream& arStream) override;           // 16
		virtual bool IsEqual(NiObject* apObject) override;              // 17

		// add
		virtual const char* GetTextureFilename(BSShaderProperty_TextureTypeEnum a_arg1);                 // 23
		virtual void GetTexture(BSShaderProperty_TextureTypeEnum a_arg1, NiPointer<NiTexture>* a_arg2);  // 24
		virtual void SetTextureFilename(BSShaderProperty_TextureTypeEnum a_arg1, const char* a_arg2);    // 25

		BSTextureSet* ctor()
		{
			using func_t = BSTextureSet*(__thiscall*)(BSTextureSet*);
			static REL::Relocation<func_t> func{ Offsets::BSTextureSet::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BSTextureSet) == 0x8);
}
