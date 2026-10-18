#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSStringT.h"
#include "RE/D/DEBUGTEXT_JUSTIFY.h"
#include "RE/D/DEBUGTEXT_LOCATION.h"
#include "RE/I/IDebugText.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTList.h"

namespace RE
{
	class NiNode;

	class DebugText :
		public IDebugText  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DebugText };
		static constexpr auto VTABLE{ VTABLE::DebugText };

		class DebugTextData;
		class sPrintData;

		enum class DEBUG_TEXT_PRINT_TYPE : std::int32_t
		{
			kDTPT_BY_INDEX = 0x0,
			kDTPT_SPECIFIED = 0x1,
		};

		class DebugTextData
		{
		public:
			// members
			float             fX;        // 00
			float             fY;        // 04
			std::int32_t      iJustify;  // 08
			NiPointer<NiNode> spNode;    // 0C
			BSStringT<char>   pText;     // 10
			float             fDie;      // 18
			NiColorA          Color;     // 1C
		};
		static_assert(sizeof(DebugTextData) == 0x2C);

		class sPrintData
		{
		public:
			// members
			DebugText::DebugTextData*        pTextData;    // 00?
			DebugText::DEBUG_TEXT_PRINT_TYPE eType;        // 04?
			std::int32_t                     iIndex;       // 08?
			std::int32_t                     iLineNumber;  // 0C?
			float                            fDie;         // 10?
			std::int32_t                     iFont;        // 14?
		};

		// override (IDebugText)
		virtual void Reset() override;                                                                                                                                               // 00
		virtual void SkipLine(DEBUGTEXT_LOCATION a_arg1, std::int32_t a_arg2) override;                                                                                              // 01
		virtual std::int32_t PrintX(std::int32_t a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3, const char* a_arg4, ...) override;                                     // 02
		virtual std::int32_t PrintX(std::int32_t a_arg1, const char* a_arg2, ...) override;                                                                                          // 03
		virtual std::int32_t VAPrintX(std::int32_t a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3, const char* a_arg4, char* a_arg5, const NiColorA* a_arg6) override;  // 04
		virtual std::int32_t PrintLine(DEBUGTEXT_LOCATION a_arg1, DEBUGTEXT_JUSTIFY a_arg2, const char* a_arg3, ...) override;                                                       // 05
		virtual std::int32_t VAPrintLine(DEBUGTEXT_LOCATION a_arg1, DEBUGTEXT_JUSTIFY a_arg2, const char* a_arg3, char* a_arg4, const NiColorA* a_arg5) override;                    // 06
		virtual std::int32_t PrintXC(std::int32_t a_arg1, const NiColorA* a_arg2, DEBUGTEXT_LOCATION a_arg3, DEBUGTEXT_JUSTIFY a_arg4, const char* a_arg5, ...) override;            // 07
		virtual std::int32_t PrintXC(std::int32_t a_arg1, const NiColorA* a_arg2, const char* a_arg3, ...) override;                                                                 // 08
		virtual std::int32_t PrintLineC(const NiColorA* a_arg1, DEBUGTEXT_LOCATION a_arg2, DEBUGTEXT_JUSTIFY a_arg3, const char* a_arg4, ...) override;                              // 09
		virtual std::int32_t GetCurrentLine(DEBUGTEXT_LOCATION a_arg1) override;                                                                                                     // 0A
		virtual void SetCurrentLine(DEBUGTEXT_LOCATION a_arg1, std::int32_t a_arg2) override;                                                                                        // 0B

		static DebugText* Instance(bool abCreate)
		{
			using func_t = decltype(&DebugText::Instance);
			static REL::Relocation<func_t> func{ Offsets::DebugText::Instance };
			return func(abCreate);
		}

		DebugText* ctor()
		{
			using func_t = DebugText*(__thiscall*)(DebugText*);
			static REL::Relocation<func_t> func{ Offsets::DebugText::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(DebugText*);
			static REL::Relocation<func_t> func{ Offsets::DebugText::dtor };
			func(this);
		}

	public:
		// members
		DebugText::DebugTextData                    pDebugTextList[200];  // 04
		NiTList<DebugText::DebugTextData*>          xFloatingTextList;    // 2264
		BSSimpleArray<DebugText::sPrintData*, 1024> xPrintData;           // 2270
		std::int32_t                                iFontHeight;          // 2280
		std::int32_t                                iHeight[3];           // 2284
		std::int32_t                                iXLocation[3];        // 2290
	};
	static_assert(sizeof(DebugText) == 0x229C);
}
