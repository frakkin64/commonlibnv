#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiNode;
	class NiPoint3;
	class TESObjectTREE;

	class TREE_BILLBOARD_DATA
	{
	public:
		TREE_BILLBOARD_DATA* ctor(TESObjectTREE* apTree, std::uint32_t aiCellChunk, std::uint32_t aiCellKey, NiNode* apInstancedNode, std::uint32_t aiArraySize, NiPoint3* apLocArray, float* apColorArray)
		{
			using func_t = TREE_BILLBOARD_DATA*(__thiscall*)(TREE_BILLBOARD_DATA*, TESObjectTREE*, std::uint32_t, std::uint32_t, NiNode*, std::uint32_t, NiPoint3*, float*);
			static REL::Relocation<func_t> func{ Offsets::TREE_BILLBOARD_DATA::ctor };
			return func(this, apTree, aiCellChunk, aiCellKey, apInstancedNode, aiArraySize, apLocArray, apColorArray);
		}

	public:
		// members
		TESObjectTREE* pTree;           // 00
		std::uint32_t  iCellChunk;      // 04
		std::uint32_t  iCellKey;        // 08
		NiNode*        pInstancedNode;  // 0C
		std::uint32_t  iArraySize;      // 10
		NiPoint3*      pLocArray;       // 14
		float*         pColorArray;     // 18
	};
}
