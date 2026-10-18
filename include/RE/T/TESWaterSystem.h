#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/N/NiColorA.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BSMultiBoundNode;
	class BSRenderedTexture;
	class NiAVObject;
	class NiCamera;
	class NiDepthStencilBuffer;
	class NiGeometry;
	class NiMatrix3;
	class NiNode;
	class NiTexture;
	class NiTriShape;
	class NiTriShapeData;
	class PlaceableWaterGroup;
	class TESObjectREFR;
	class TESWaterForm;
	class TESWorldSpace;
	class WadingWaterData;

	class TESWaterSystem
	{
	public:
		TESWaterSystem* ctor()
		{
			using func_t = TESWaterSystem*(__thiscall*)(TESWaterSystem*);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::ctor };
			return func(this);
		}

		void UpdateWaterSystem(NiCamera* apCamera, NiNode* apNode)
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterSystem);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateWaterSystem };
			func(this, apCamera, apNode);
		}

		static bool GetUseWaterShader()
		{
			using func_t = decltype(&TESWaterSystem::GetUseWaterShader);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::GetUseWaterShader };
			return func();
		}

		static bool GetPlayerUnderwater()
		{
			using func_t = decltype(&TESWaterSystem::GetPlayerUnderwater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::GetPlayerUnderwater };
			return func();
		}

		void UpdatePlaceableWater(NiCamera* apCamera, bool abForceUpdate)
		{
			using func_t = decltype(&TESWaterSystem::UpdatePlaceableWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdatePlaceableWater };
			func(this, apCamera, abForceUpdate);
		}

		void UpdateLODWater(NiCamera* apCamera, bool abForceUpdate)
		{
			using func_t = decltype(&TESWaterSystem::UpdateLODWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateLODWater };
			func(this, apCamera, abForceUpdate);
		}

		void UpdateWaterShaderProperties(PlaceableWaterGroup* apWaterGroup, TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterShaderProperties);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateWaterShaderProperties };
			func(this, apWaterGroup, apRef);
		}

		void UpdateWaterNoise(PlaceableWaterGroup* apWaterGroup)
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterNoise);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateWaterNoise };
			func(this, apWaterGroup);
		}

		bool AddPlaceableWater(TESObjectREFR* apWaterRef)
		{
			using func_t = bool (TESWaterSystem::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::AddPlaceableWater };
			return func(this, apWaterRef);
		}

		bool AddPlaceableWater(TESObjectREFR* apWaterRef, NiPoint3& arPosition, NiMatrix3& arRotation)
		{
			using func_t = bool (TESWaterSystem::*)(TESObjectREFR*, NiPoint3&, NiMatrix3&);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::AddPlaceableWater_1 };
			return func(this, apWaterRef, arPosition, arRotation);
		}

		TESObjectREFR* AddLODWater(NiGeometry* apLODWater, TESWorldSpace* apWorldSpace, NiNode* apWaterLODRoot, BSMultiBoundNode* apBound, bool abLODWaterHeight)
		{
			using func_t = decltype(&TESWaterSystem::AddLODWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::AddLODWater };
			return func(this, apLODWater, apWorldSpace, apWaterLODRoot, apBound, abLODWaterHeight);
		}

		void RemoveLODWater(TESObjectREFR* apLODWaterRef, TESWorldSpace* apWorldSpace, NiNode* apWaterLODRoot)
		{
			using func_t = decltype(&TESWaterSystem::RemoveLODWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::RemoveLODWater };
			func(this, apLODWaterRef, apWorldSpace, apWaterLODRoot);
		}

		bool RemovePlaceableWater(TESObjectREFR* apWaterRef)
		{
			using func_t = bool (TESWaterSystem::*)(TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::RemovePlaceableWater };
			return func(this, apWaterRef);
		}

		bool RemovePlaceableWater(TESObjectREFR* apWaterRef, NiPoint3& arPosition, NiMatrix3& arRotation)
		{
			using func_t = bool (TESWaterSystem::*)(TESObjectREFR*, NiPoint3&, NiMatrix3&);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::RemovePlaceableWater_1 };
			return func(this, apWaterRef, arPosition, arRotation);
		}

		void UpdateReflectionTexturePointers(PlaceableWaterGroup* apGroup)
		{
			using func_t = decltype(&TESWaterSystem::UpdateReflectionTexturePointers);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateReflectionTexturePointers };
			func(this, apGroup);
		}

		void ClearReflectionTexturePointers(PlaceableWaterGroup* apGroup, bool abRemovingGroup, bool abRecurse)
		{
			using func_t = decltype(&TESWaterSystem::ClearReflectionTexturePointers);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::ClearReflectionTexturePointers };
			func(this, apGroup, abRemovingGroup, abRecurse);
		}

		PlaceableWaterGroup* FindWaterGroup(TESObjectREFR* apWaterRef, TESObjectREFR* apObjectRef, float afWaterHeight)
		{
			using func_t = decltype(&TESWaterSystem::FindWaterGroup);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::FindWaterGroup };
			return func(this, apWaterRef, apObjectRef, afWaterHeight);
		}

		void AddTESObjectToWaterGroup(TESObjectREFR* apWaterRef, TESObjectREFR* apObjectRef, float afWaterHeight)
		{
			using func_t = decltype(&TESWaterSystem::AddTESObjectToWaterGroup);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::AddTESObjectToWaterGroup };
			func(this, apWaterRef, apObjectRef, afWaterHeight);
		}

		bool IsWaterNodeVisible(TESObjectREFR* apWaterRef, NiCamera* apCamera)
		{
			using func_t = decltype(&TESWaterSystem::IsWaterNodeVisible);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::IsWaterNodeVisible };
			return func(this, apWaterRef, apCamera);
		}

		void DisplayWater(bool abVisible, bool abLOD, bool abInverseCull)
		{
			using func_t = decltype(&TESWaterSystem::DisplayWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::DisplayWater };
			func(this, abVisible, abLOD, abInverseCull);
		}

		bool EnableWaterSystem()
		{
			using func_t = decltype(&TESWaterSystem::EnableWaterSystem);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::EnableWaterSystem };
			return func(this);
		}

		bool DisableWaterSystem(bool abFreeMemory, bool abFinal)
		{
			using func_t = decltype(&TESWaterSystem::DisableWaterSystem);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::DisableWaterSystem };
			return func(this, abFreeMemory, abFinal);
		}

		void UpdateWaterSounds()
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterSounds);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateWaterSounds };
			func(this);
		}

		NiTriShape* CreateQuadShape(NiTriShapeData* data)
		{
			using func_t = decltype(&TESWaterSystem::CreateQuadShape);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::CreateQuadShape };
			return func(this, data);
		}

		NiTriShapeData* CreateQuadData(float afMeshSizeWidth, float a_arg2, std::uint32_t a_arg3, std::uint32_t textureSize, bool tile, bool bNormals)
		{
			using func_t = decltype(&TESWaterSystem::CreateQuadData);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::CreateQuadData };
			return func(this, afMeshSizeWidth, a_arg2, a_arg3, textureSize, tile, bNormals);
		}

		static NiNode* GetWaterRoot()
		{
			using func_t = decltype(&TESWaterSystem::GetWaterRoot);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::GetWaterRoot };
			return func();
		}

		NiAVObject* GetWaterGeometry(TESObjectREFR* apWaterRef)
		{
			using func_t = decltype(&TESWaterSystem::GetWaterGeometry);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::GetWaterGeometry };
			return func(this, apWaterRef);
		}

		NiAVObject* CreateWadingWaterGeometry(PlaceableWaterGroup* apGroup, NiNode* pParentNode, float fMeshSize)
		{
			using func_t = decltype(&TESWaterSystem::CreateWadingWaterGeometry);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::CreateWadingWaterGeometry };
			return func(this, apGroup, pParentNode, fMeshSize);
		}

		bool ActorWithinRangeOfWadingWater(PlaceableWaterGroup* apGroup)
		{
			using func_t = decltype(&TESWaterSystem::ActorWithinRangeOfWadingWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::ActorWithinRangeOfWadingWater };
			return func(this, apGroup);
		}

		void AddRipple(NiPoint3 arPosition, float afSize)
		{
			using func_t = decltype(&TESWaterSystem::AddRipple);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::AddRipple };
			func(this, arPosition, afSize);
		}

		void UpdateActorsInWater()
		{
			using func_t = decltype(&TESWaterSystem::UpdateActorsInWater);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateActorsInWater };
			func(this);
		}

		void UpdateWaterDisplacementSimulation()
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterDisplacementSimulation);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::UpdateWaterDisplacementSimulation };
			func(this);
		}

		void RenderWadingWaterStencil()
		{
			using func_t = decltype(&TESWaterSystem::RenderWadingWaterStencil);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::RenderWadingWaterStencil };
			func(this);
		}

		static void SetCurrentWaterType(TESWaterForm* apType)
		{
			using func_t = decltype(&TESWaterSystem::SetCurrentWaterType);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::SetCurrentWaterType };
			func(apType);
		}

	private:
		void MTSetupSelectiveReflectionTexture(NiCamera* apCamera, PlaceableWaterGroup* apWaterGroup, bool abLOD)
		{
			using func_t = decltype(&TESWaterSystem::MTSetupSelectiveReflectionTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTSetupSelectiveReflectionTexture };
			func(this, apCamera, apWaterGroup, abLOD);
		}

		void MTSetupWorldReflectionTexture(NiCamera* apCamera)
		{
			using func_t = decltype(&TESWaterSystem::MTSetupWorldReflectionTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTSetupWorldReflectionTexture };
			func(this, apCamera);
		}

		void MTSetupSkyReflectionTexture(NiCamera* apCamera)
		{
			using func_t = decltype(&TESWaterSystem::MTSetupSkyReflectionTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTSetupSkyReflectionTexture };
			func(this, apCamera);
		}

		void MTRenderSelectiveReflectionTexture(PlaceableWaterGroup* apWaterGroup)
		{
			using func_t = decltype(&TESWaterSystem::MTRenderSelectiveReflectionTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTRenderSelectiveReflectionTexture };
			func(this, apWaterGroup);
		}

		void MTRenderWorldReflectionTexture()
		{
			using func_t = decltype(&TESWaterSystem::MTRenderWorldReflectionTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTRenderWorldReflectionTexture };
			func(this);
		}

		void MTRenderSkyReflectionTexture()
		{
			using func_t = decltype(&TESWaterSystem::MTRenderSkyReflectionTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTRenderSkyReflectionTexture };
			func(this);
		}

		void MTSetupSelectiveDepthTexture(NiCamera* apCamera, PlaceableWaterGroup* apWaterGroup)
		{
			using func_t = decltype(&TESWaterSystem::MTSetupSelectiveDepthTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTSetupSelectiveDepthTexture };
			func(this, apCamera, apWaterGroup);
		}

		void MTRenderSelectiveDepthTexture(PlaceableWaterGroup* apWaterGroup, std::uint16_t auReadMask)
		{
			using func_t = decltype(&TESWaterSystem::MTRenderSelectiveDepthTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::MTRenderSelectiveDepthTexture };
			func(this, apWaterGroup, auReadMask);
		}

		void RenderWaterGroupStencil(NiCamera* apCamera, PlaceableWaterGroup* apWaterGroup, bool abClearAll, std::uint16_t auWriteMask)
		{
			using func_t = decltype(&TESWaterSystem::RenderWaterGroupStencil);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::RenderWaterGroupStencil };
			func(this, apCamera, apWaterGroup, abClearAll, auWriteMask);
		}

		void SetClipPlane(NiColorA aiPlane, std::int32_t a_arg2)
		{
			using func_t = decltype(&TESWaterSystem::SetClipPlane);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::SetClipPlane };
			func(this, aiPlane, a_arg2);
		}

		BSRenderedTexture* InitializeGreyTexture()
		{
			using func_t = decltype(&TESWaterSystem::InitializeGreyTexture);
			static REL::Relocation<func_t> func{ Offsets::TESWaterSystem::InitializeGreyTexture };
			return func(this);
		}

	public:
		// members
		std::int32_t                                    iAccumulationCount;               // 00
		std::int32_t                                    iGlobalGetWaterGeometryCount;     // 04
		NiPointer<BSRenderedTexture>                    spWaterHeightMapTexture;          // 08
		NiPointer<BSRenderedTexture>                    spWaterHeightMapTextureFiltered;  // 0C
		NiPointer<BSRenderedTexture>                    spWaterNormalMapTexture;          // 10
		NiPointer<BSRenderedTexture>                    spRainHeightMapTexture;           // 14
		NiPointer<NiDepthStencilBuffer>                 spRefractionDepthStencilBuffer;   // 18
		NiPointer<NiTexture>                            spWaterNoiseTexture;              // 1C
		NiPointer<NiTexture>                            spWaterNormalMap;                 // 20
		float                                           fBlendTimer;                      // 24
		NiPoint2                                        fLastDisplaceOffset;              // 28
		TESWaterForm*                                   pBlendToWaterType;                // 30
		bool                                            bUpdateWaterBlend;                // 34
		std::uint8_t                                    pad35[0x3];                       // 35
		float                                           fWaterTypeBlendAmount;            // 38
		NiTPointerList<PlaceableWaterGroup*>            PlaceableWaterGroupList;          // 3C
		PlaceableWaterGroup*                            pLODWaterGroup;                   // 48
		NiTPointerMap<TESObjectREFR*, TESObjectREFR*>   ReflectionRefMap;                 // 4C
		NiTPointerMap<TESObjectREFR*, TESObjectREFR*>   DepthRefMap;                      // 5C
		NiTPointerMap<TESWaterForm*, bool>              WaterTypeUpdateMap;               // 6C
		NiTPointerMap<TESObjectREFR*, WadingWaterData*> WadingWaterMap;                   // 7C
		BSSoundHandle                                   WaterSound;                       // 8C
		float                                           fTimeSinceLastRipplePlaced;       // 98
		bool                                            bCull3rdPerson;                   // 9C
		std::uint8_t                                    pad9D[0x3];                       // 9D
	};
	static_assert(sizeof(TESWaterSystem) == 0xA0);
}
