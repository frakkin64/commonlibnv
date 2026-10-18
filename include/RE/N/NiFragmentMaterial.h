#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAlphaProperty_AlphaFunction.h"
#include "RE/N/NiGPUProgramDescriptor.h"
#include "RE/N/NiGPUProgram_ProgramType.h"
#include "RE/N/NiMaterial.h"
#include "RE/N/NiMaterialDescriptor.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiShaderAttributeDesc_ObjectType.h"
#include "RE/N/NiTObjectPtrSet.h"
#include "RE/N/NiTObjectSet.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiGPUProgramCache;
	class NiMaterialConfigurator;
	class NiMaterialNodeLibrary;
	class NiMaterialResourceConsumerNode;
	class NiMaterialResourceProducerNode;
	class NiShader;

	// not confirmed: no named code in the executable refers to this type
	class NiFragmentMaterial :
		public NiMaterial  // 00
	{
	public:
		class Context;
		class ObjectResourceOffset;
		class RenderPassDescriptor;

		enum class ReturnCode : std::int32_t
		{
			kRC_SUCCESS = 0x0,
			kRC_COMPILE_FAILURE_PIXEL = 0x1,
			kRC_COMPILE_FAILURE_VERTEX = 0x2,
			kRC_INVALID_MATERIAL = 0x4,
			kRC_INVALID_SHADER = 0x8,
			kRC_INVALID_CONSTANTMAP = 0x10,
		};

		class Context
		{
		public:
			// members
			NiPointer<NiMaterialConfigurator>         m_spConfigurator;  // 00?
			NiPointer<NiMaterialResourceProducerNode> m_spStatics;       // 04?
			NiPointer<NiMaterialResourceProducerNode> m_spUniforms;      // 08?
			NiPointer<NiMaterialResourceProducerNode> m_spInputs;        // 0C?
			NiPointer<NiMaterialResourceConsumerNode> m_spOutputs;       // 10?
		};

		class ObjectResourceOffset
		{
		public:
			// members
			NiGPUProgram_ProgramType         m_eProgramType;  // 00?
			NiShaderAttributeDesc_ObjectType m_eObjectType;   // 04?
			std::uint32_t                    m_uiOffset;      // 08?
		};

		class RenderPassDescriptor
		{
		public:
			// members
			NiGPUProgramDescriptor                                 m_kVertexDesc;                // 00?
			NiGPUProgramDescriptor                                 m_kPixelDesc;                 // 14?
			bool                                                   m_bUsesNiRenderState;         // 28?
			bool                                                   m_bAlphaOverride;             // 29?
			bool                                                   m_bAlphaBlend;                // 2A?
			bool                                                   m_bResetObjectOffsets;        // 2B?
			NiTObjectSet<NiFragmentMaterial::ObjectResourceOffset> m_kObjectOffsets;             // 2C?
			bool                                                   m_bUsePreviousSrcBlendMode;   // 38?
			bool                                                   m_bUsePreviousDestBlendMode;  // 39?
			std::uint16_t                                          pad3A;                        // 3A
			NiAlphaProperty_AlphaFunction                          m_eSrcBlendMode;              // 3C?
			NiAlphaProperty_AlphaFunction                          m_eDestBlendMode;             // 40?
		};

		// members
		NiTObjectPtrSet<NiPointer<NiMaterialNodeLibrary>> m_kLibraries;                                     // 0C?
		NiPointer<NiGPUProgramCache>                      m_aspProgramCaches[3];                            // 18?
		NiTObjectPtrSet<NiPointer<NiShader>>              m_akShaderHashTable[37];                          // 24?
		NiTObjectSet<NiMaterialDescriptor>                m_akFailedShaderDescriptorHashTable[37];          // 1E0?
		NiTObjectSet<NiGPUProgramDescriptor>              m_aakFailedGPUProgramDescriptorHashTable[37][3];  // 39C?
		NiTPrimitiveArray<void*>                          m_kShaderFallbackFuncs;                           // 8D0?
		std::uint32_t                                     m_uiMaxPassCount;                                 // 8E0?
		std::uint16_t                                     m_usVertexVersion;                                // 8E4?
		std::uint16_t                                     m_usPixelVersion;                                 // 8E6?
	};
}
