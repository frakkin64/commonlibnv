#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPackfileSectionHeader.h"
#include "RE/H/hkPackfileWriter.h"
#include "RE/H/hkPlatformObjectWriter.h"
#include "RE/H/hkRelocationInfo.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStringMap.h"
#include "RE/W/WriteLocation.h"

namespace RE
{
	class hkClass;
	class hkPackfileWriter_Options;
	class hkStreamWriter;

	class hkBinaryPackfileWriter :
		public hkPackfileWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBinaryPackfileWriter };
		static constexpr auto VTABLE{ VTABLE::hkBinaryPackfileWriter };

		class SaveContext;

		class SaveContext
		{
		public:
			SaveContext* ctor(hkPackfileWriter_Options const& options)
			{
				using func_t = SaveContext*(__thiscall*)(SaveContext*, hkPackfileWriter_Options const&);
				static REL::Relocation<func_t> func{ Offsets::hkBinaryPackfileWriter_SaveContext::ctor };
				return func(this, options);
			}

		public:
			// members
			const hkPackfileWriter_Options*                            m_options;             // 00?
			hkArray<hkPackfileSectionHeader, hkContainerHeapAllocator> m_sectionHeaders;      // 04?
			hkArray<WriteLocation, hkContainerHeapAllocator>           m_locations;           // 10?
			hkStreamWriter*                                            m_stream;              // 1C?
			hkPlatformObjectWriter                                     m_writer;              // 20?
			hkStringMap<std::int32_t, hkContainerHeapAllocator>        m_usedClassNames;      // 30?
			hkArray<hkRelocationInfo, hkContainerHeapAllocator>        m_relocsBySect;        // 40?
			hkBool                                                     m_endianSwapRequired;  // 4C?
			std::uint8_t                                               pad4D[0x3];            // 4D
		};

		// override (hkPackfileWriter)
		virtual ~hkBinaryPackfileWriter() = default;                                                     // 00
		virtual hkResult save(hkStreamWriter* a_arg1, const hkPackfileWriter_Options* a_arg2) override;  // 07

		hkBinaryPackfileWriter* ctor()
		{
			using func_t = hkBinaryPackfileWriter*(__thiscall*)(hkBinaryPackfileWriter*);
			static REL::Relocation<func_t> func{ Offsets::hkBinaryPackfileWriter::ctor };
			return func(this);
		}

	private:
		void writeClassName(hkBinaryPackfileWriter::SaveContext& context, hkClass const& k, std::int32_t absoluteDataStart)
		{
			using func_t = decltype(&hkBinaryPackfileWriter::writeClassName);
			static REL::Relocation<func_t> func{ Offsets::hkBinaryPackfileWriter::writeClassName };
			func(this, context, k, absoluteDataStart);
		}

		void fillSectionTags(hkBinaryPackfileWriter::SaveContext& context)
		{
			using func_t = decltype(&hkBinaryPackfileWriter::fillSectionTags);
			static REL::Relocation<func_t> func{ Offsets::hkBinaryPackfileWriter::fillSectionTags };
			func(this, context);
		}

		void writeAllObjects(hkBinaryPackfileWriter::SaveContext& context)
		{
			using func_t = decltype(&hkBinaryPackfileWriter::writeAllObjects);
			static REL::Relocation<func_t> func{ Offsets::hkBinaryPackfileWriter::writeAllObjects };
			func(this, context);
		}
	};
}
