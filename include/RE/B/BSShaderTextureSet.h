#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShaderProperty_TextureTypeEnum.h"
#include "RE/B/BSTextureSet.h"

namespace RE
{
	class NiObject;
	class NiStream;

	class BSShaderTextureSet :
		public BSTextureSet  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShaderTextureSet };
		static constexpr auto VTABLE{ VTABLE::BSShaderTextureSet };

		// override (BSTextureSet)
		virtual ~BSShaderTextureSet() = default;                                                                // 00
		virtual void LoadBinary(NiStream& arStream) override;                                                   // 13
		virtual void LinkObject(NiStream& arStream) override;                                                   // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                                          // 15
		virtual void SaveBinary(NiStream& arStream) override;                                                   // 16
		virtual bool IsEqual(NiObject* apObject) override;                                                      // 17
		virtual void SetTextureFilename(BSShaderProperty_TextureTypeEnum a_arg1, const char* a_arg2) override;  // 25

		BSShaderTextureSet* ctor()
		{
			using func_t = BSShaderTextureSet*(__thiscall*)(BSShaderTextureSet*);
			static REL::Relocation<func_t> func{ Offsets::BSShaderTextureSet::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: pTextureNames
		std::uint8_t pad08[0x30];  // 08
	};
	static_assert(sizeof(BSShaderTextureSet) == 0x38);
}
