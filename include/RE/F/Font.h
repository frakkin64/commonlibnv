#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/B/ButtonIcon.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class FontData;
	class NiColorA;
	class NiTexturingProperty;
	class NiTriShape;

	class Font
	{
	public:
		class TextData;

		class TextData
		{
		public:
			TextData* ctor(std::int32_t w, std::int32_t h, std::int32_t s, std::int32_t e, char c)
			{
				using func_t = TextData*(__thiscall*)(TextData*, std::int32_t, std::int32_t, std::int32_t, std::int32_t, char);
				static REL::Relocation<func_t> func{ Offsets::Font_TextData::ctor };
				return func(this, w, h, s, e, c);
			}

		public:
			// members
			BSStringT<char>            xNewText;     // 00
			std::int32_t               iWidth;       // 08
			std::int32_t               iHeight;      // 0C?
			std::int32_t               iLineStart;   // 10?
			std::int32_t               iLineEnd;     // 14?
			std::int32_t               iCharCount;   // 18?
			char                       cLineSep;     // 1C?
			std::uint8_t               pad1D[0x3];   // 1D
			BSSimpleList<std::int32_t> xLineWidths;  // 20?
		};

		float GetBaseLine()
		{
			using func_t = decltype(&Font::GetBaseLine);
			static REL::Relocation<func_t> func{ Offsets::Font::GetBaseLine };
			return func(this);
		}

		Font* ctor(std::int32_t aiFontNum, char* apFilename, bool abLoad)
		{
			using func_t = Font*(__thiscall*)(Font*, std::int32_t, char*, bool);
			static REL::Relocation<func_t> func{ Offsets::Font::ctor };
			return func(this, aiFontNum, apFilename, abLoad);
		}

		void PrepText(char const* apOrigString, Font::TextData& axData)
		{
			using func_t = decltype(&Font::PrepText);
			static REL::Relocation<func_t> func{ Offsets::Font::PrepText };
			func(this, apOrigString, axData);
		}

		NiTriShape* MakeTriShape(std::int32_t aiChars, NiColorA const& axColor, bool abPrepareObject)
		{
			using func_t = decltype(&Font::MakeTriShape);
			static REL::Relocation<func_t> func{ Offsets::Font::MakeTriShape };
			return func(this, aiChars, axColor, abPrepareObject);
		}

		NiTriShape* MakeIconsTriShape()
		{
			using func_t = decltype(&Font::MakeIconsTriShape);
			static REL::Relocation<func_t> func{ Offsets::Font::MakeIconsTriShape };
			return func(this);
		}

		void Load()
		{
			using func_t = decltype(&Font::Load);
			static REL::Relocation<func_t> func{ Offsets::Font::Load };
			func(this);
		}

	public:
		// members
		std::uint16_t                   iRefCount;             // 00
		std::uint16_t                   pad02;                 // 02
		char*                           pFontFile;             // 04
		std::int32_t                    iFontNum;              // 08
		NiPointer<NiTexturingProperty>  pTextureData[8];       // 0C
		float                           fFontHeight;           // 2C
		float                           fMaxDrop;              // 30
		std::int32_t                    iLineOverlap;          // 34
		FontData*                       pFontData;             // 38
		BSStringT<char>                 IconAtlasTextureName;  // 3C
		BSSimpleArray<ButtonIcon, 1024> ButtonIcons;           // 44
	};
}
