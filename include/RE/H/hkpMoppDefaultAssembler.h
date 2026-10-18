#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpMoppAssembler.h"
#include "RE/H/hkpMoppAssembler_hkpMoppAssemblerParams.h"
#include "RE/H/hkpMoppCode_CodeInfo.h"
#include "RE/H/hkpMoppSplittingPlaneDirection.h"

namespace RE
{
	class hkpMoppCodeGenerator;
	class hkpMoppCompilerChunkInfo;
	class hkpMoppMediator;
	class hkpMoppNodeMgr;
	class hkpMoppTreeNode;

	class alignas(16) hkpMoppDefaultAssembler :
		public hkpMoppAssembler  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMoppDefaultAssembler };
		static constexpr auto VTABLE{ VTABLE::hkpMoppDefaultAssembler };

		// override (hkpMoppAssembler)
		virtual ~hkpMoppDefaultAssembler() = default;  // 00

		// add
		virtual std::int32_t getNumSplittingPlaneDirections() const;                                            // 03
		virtual const hkpMoppSplittingPlaneDirection* getSplittingPlaneDirections();                            // 04
		virtual void assemble(hkpMoppTreeNode* rootNode, hkpMoppNodeMgr* mgr, std::int32_t minAssembledElems);  // 05
		virtual void getScaleInfo(hkpMoppTreeNode* rootNode, hkpMoppCode_CodeInfo* moppCodeInfo);               // 06

		hkpMoppDefaultAssembler* ctor(hkpMoppAssembler_hkpMoppAssemblerParams const& ap, hkpMoppCodeGenerator* code, hkpMoppMediator* mediator)
		{
			using func_t = hkpMoppDefaultAssembler*(__thiscall*)(hkpMoppDefaultAssembler*, hkpMoppAssembler_hkpMoppAssemblerParams const&, hkpMoppCodeGenerator*, hkpMoppMediator*);
			static REL::Relocation<func_t> func{ Offsets::hkpMoppDefaultAssembler::ctor };
			return func(this, ap, code, mediator);
		}

	public:
		// members
		hkpMoppMediator*                                                  m_mediator;           // 08?
		hkpMoppNodeMgr*                                                   m_nodeMgr;            // 0C?
		hkpMoppCodeGenerator*                                             m_code;               // 10?
		hkpMoppCompilerChunkInfo*                                         m_chunkInfo;          // 14?
		std::int32_t                                                      m_minDepthToBuild;    // 18?
		std::int32_t                                                      m_halfTreeDepth;      // 1C?
		std::int32_t                                                      m_depthTopDownScale;  // 20?
		std::int32_t                                                      m_minAssembledElems;  // 24?
		std::int32_t                                                      m_numNodesAssembled;  // 28?
		std::uint32_t                                                     pad2C;                // 2C
		hkpMoppCode_CodeInfo                                              m_codeInfo;           // 30?
		hkArray<hkpMoppSplittingPlaneDirection, hkContainerHeapAllocator> m_directions;         // 40?
		std::uint32_t                                                     pad4C;                // 4C
		hkpMoppAssembler_hkpMoppAssemblerParams                           m_params;             // 50?
	};
}
