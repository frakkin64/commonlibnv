#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"
#include "RE/H/HAIR_PART.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSFaceGenModelMeshData;
	class BSFaceGenModelTextureData;
	class NiTexture;
	class NiTriBasedGeom;

	class BSFaceGenModel :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenModel };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenModel };

		// override (NiRefObject)
		virtual ~BSFaceGenModel() = default;  // 00

		char const* GetEGMFilename() const
		{
			using func_t = decltype(&BSFaceGenModel::GetEGMFilename);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::GetEGMFilename };
			return func(this);
		}

		char const* GetEGTFilename() const
		{
			using func_t = decltype(&BSFaceGenModel::GetEGTFilename);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::GetEGTFilename };
			return func(this);
		}

		bool LoadModel(char const* apEGMFilename, char const* apNIFFilename, char const* apTRIFilename, char const* apEGTFilename, HAIR_PART aeHairPart, bool abIsAccessory)
		{
			using func_t = decltype(&BSFaceGenModel::LoadModel);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::LoadModel };
			return func(this, apEGMFilename, apNIFFilename, apTRIFilename, apEGTFilename, aeHairPart, abIsAccessory);
		}

		bool LoadModelMesh(char const* apEGMFilename, char const* apNIFFilename, char const* apTRIFilename, HAIR_PART aeHairPart, bool abIsAccessory)
		{
			using func_t = decltype(&BSFaceGenModel::LoadModelMesh);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::LoadModelMesh };
			return func(this, apEGMFilename, apNIFFilename, apTRIFilename, aeHairPart, abIsAccessory);
		}

		bool LoadModelTexture(char const* apEGTFilename)
		{
			using func_t = decltype(&BSFaceGenModel::LoadModelTexture);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::LoadModelTexture };
			return func(this, apEGTFilename);
		}

		void ForceLoadModelTexture()
		{
			using func_t = decltype(&BSFaceGenModel::ForceLoadModelTexture);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::ForceLoadModelTexture };
			func(this);
		}

		bool ApplyCoordinateToNewMesh(void* apCoord, NiPointer<NiTriBasedGeom>& aspReturnMesh)
		{
			using func_t = decltype(&BSFaceGenModel::ApplyCoordinateToNewMesh);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::ApplyCoordinateToNewMesh };
			return func(this, apCoord, aspReturnMesh);
		}

		bool ApplyCoordinateToExistingMesh(void* apCoord, NiTriBasedGeom* apMesh, bool abForceBaseMorph)
		{
			using func_t = decltype(&BSFaceGenModel::ApplyCoordinateToExistingMesh);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::ApplyCoordinateToExistingMesh };
			return func(this, apCoord, apMesh, abForceBaseMorph);
		}

		bool ApplyCoordinateTexturingToMesh(void* apCoord, NiPointer<NiTexture>& aspReturnBaseMod, std::uint32_t aiForceBasisSize)
		{
			using func_t = decltype(&BSFaceGenModel::ApplyCoordinateTexturingToMesh);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::ApplyCoordinateTexturingToMesh };
			return func(this, apCoord, aspReturnBaseMod, aiForceBasisSize);
		}

		bool LoadEGMData()
		{
			using func_t = decltype(&BSFaceGenModel::LoadEGMData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::LoadEGMData };
			return func(this);
		}

		std::uint32_t GetEGMDataSize()
		{
			using func_t = decltype(&BSFaceGenModel::GetEGMDataSize);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::GetEGMDataSize };
			return func(this);
		}

		bool LoadEGTData()
		{
			using func_t = decltype(&BSFaceGenModel::LoadEGTData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::LoadEGTData };
			return func(this);
		}

		void UnloadEGTData()
		{
			using func_t = decltype(&BSFaceGenModel::UnloadEGTData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::UnloadEGTData };
			func(this);
		}

		void KillTextureData()
		{
			using func_t = decltype(&BSFaceGenModel::KillTextureData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::KillTextureData };
			func(this);
		}

		std::uint32_t GetEGTDataSize()
		{
			using func_t = decltype(&BSFaceGenModel::GetEGTDataSize);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModel::GetEGTDataSize };
			return func(this);
		}

	public:
		// members
		BSFaceGenModelMeshData*    pMeshData;     // 08
		BSFaceGenModelTextureData* pTextureData;  // 0C
	};
	static_assert(sizeof(BSFaceGenModel) == 0x10);
}
