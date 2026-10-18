#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;

	class BSClonePools
	{
	public:
		class ClonePool;

		class ClonePool
		{
		public:
			// members
			NiAVObject*                         pModel;     // 00?
			BSSimpleList<NiPointer<NiAVObject>> CloneList;  // 04?
		};

		void MakeClones(NiAVObject* apLoadedObject, std::uint32_t aiCloneCount)
		{
			using func_t = decltype(&BSClonePools::MakeClones);
			static REL::Relocation<func_t> func{ Offsets::BSClonePools::MakeClones };
			func(this, apLoadedObject, aiCloneCount);
		}

	public:
		// members
		BSSimpleList<BSClonePools::ClonePool*> ClonePools;  // 00?
	};
}
