#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkFlags.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStructureLayout.h"

namespace RE
{
	class hkClass;
	class hkClassMember;
	class hkOArchive;
	class hkRelocationInfo;
	class hkStreamWriter;

	class hkObjectCopier :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkObjectCopier };
		static constexpr auto VTABLE{ VTABLE::hkObjectCopier };

		enum class ObjectCopierFlagBits : std::int32_t
		{
			kFLAG_NONE = 0x0,
			kFLAG_TRANSLATE_SET = 0x1,
			kFLAG_ROTATE_SET = 0x2,
		};

		// override (hkReferencedObject)
		virtual ~hkObjectCopier() = default;  // 00

		// add
		virtual hkResult copyObject(void const* dataIn, hkClass const& klassIn, hkStreamWriter* dataOut, hkClass const& klassOut, hkRelocationInfo& reloc);  // 03
		virtual std::int32_t areMembersCompatible(hkClassMember const& src, hkClassMember const& dst);                                                       // 04
		virtual hkClass const* lookupClass(hkClass const& klass);                                                                                            // 05

		hkObjectCopier* ctor(hkStructureLayout const& layoutIn, hkStructureLayout const& layoutOut, hkFlags<hkObjectCopier::ObjectCopierFlagBits, std::uint32_t> flags)
		{
			using func_t = hkObjectCopier*(__thiscall*)(hkObjectCopier*, hkStructureLayout const&, hkStructureLayout const&, hkFlags<hkObjectCopier::ObjectCopierFlagBits, std::uint32_t>);
			static REL::Relocation<func_t> func{ Offsets::hkObjectCopier::ctor };
			return func(this, layoutIn, layoutOut, flags);
		}

	private:
		void writeZero(hkOArchive& oa, hkClassMember const& memberOut)
		{
			using func_t = decltype(&hkObjectCopier::writeZero);
			static REL::Relocation<func_t> func{ Offsets::hkObjectCopier::writeZero };
			func(this, oa, memberOut);
		}

		std::int32_t saveBody(void const* dataIn, hkClass const& klassIn, hkOArchive& oa, hkClass const& klassOut)
		{
			using func_t = decltype(&hkObjectCopier::saveBody);
			static REL::Relocation<func_t> func{ Offsets::hkObjectCopier::saveBody };
			return func(this, dataIn, klassIn, oa, klassOut);
		}

		void saveExtras(void const* dataIn, hkClass const& klassIn, hkOArchive& dataOut, hkClass const& klassOut, std::int32_t classStart, hkRelocationInfo& fixups, std::int32_t level)
		{
			using func_t = decltype(&hkObjectCopier::saveExtras);
			static REL::Relocation<func_t> func{ Offsets::hkObjectCopier::saveExtras };
			func(this, dataIn, klassIn, dataOut, klassOut, classStart, fixups, level);
		}

	public:
		// members
		hkStructureLayout                                            m_layoutIn;   // 08?
		hkStructureLayout                                            m_layoutOut;  // 0C?
		hkFlags<hkObjectCopier::ObjectCopierFlagBits, std::uint32_t> m_flags;      // 10?
		hkBool                                                       m_byteSwap;   // 14?
		std::uint8_t                                                 pad15[0x3];   // 15
	};
}
