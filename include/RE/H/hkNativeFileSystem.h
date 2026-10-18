#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkFileSystem.h"
#include "RE/H/hkResult.h"

namespace RE
{
	class hkFileSystem_DirectoryListing;
	class hkStreamReader;
	class hkStreamWriter;
	class hkStringBuf;

	class hkNativeFileSystem :
		public hkFileSystem  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkNativeFileSystem };
		static constexpr auto VTABLE{ VTABLE::hkNativeFileSystem };

		// override (hkFileSystem)
		virtual ~hkNativeFileSystem() = default;                                                                   // 00
		virtual hkStreamReader* openReader(const char* a_arg1) override;                                           // 03
		virtual hkStreamWriter* openWriter(const char* a_arg1) override;                                           // 04
		virtual hkResult listDirectory(char const* basePath, hkFileSystem_DirectoryListing& listingOut) override;  // 05

		static char const* nativePlatformToHavokConvertPath(char const* pathIn, hkStringBuf& buffer)
		{
			using func_t = decltype(&hkNativeFileSystem::nativePlatformToHavokConvertPath);
			static REL::Relocation<func_t> func{ Offsets::hkNativeFileSystem::nativePlatformToHavokConvertPath };
			return func(pathIn, buffer);
		}
	};
}
