#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFinishLoadedObjectFlag.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxTextureFile :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxTextureFile };
		static constexpr auto VTABLE{ VTABLE::hkxTextureFile };

		// override (hkReferencedObject)
		virtual ~hkxTextureFile() = default;  // 00

		hkxTextureFile* ctor(hkFinishLoadedObjectFlag f)
		{
			using func_t = hkxTextureFile*(__thiscall*)(hkxTextureFile*, hkFinishLoadedObjectFlag);
			static REL::Relocation<func_t> func{ Offsets::hkxTextureFile::ctor };
			return func(this, f);
		}

	public:
		// members
		hkStringPtr m_filename;          // 08
		hkStringPtr m_name;              // 0C
		hkStringPtr m_originalFilename;  // 10
	};
}
