#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/N/NiTList.h"

namespace RE
{
	class NiSourceTexture;
	class ScriptCompiler;

	class MenuConsole
	{
	public:
		[[nodiscard]] static MenuConsole* GetSingleton() noexcept
		{
			static REL::Relocation<MenuConsole**> singleton{ Offsets::MenuConsole::pInstance };
			return *singleton;
		}

		bool IsVisible()
		{
			using func_t = decltype(&MenuConsole::IsVisible);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::IsVisible };
			return func(this);
		}

		static MenuConsole* Instance(bool abCreate)
		{
			using func_t = decltype(&MenuConsole::Instance);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::Instance };
			return func(abCreate);
		}

		bool Idle(std::int32_t aiKey)
		{
			using func_t = decltype(&MenuConsole::Idle);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::Idle };
			return func(this, aiKey);
		}

		void PrintLine(char const* a_arg1, ...)
		{
			using func_t = void(__cdecl*)(MenuConsole*, char const*, ...);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::PrintLine };
			func(this, a_arg1);
		}

		void PrintLine(char const* apString, char* axList)
		{
			using func_t = void (MenuConsole::*)(char const*, char*);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::PrintLine_1 };
			func(this, apString, axList);
		}

		void ScrollBy(std::int32_t aiNumLines)
		{
			using func_t = decltype(&MenuConsole::ScrollBy);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::ScrollBy };
			func(this, aiNumLines);
		}

		void RefreshLines()
		{
			using func_t = decltype(&MenuConsole::RefreshLines);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::RefreshLines };
			func(this);
		}

		bool ToggleVisible()
		{
			using func_t = decltype(&MenuConsole::ToggleVisible);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::ToggleVisible };
			return func(this);
		}

		void SetVisible(char acState)
		{
			using func_t = decltype(&MenuConsole::SetVisible);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::SetVisible };
			func(this, acState);
		}

		void OnEnterMenuMode()
		{
			using func_t = decltype(&MenuConsole::OnEnterMenuMode);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::OnEnterMenuMode };
			func(this);
		}

		void DumpTextures()
		{
			using func_t = decltype(&MenuConsole::DumpTextures);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::DumpTextures };
			func(this);
		}

		bool IsMenuTexture(NiSourceTexture* apTexture)
		{
			using func_t = decltype(&MenuConsole::IsMenuTexture);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::IsMenuTexture };
			return func(this, apTexture);
		}

		void WriteToOutputFile(char const* apOutText)
		{
			using func_t = decltype(&MenuConsole::WriteToOutputFile);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::WriteToOutputFile };
			func(this, apOutText);
		}

	private:
		MenuConsole* ctor()
		{
			using func_t = MenuConsole*(__thiscall*)(MenuConsole*);
			static REL::Relocation<func_t> func{ Offsets::MenuConsole::ctor };
			return func(this);
		}

	public:
		// members
		ScriptCompiler*          pConsoleCompiler;      // 00
		NiTList<BSStringT<char>> xStrings;              // 04
		NiTList<BSStringT<char>> xInputs;               // 10
		std::int32_t             iInputsPos;            // 1C
		std::int32_t             iNumStrings;           // 20
		std::int32_t             iLastString;           // 24
		bool                     bLastMenuMode;         // 28
		std::uint8_t             pad29[0x3];            // 29
		std::int32_t             iConsoleLineSpacing;   // 2C
		std::int32_t             iConsoleXPos;          // 30
		std::int32_t             iConsoleYPos;          // 34
		char                     cVisible;              // 38
		bool                     bIsActive;             // 39
		bool                     bRecordingBatch;       // 3A
		std::uint8_t             pad3B;                 // 3B
		std::int32_t             iRecordingLineCount;   // 3C
		char                     cRecording[20][100];   // 40
		char                     pOutputFileName[260];  // 810
	};
}
