#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObjectNET.h"
#include "RE/N/NiTexture_FormatPrefs.h"
#include "RE/N/NiTexture_RendererData.h"
#include "RE/P/PRIORITY_STATE.h"

namespace RE
{
	class NiTexture :
		public NiObjectNET  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTexture };
		static constexpr auto VTABLE{ VTABLE::NiTexture };

		using FormatPrefs = NiTexture_FormatPrefs;
		using RendererData = NiTexture_RendererData;

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
		virtual void Unk_27();  // 27
		virtual void Unk_28();  // 28

		PRIORITY_STATE QState()
		{
			using func_t = decltype(&NiTexture::QState);
			static REL::Relocation<func_t> func{ Offsets::NiTexture::QState };
			return func(this);
		}

	public:
		// members
		NiTexture_FormatPrefs   m_kFormatPrefs;    // 18?
		NiTexture_RendererData* m_pkRendererData;  // 24
		NiTexture*              m_pkPrev;          // 28?
		NiTexture*              m_pkNext;          // 2C?
	};
}
