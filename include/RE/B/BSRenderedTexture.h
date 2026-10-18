#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiRenderTargetGroup;
	class NiRenderedTexture;

	class BSRenderedTexture :
		public NiObject  // 00
	{
	public:
		NiRenderedTexture* GetTexture(std::int32_t aiIndex)
		{
			using func_t = decltype(&BSRenderedTexture::GetTexture);
			static REL::Relocation<func_t> func{ Offsets::BSRenderedTexture::GetTexture };
			return func(this, aiIndex);
		}

		static bool QOutsideFrame()
		{
			using func_t = decltype(&BSRenderedTexture::QOutsideFrame);
			static REL::Relocation<func_t> func{ Offsets::BSRenderedTexture::QOutsideFrame };
			return func();
		}

		static void StopOffscreen()
		{
			using func_t = decltype(&BSRenderedTexture::StopOffscreen);
			static REL::Relocation<func_t> func{ Offsets::BSRenderedTexture::StopOffscreen };
			func();
		}

		static void StartOffscreen(std::uint32_t aiClearMode, NiRenderTargetGroup* apTarget)
		{
			using func_t = decltype(&BSRenderedTexture::StartOffscreen);
			static REL::Relocation<func_t> func{ Offsets::BSRenderedTexture::StartOffscreen };
			func(aiClearMode, apTarget);
		}

	public:
		// members
		NiPointer<NiRenderTargetGroup> spGroup[6];          // 08
		NiPointer<NiRenderTargetGroup> spPreRestoreGroup;   // 20
		NiPointer<NiRenderTargetGroup> spRestoreGroup;      // 24
		NiPointer<NiRenderTargetGroup> spPostRestoreGroup;  // 28
		std::int32_t                   iAliasedType;        // 2C
		NiPointer<NiRenderedTexture>   spTexture[4];        // 30
	};
}
