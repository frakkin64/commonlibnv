#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFileSystem_DirectoryListing.h"
#include "RE/H/hkFileSystem_Entry.h"
#include "RE/H/hkFileSystem_FlagValues.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSingleton.h"

namespace RE
{
	class hkStreamReader;
	class hkStreamWriter;

	class hkFileSystem :
		public hkReferencedObject,  // 00
		public hkSingleton<hkFileSystem>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkFileSystem };
		static constexpr auto VTABLE{ VTABLE::hkFileSystem };

		using DirectoryListing = hkFileSystem_DirectoryListing;
		using Entry = hkFileSystem_Entry;
		using FlagValues = hkFileSystem_FlagValues;

		// override (hkReferencedObject)
		virtual ~hkFileSystem() = default;  // 00

		// add
		virtual hkStreamReader* openReader(const char* a_arg1);                                           // 03
		virtual hkStreamWriter* openWriter(const char* a_arg1);                                           // 04
		virtual hkResult listDirectory(char const* basePath, hkFileSystem_DirectoryListing& listingOut);  // 05

		hkFileSystem* ctor()
		{
			using func_t = hkFileSystem*(__thiscall*)(hkFileSystem*);
			static REL::Relocation<func_t> func{ Offsets::hkFileSystem::ctor };
			return func(this);
		}
	};
}
