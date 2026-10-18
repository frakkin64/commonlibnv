#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkMatrix3.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkxCamera;
	class hkxLight;
	class hkxMaterial;
	class hkxMesh;
	class hkxNode;
	class hkxNodeSelectionSet;
	class hkxSkinBinding;
	class hkxTextureFile;
	class hkxTextureInplace;

	class alignas(16) hkxScene :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxScene };
		static constexpr auto VTABLE{ VTABLE::hkxScene };

		// override (hkReferencedObject)
		virtual ~hkxScene() = default;  // 00

		// members
		hkStringPtr                                                      m_modeller;          // 08?
		hkStringPtr                                                      m_asset;             // 0C?
		float                                                            m_sceneLength;       // 10?
		hkRefPtr<hkxNode>                                                m_rootNode;          // 14?
		hkArray<hkRefPtr<hkxNodeSelectionSet>, hkContainerHeapAllocator> m_selectionSets;     // 18?
		hkArray<hkRefPtr<hkxCamera>, hkContainerHeapAllocator>           m_cameras;           // 24?
		hkArray<hkRefPtr<hkxLight>, hkContainerHeapAllocator>            m_lights;            // 30?
		hkArray<hkRefPtr<hkxMesh>, hkContainerHeapAllocator>             m_meshes;            // 3C?
		hkArray<hkRefPtr<hkxMaterial>, hkContainerHeapAllocator>         m_materials;         // 48?
		hkArray<hkRefPtr<hkxTextureInplace>, hkContainerHeapAllocator>   m_inplaceTextures;   // 54?
		hkArray<hkRefPtr<hkxTextureFile>, hkContainerHeapAllocator>      m_externalTextures;  // 60?
		hkArray<hkRefPtr<hkxSkinBinding>, hkContainerHeapAllocator>      m_skinBindings;      // 6C?
		std::uint8_t                                                     pad78[0x8];          // 78
		hkMatrix3                                                        m_appliedTransform;  // 80?
	};
}
