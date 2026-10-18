#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSingleton.h"
#include "RE/H/hkStringMap.h"
#include "RE/H/hkVersionPatchManager_PatchInfo.h"
#include "RE/H/hkVersionPatchManager_PatchType.h"

namespace RE
{
	class hkClassNameRegistry;
	class hkDataWorldDict;

	class hkVersionPatchManager :
		public hkReferencedObject,  // 00
		public hkSingleton<hkVersionPatchManager>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkVersionPatchManager };
		static constexpr auto VTABLE{ VTABLE::hkVersionPatchManager };

		using PatchInfo = hkVersionPatchManager_PatchInfo;
		using PatchType = hkVersionPatchManager_PatchType;

		class UidFromClassVersion;

		class UidFromClassVersion
		{
		public:
		private:
			char const* cache(char const* name) const
			{
				using func_t = decltype(&UidFromClassVersion::cache);
				static REL::Relocation<func_t> func{ Offsets::hkVersionPatchManager_UidFromClassVersion::cache };
				return func(this, name);
			}

		public:
			// members
			hkStringMap<std::int32_t, hkContainerHeapAllocator> m_indexFromName;  // 00?
			hkArray<char const*, hkContainerHeapAllocator>      m_names;          // 10?
			hkStringMap<char*, hkContainerHeapAllocator>        m_cachedNames;    // 1C?
		};

		// override (hkReferencedObject)
		virtual ~hkVersionPatchManager() = default;  // 00

		std::int32_t findLastPatchIndexForUid(std::uint64_t uid, std::int32_t allowRenames) const
		{
			using func_t = decltype(&hkVersionPatchManager::findLastPatchIndexForUid);
			static REL::Relocation<func_t> func{ Offsets::hkVersionPatchManager::findLastPatchIndexForUid };
			return func(this, uid, allowRenames);
		}

		hkResult recomputePatchDependencies() const
		{
			using func_t = decltype(&hkVersionPatchManager::recomputePatchDependencies);
			static REL::Relocation<func_t> func{ Offsets::hkVersionPatchManager::recomputePatchDependencies };
			return func(this);
		}

	private:
		hkResult preparePatches(hkDataWorldDict& worldToUpdate, hkClassNameRegistry const& finalClassesReg, hkArray<hkVersionPatchManager_PatchInfo const*, hkContainerHeapAllocator>& patchInfosOut) const
		{
			using func_t = decltype(&hkVersionPatchManager::preparePatches);
			static REL::Relocation<func_t> func{ Offsets::hkVersionPatchManager::preparePatches };
			return func(this, worldToUpdate, finalClassesReg, patchInfosOut);
		}

	public:
		// members
		hkVersionPatchManager::UidFromClassVersion*                               m_uidFromClassVersion;  // 08?
		hkArray<hkVersionPatchManager_PatchInfo const*, hkContainerHeapAllocator> m_patchInfos;           // 0C?
		hkPointerMap<std::uint64_t, std::int32_t, hkContainerHeapAllocator>       m_patchIndexFromUid;    // 18?
	};
}
