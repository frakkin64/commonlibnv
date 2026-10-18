#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/T/TESGrass_GRASS_WATER_STATE.h"

namespace RE
{
	class NiNode;
	class TESObjectCELL;
	class TESObjectLAND;
	class TallGrassShaderProperty_GrassParam;

	class TESTerrainLODManager
	{
	public:
		static NiNode* GetGrassNode()
		{
			using func_t = decltype(&TESTerrainLODManager::GetGrassNode);
			static REL::Relocation<func_t> func{ Offsets::TESTerrainLODManager::GetGrassNode };
			return func();
		}

		TESTerrainLODManager* ctor()
		{
			using func_t = TESTerrainLODManager*(__thiscall*)(TESTerrainLODManager*);
			static REL::Relocation<func_t> func{ Offsets::TESTerrainLODManager::ctor };
			return func(this);
		}

		static void InitGrass()
		{
			using func_t = decltype(&TESTerrainLODManager::InitGrass);
			static REL::Relocation<func_t> func{ Offsets::TESTerrainLODManager::InitGrass };
			func();
		}

		static void UpdateGrass(NiPoint3 apCameraDirection, NiPoint3 a_arg2, float afUpdateAngle)
		{
			using func_t = decltype(&TESTerrainLODManager::UpdateGrass);
			static REL::Relocation<func_t> func{ Offsets::TESTerrainLODManager::UpdateGrass };
			func(apCameraDirection, a_arg2, afUpdateAngle);
		}

	private:
		static void UpdateGrassForCell(TESObjectCELL* apCell, NiNode* apGrassNode, NiPoint3 apCameraDirection, NiPoint3 a_arg4, float fFadeRange, float fMaxRange, float afUpdateAngle)
		{
			using func_t = decltype(&TESTerrainLODManager::UpdateGrassForCell);
			static REL::Relocation<func_t> func{ Offsets::TESTerrainLODManager::UpdateGrassForCell };
			func(apCell, apGrassNode, apCameraDirection, a_arg4, fFadeRange, fMaxRange, afUpdateAngle);
		}

		static void CreateGrass(std::int32_t aiCellx, std::int32_t aiCelly, std::int32_t aiBlock, TESObjectLAND* apLand, std::int32_t aiSeed, NiPoint3 const& aCoord, NiNode* apPosition, NiPoint3 fFadeRange, TallGrassShaderProperty_GrassParam* fMaxRange, float* afCellWaterHeight, float a_arg11, float a_arg12, std::uint16_t a_arg13, TESGrass_GRASS_WATER_STATE a_arg14, float a_arg15, std::uint8_t a_arg16, std::uint8_t a_arg17)
		{
			using func_t = decltype(&TESTerrainLODManager::CreateGrass);
			static REL::Relocation<func_t> func{ Offsets::TESTerrainLODManager::CreateGrass };
			func(aiCellx, aiCelly, aiBlock, apLand, aiSeed, aCoord, apPosition, fFadeRange, fMaxRange, afCellWaterHeight, a_arg11, a_arg12, a_arg13, a_arg14, a_arg15, a_arg16, a_arg17);
		}
	};
}
