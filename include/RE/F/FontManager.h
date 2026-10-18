#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPointerList.h"

namespace RE
{
	class Font;
	class NiNode;

	class FontManager
	{
	public:
		class CharData;
		class TextData;
		class TextDoc;
		class TextLine;
		class TextPage;

		class CharData
		{
		public:
			// members
			std::int32_t    iFontIndex;      // 00?
			std::uint8_t    cChar;           // 04?
			std::uint8_t    pad05[0x3];      // 05
			NiColorA        xColor;          // 08?
			std::int32_t    iJustification;  // 18?
			BSStringT<char> xFilename;       // 1C?
			std::int32_t    iWidth;          // 24?
			std::int32_t    iRise;           // 28?
			std::int32_t    iDrop;           // 2C?
			std::int32_t    iLeadingEdge;    // 30?
			std::int32_t    iX;              // 34?
		};

		class TextData
		{
		public:
			// members
			std::int32_t    iDefaultFont;    // 00?
			std::int32_t    iJustification;  // 04?
			NiColorA        xColor;          // 08?
			char            cLineSep;        // 18?
			std::uint8_t    pad19[0x3];      // 19
			std::int32_t    iWidth;          // 1C?
			std::int32_t    iHeight;         // 20?
			std::int32_t    iPageNum;        // 24?
			std::int32_t    iLines;          // 28?
			std::int32_t    iNumPages;       // 2C?
			std::int32_t    iNumLines;       // 30?
			bool            bIsHypertext;    // 34?
			std::uint8_t    pad35[0x3];      // 35
			BSStringT<char> xNewText;        // 38?
		};

		class TextDoc
		{
		public:
			// members
			NiTPointerList<FontManager::TextPage*> xPages;       // 00?
			std::int32_t                           iPageWidth;   // 0C?
			std::int32_t                           iPageHeight;  // 10?
			std::int32_t                           iPageNum;     // 14?
		};

		class TextLine
		{
		public:
			// members
			NiTPointerList<FontManager::CharData*> xChars;         // 00?
			std::int32_t                           iWidth;         // 0C?
			std::int32_t                           iNextSpacing;   // 10?
			std::int32_t                           iRise;          // 14?
			std::int32_t                           iDrop;          // 18?
			std::int32_t                           iSkippedSpace;  // 1C?
			std::int32_t                           iJustify;       // 20?
			std::int32_t                           iPageWidth;     // 24?
			std::int32_t                           iY;             // 28?
			FontManager::TextPage*                 pPage;          // 2C?
		};

		class TextPage
		{
		public:
			// members
			NiTPointerList<FontManager::TextLine*> xLines;            // 00?
			std::int32_t                           iWidth;            // 0C?
			std::int32_t                           iHeight;           // 10?
			std::int32_t                           iPageWidth;        // 14?
			std::int32_t                           iPageHeight;       // 18?
			std::int32_t                           iLastFontHeight;   // 1C?
			std::int32_t                           pCharsPerFont[8];  // 20?
			FontManager::TextDoc*                  pDoc;              // 40?
		};

		static FontManager* Instance()
		{
			using func_t = decltype(&FontManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::FontManager::Instance };
			return func();
		}

		Font* GetFont(std::int32_t a)
		{
			using func_t = decltype(&FontManager::GetFont);
			static REL::Relocation<func_t> func{ Offsets::FontManager::GetFont };
			return func(this, a);
		}

		FontManager* ctor()
		{
			using func_t = FontManager*(__thiscall*)(FontManager*);
			static REL::Relocation<func_t> func{ Offsets::FontManager::ctor };
			return func(this);
		}

		BSStringT<char> CollectTo(char* result, std::int32_t& apSource, std::int32_t aiIndex, std::int32_t aebfMatches, std::int32_t& aebfInvMatches, char& aeResultMatch, bool acResultChar)
		{
			using func_t = decltype(&FontManager::CollectTo);
			static REL::Relocation<func_t> func{ Offsets::FontManager::CollectTo };
			return func(this, result, apSource, aiIndex, aebfMatches, aebfInvMatches, aeResultMatch, acResultChar);
		}

		FontManager::TextDoc* PrepHypertext(BSStringT<char>& axTextString, FontManager::TextData& axData)
		{
			using func_t = decltype(&FontManager::PrepHypertext);
			static REL::Relocation<func_t> func{ Offsets::FontManager::PrepHypertext };
			return func(this, axTextString, axData);
		}

		FontManager::TextDoc* PrepText(BSStringT<char>& axTextString, FontManager::TextData& axData)
		{
			using func_t = decltype(&FontManager::PrepText);
			static REL::Relocation<func_t> func{ Offsets::FontManager::PrepText };
			return func(this, axTextString, axData);
		}

		bool CreateText(BSStringT<char> axTextString, FontManager::TextData& axTextData, NiNode* apNode)
		{
			using func_t = decltype(&FontManager::CreateText);
			static REL::Relocation<func_t> func{ Offsets::FontManager::CreateText };
			return func(this, axTextString, axTextData, apNode);
		}

		NiPoint3 CalculateStringDimensions(char const* result, std::int32_t strText, float aiFont, std::int32_t a_arg4)
		{
			using func_t = decltype(&FontManager::CalculateStringDimensions);
			static REL::Relocation<func_t> func{ Offsets::FontManager::CalculateStringDimensions };
			return func(this, result, strText, aiFont, a_arg4);
		}

	public:
		// members
		Font*        pFont[8];      // 00
		bool         bUseNewFonts;  // 20
		std::uint8_t pad21[0x3];    // 21
	};
	static_assert(sizeof(FontManager) == 0x24);
}
