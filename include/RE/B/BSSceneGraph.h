#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSCullingProcess;
	class NiCamera;
	class NiVisibleArray;

	class BSSceneGraph :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSceneGraph };
		static constexpr auto VTABLE{ VTABLE::BSSceneGraph };

		// override (NiNode)
		virtual ~BSSceneGraph() = default;  // 00

		// add
		virtual float GetFarDistance();                              // 40
		virtual void SetViewDistanceBasedOnFrameRate(float afTime);  // 41

		NiNode* GetCameraRoot()
		{
			using func_t = decltype(&BSSceneGraph::GetCameraRoot);
			static REL::Relocation<func_t> func{ Offsets::BSSceneGraph::GetCameraRoot };
			return func(this);
		}

		BSSceneGraph* ctor(char* apSceneGraphName, bool abMenuSceneGraph, NiCamera* apCamera)
		{
			using func_t = BSSceneGraph*(__thiscall*)(BSSceneGraph*, char*, bool, NiCamera*);
			static REL::Relocation<func_t> func{ Offsets::BSSceneGraph::ctor };
			return func(this, apSceneGraphName, abMenuSceneGraph, apCamera);
		}

	public:
		// members
		NiPointer<NiCamera> spCamera;         // AC
		NiVisibleArray*     pVisArray;        // B0
		BSCullingProcess*   pCuller;          // B4
		bool                bMenuSceneGraph;  // B8
		std::uint8_t        padB9[0x3];       // B9
		float               fCurrentFOV;      // BC
	};
	static_assert(sizeof(BSSceneGraph) == 0xC0);
}
