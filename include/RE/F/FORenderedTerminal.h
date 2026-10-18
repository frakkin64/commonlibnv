#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FORenderedMenu.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderer_ClearFlags.h"

namespace RE
{
	class BSRenderedTexture;
	class NiAVObject;

	class FORenderedTerminal :
		public FORenderedMenu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::FORenderedTerminal };
		static constexpr auto VTABLE{ VTABLE::FORenderedTerminal };

		// override (FORenderedMenu)
		virtual ~FORenderedTerminal() = default;                                                                                      // 00
		virtual NiAVObject* GetParentNodeToRender() override;                                                                         // 02
		virtual void Draw(BSRenderedTexture* apTarget, NiRenderer_ClearFlags aeClearMode, BSRenderedTexture* apSwapTarget) override;  // 03
		virtual void PostDraw() override;                                                                                             // 04
		virtual bool OnIdle() override;                                                                                               // 05
		virtual void Initialize() override;                                                                                           // 09
		virtual float GetFadeAmount() override;                                                                                       // 0B
		virtual void OnMenuOpen() override;                                                                                           // 0C
		virtual void OnMenuClose() override;                                                                                          // 0D

		FORenderedTerminal* ctor()
		{
			using func_t = FORenderedTerminal*(__thiscall*)(FORenderedTerminal*);
			static REL::Relocation<func_t> func{ Offsets::FORenderedTerminal::ctor };
			return func(this);
		}

		void FadeOut()
		{
			using func_t = decltype(&FORenderedTerminal::FadeOut);
			static REL::Relocation<func_t> func{ Offsets::FORenderedTerminal::FadeOut };
			func(this);
		}

		static void PlayShutdownSound()
		{
			using func_t = decltype(&FORenderedTerminal::PlayShutdownSound);
			static REL::Relocation<func_t> func{ Offsets::FORenderedTerminal::PlayShutdownSound };
			func();
		}

	private:
		void InitLight()
		{
			using func_t = decltype(&FORenderedTerminal::InitLight);
			static REL::Relocation<func_t> func{ Offsets::FORenderedTerminal::InitLight };
			func(this);
		}

	public:
		// members
		NiPoint3              OriginalPos;       // D8
		NiPointer<NiAVObject> spExitButton;      // E4
		float                 fLastFadePercent;  // E8
		bool                  bFadingOut;        // EC
		std::uint8_t          padED[0x3];        // ED
	};
	static_assert(sizeof(FORenderedTerminal) == 0xF0);
}
