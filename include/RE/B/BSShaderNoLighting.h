#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSShader.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiD3DPass;
	class NiD3DPixelShader;
	class NiD3DVertexShader;
	class NiDX9ShaderDeclaration;
	class NiShaderConstantMapEntry;

	class BSShaderNoLighting :
		public BSShader  // 00
	{
	public:
	protected:
		void LoadShaders()
		{
			using func_t = decltype(&BSShaderNoLighting::LoadShaders);
			static REL::Relocation<func_t> func{ Offsets::BSShaderNoLighting::LoadShaders };
			func(this);
		}

	public:
		// members
		NiPointer<NiD3DPass>              spPass[30];                      // 6C
		NiPointer<NiD3DVertexShader>      spVertexShader[28];              // E4
		NiPointer<NiD3DPixelShader>       spPixelShader[7];                // 154
		NiShaderConstantMapEntry*         pParticleSubTextureOffsetEntry;  // 170
		NiShaderConstantMapEntry*         pCameraUpRightEntry;             // 174
		NiShaderConstantMapEntry*         pWorldEntry;                     // 178
		NiShaderConstantMapEntry*         pWorldViewEntry;                 // 17C
		NiShaderConstantMapEntry*         pWorldEyeDirEntry;               // 180
		NiShaderConstantMapEntry*         pBonesEntry;                     // 184?
		NiPointer<NiDX9ShaderDeclaration> spDecl;                          // 188?
		NiPointer<NiDX9ShaderDeclaration> spDeclVc;                        // 18C?
		NiPointer<NiDX9ShaderDeclaration> spDeclTexVc;                     // 190?
		NiPointer<NiDX9ShaderDeclaration> spDeclN;                         // 194?
		NiPointer<NiDX9ShaderDeclaration> spDeclVcN;                       // 198?
		NiPointer<NiDX9ShaderDeclaration> spDeclTexVcN;                    // 19C?
		NiPointer<NiDX9ShaderDeclaration> spSkinDecl;                      // 1A0?
		NiPointer<NiDX9ShaderDeclaration> spSkinDeclVc;                    // 1A4?
		NiPointer<NiDX9ShaderDeclaration> spSkinDeclTexVc;                 // 1A8?
		NiPointer<NiDX9ShaderDeclaration> spSkinDeclN;                     // 1AC?
		NiPointer<NiDX9ShaderDeclaration> spSkinDeclVcN;                   // 1B0?
		NiPointer<NiDX9ShaderDeclaration> spSkinDeclTexVcN;                // 1B4?
		NiColorA                          aModelCameraUpRight[2];          // 1B8?
	};
}
