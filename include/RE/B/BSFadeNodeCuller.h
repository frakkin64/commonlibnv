#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiCullingProcess.h"

namespace RE
{
	class NiAVObject;
	class NiCamera;
	class NiVisibleArray;

	class BSFadeNodeCuller :
		public NiCullingProcess  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFadeNodeCuller };
		static constexpr auto VTABLE{ VTABLE::BSFadeNodeCuller };

		// override (NiCullingProcess)
		virtual ~BSFadeNodeCuller() = default;                                                                       // 10
		virtual void Process(NiAVObject* apObject) override;                                                         // 11
		virtual void Process(NiCamera const* apCamera, NiAVObject* apScene, NiVisibleArray* apVisibleSet) override;  // 12

		BSFadeNodeCuller* ctor(NiVisibleArray* apVisSet)
		{
			using func_t = BSFadeNodeCuller*(__thiscall*)(BSFadeNodeCuller*, NiVisibleArray*);
			static REL::Relocation<func_t> func{ Offsets::BSFadeNodeCuller::ctor };
			return func(this, apVisSet);
		}
	};
}
