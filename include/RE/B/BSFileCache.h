#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/D/DVD_LAYER.h"
#include "RE/F/FILE_CACHE_STATE.h"

namespace RE
{
	class CachedFile;

	class __declspec(novtable) BSFileCache
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFileCache };
		static constexpr auto VTABLE{ VTABLE::BSFileCache };

		// add
		virtual void Unk_00();  // 00
		virtual void Unk_01();  // 01
		virtual void Unk_02();  // 02
		virtual void Unk_03();  // 03
		virtual void Unk_04();  // 04
		virtual void Unk_05();  // 05
		virtual void Unk_06();  // 06
		virtual void Unk_07();  // 07
		virtual void Unk_08();  // 08
		virtual void Unk_09();  // 09
		virtual void Unk_0A();  // 0A
		virtual void Unk_0B();  // 0B
		virtual void Unk_0C();  // 0C
		virtual void Unk_0D();  // 0D
		virtual void Unk_0E();  // 0E
		virtual void Unk_0F();  // 0F

		static BSFileCache& QInstance()
		{
			using func_t = decltype(&BSFileCache::QInstance);
			static REL::Relocation<func_t> func{ Offsets::BSFileCache::QInstance };
			return func();
		}

	public:
		// members
		CachedFile*                       pCurrentlyCachingFile;              // 04?
		std::uint32_t                     iCurrentWritten;                    // 08?
		std::uint32_t                     iCurrentFileSize;                   // 0C?
		std::uint32_t                     iTotalWritten;                      // 10?
		std::uint32_t                     iTotalDiskSpaceAvailable;           // 14?
		std::uint32_t                     iFreeDiskSpaceAvailable;            // 18?
		std::uint32_t                     iTotalAlreadyCached;                // 1C?
		std::uint32_t                     iTotalSizeToCache;                  // 20?
		std::uint32_t                     iNumCachedFiles;                    // 24?
		std::int32_t                      iCurrentThreadPriority;             // 28?
		std::uint32_t                     iThreadTime;                        // 2C?
		std::int32_t                      iCurrentPriority;                   // 30?
		std::int32_t                      iPrecachePriority;                  // 34?
		std::int32_t                      iEssentialPriority;                 // 38?
		std::int32_t                      iUnessentialPriority;               // 3C?
		DVD_LAYER                         eCurrentLayer;                      // 40?
		bool                              bArraySorted;                       // 44?
		bool                              bCacheDriveAvailable;               // 45?
		bool                              bRunningFromDVD;                    // 46?
		bool                              bInPauseLoop;                       // 47?
		std::uint32_t                     iFileCacheLoadScreenTime;           // 48?
		std::uint32_t                     iFileCacheLoadScreenEssentialTime;  // 4C?
		BSSimpleArray<CachedFile*, 1024>* pCachedFiles;                       // 50?
		void*                             pFileCacheCompletionCallback;       // 54?
		void*                             pForceFileCacheCallback;            // 58?
		volatile FILE_CACHE_STATE         eFileCacheState;                    // 5C?
		void*                             hFileCachingThreadHandle;           // 60
	};
}
