#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSceneGraph.h"

namespace RE
{
	class NiCamera;

	class SceneGraph :
		public BSSceneGraph  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SceneGraph };
		static constexpr auto VTABLE{ VTABLE::SceneGraph };

		// override (BSSceneGraph)
		virtual ~SceneGraph() = default;          // 00
		virtual float GetFarDistance() override;  // 40

		SceneGraph* ctor(char* apSceneGraphName, bool abMenuSceneGraph, NiCamera* apCamera)
		{
			using func_t = SceneGraph*(__thiscall*)(SceneGraph*, char*, bool, NiCamera*);
			static REL::Relocation<func_t> func{ Offsets::SceneGraph::ctor };
			return func(this, apSceneGraphName, abMenuSceneGraph, apCamera);
		}
	};
	static_assert(sizeof(SceneGraph) == 0xC0);
}
