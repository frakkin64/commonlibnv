#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ImageSpaceEffectParam.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRenderer_ClearFlags.h"
#include "RE/N/NiTMap.h"
#include "RE/N/NiTObjectArray.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/N/NiTexturingProperty_FilterMode.h"

namespace RE
{
	class NiD3DShaderConstantMap;
	class NiTexture;

	class ImageSpaceShaderParam :
		public ImageSpaceEffectParam  // 00
	{
	public:
		ImageSpaceShaderParam* ctor()
		{
			using func_t = ImageSpaceShaderParam*(__thiscall*)(ImageSpaceShaderParam*);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceShaderParam::ctor };
			return func(this);
		}

		void InitConstantMap(std::int32_t aiVSize, std::int32_t aiPSize)
		{
			using func_t = decltype(&ImageSpaceShaderParam::InitConstantMap);
			static REL::Relocation<func_t> func{ Offsets::ImageSpaceShaderParam::InitConstantMap };
			func(this, aiVSize, aiPSize);
		}

	public:
		// members
		NiTexturingProperty_FilterMode                    iFiltermode;            // 24
		NiRenderer_ClearFlags                             iClearFlags;            // 28
		NiColorA                                          fClearColor;            // 2C
		float*                                            pfVertexConstantGroup;  // 3C
		std::int32_t                                      iVSize;                 // 40
		float*                                            pfPixelConstantGroup;   // 44
		std::int32_t                                      iPSize;                 // 48
		NiPointer<NiD3DShaderConstantMap>                 spVertexConstantMap;    // 4C
		NiPointer<NiD3DShaderConstantMap>                 spPixelConstantMap;     // 50
		bool                                              bUseTexOffset[3];       // 54
		std::uint8_t                                      pad57;                  // 57
		NiTObjectArray<NiPointer<NiTexture>>              pInputTextures;         // 58
		NiTPrimitiveArray<NiTexturingProperty_FilterMode> pInputFilterModes;      // 68
		NiTMap<std::uint32_t, std::uint32_t>              pRenderStates;          // 78
	};
	static_assert(sizeof(ImageSpaceShaderParam) == 0x88);
}
