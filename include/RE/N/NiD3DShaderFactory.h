#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiCriticalSection.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiShaderFactory.h"
#include "RE/N/NiTStringPointerMap.h"

namespace RE
{
	class NiDX9Renderer;
	class NiShader;
	class NiShaderLibrary;

	class NiD3DShaderFactory :
		public NiShaderFactory  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DShaderFactory };
		static constexpr auto VTABLE{ VTABLE::NiD3DShaderFactory };

		// add
		virtual void Unk_1C();  // 1C
		virtual void Unk_1D();  // 1D
		virtual void Unk_1E();  // 1E

		static void _SDMInit()
		{
			using func_t = decltype(&NiD3DShaderFactory::_SDMInit);
			static REL::Relocation<func_t> func{ Offsets::NiD3DShaderFactory::_SDMInit };
			func();
		}

	public:
		// members
		NiDX9Renderer*                                   m_pkRenderer;      // 24
		NiTStringPointerMap<NiShader*>*                  m_pkShaderMap;     // 28
		void*                                            m_kLibraryIter;    // 2C
		NiTStringPointerMap<NiPointer<NiShaderLibrary>>* m_pkLibraryMap;    // 30
		NiCriticalSection                                m_kShaderMapLock;  // 34?
	};
}
