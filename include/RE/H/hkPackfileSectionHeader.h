#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResource_Export.h"
#include "RE/H/hkResource_Import.h"

namespace RE
{
	class hkPackfileSectionHeader
	{
	public:
		void getExports(void const* sectionBegin, hkArray<hkResource_Export, hkContainerHeapAllocator>& exportsOut) const
		{
			using func_t = decltype(&hkPackfileSectionHeader::getExports);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileSectionHeader::getExports };
			func(this, sectionBegin, exportsOut);
		}

		void getImports(void const* sectionBegin, hkArray<hkResource_Import, hkContainerHeapAllocator>& importsOut) const
		{
			using func_t = decltype(&hkPackfileSectionHeader::getImports);
			static REL::Relocation<func_t> func{ Offsets::hkPackfileSectionHeader::getImports };
			func(this, sectionBegin, importsOut);
		}

	public:
		// members
		char         m_sectionTag[19];       // 00?
		char         m_nullByte;             // 13?
		std::int32_t m_absoluteDataStart;    // 14?
		std::int32_t m_localFixupsOffset;    // 18?
		std::int32_t m_globalFixupsOffset;   // 1C?
		std::int32_t m_virtualFixupsOffset;  // 20?
		std::int32_t m_exportsOffset;        // 24?
		std::int32_t m_importsOffset;        // 28?
		std::int32_t m_endOffset;            // 2C?
	};
}
