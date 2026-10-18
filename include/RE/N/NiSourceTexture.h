#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture.h"

namespace RE
{
	class NiFile;
	class NiPersistentSrcTextureRendererData;
	class NiPixelData;
	class NiTexture_FormatPrefs;

	class NiSourceTexture :
		public NiTexture  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSourceTexture };
		static constexpr auto VTABLE{ VTABLE::NiSourceTexture };

		// add
		virtual void Unk_29();  // 29
		virtual void Unk_2A();  // 2A
		virtual void Unk_2B();  // 2B

		static NiSourceTexture* Create(NiFixedString const& kFilename, NiTexture_FormatPrefs& kPrefs, bool bLoadDirectToRendererHint, bool bSrcRendererDataIsPersistent)
		{
			using func_t = NiSourceTexture*(__cdecl*)(NiFixedString const&, NiTexture_FormatPrefs&, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::NiSourceTexture::Create };
			return func(kFilename, kPrefs, bLoadDirectToRendererHint, bSrcRendererDataIsPersistent);
		}

		static NiSourceTexture* Create(NiPixelData* pkPixelData, char const* apName, NiTexture_FormatPrefs& kPrefs)
		{
			using func_t = NiSourceTexture*(__cdecl*)(NiPixelData*, char const*, NiTexture_FormatPrefs&);
			static REL::Relocation<func_t> func{ Offsets::NiSourceTexture::Create_1 };
			return func(pkPixelData, apName, kPrefs);
		}

	public:
		// members
		NiFixedString                                 m_kFilename;                     // 30
		NiFixedString                                 m_kPlatformFilename;             // 34
		NiPointer<NiPersistentSrcTextureRendererData> m_spPersistentSrcRendererData;   // 38
		NiPointer<NiPixelData>                        m_spSrcPixelData;                // 3C
		bool                                          m_bStatic;                       // 40
		bool                                          m_bLoadDirectToRendererHint;     // 41
		bool                                          m_bSrcRendererDataIsPersistent;  // 42
		char                                          cLooked;                         // 43
		NiFile*                                       m_pFile;                         // 44
	};
}
