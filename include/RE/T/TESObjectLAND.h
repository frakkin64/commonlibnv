#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/O/OBJ_LAND.h"
#include "RE/T/TESChildCell.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class COORD_DATA;
	class FORM;
	class FORM_GROUP;
	class LANDS8;
	class NiColorA;
	class NiGeometry;
	class NiLines;
	class NiNode;
	class NiTriStrips;
	class QueuedFile;
	class TESFile;
	class TESGrassAreaParam;
	class TESLandTexture;
	class TESObjectCELL;
	class bhkRigidBody;
	class hkpMoppCode;

	class TESObjectLAND :
		public TESForm,  // 00
		public TESChildCell  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectLAND };
		static constexpr auto VTABLE{ VTABLE::TESObjectLAND };

		class LoadedLandData;

		class LoadedLandData
		{
		public:
			// members
			NiNode**                                          ppMesh;                // 00?
			NiPoint3**                                        ppVertices;            // 04?
			NiPoint3**                                        ppNormals;             // 08?
			NiColorA**                                        ppColorsA;             // 0C?
			bool**                                            ppNormalsSet;          // 10?
			NiPointer<NiLines>                                spBorder;              // 14?
			NiPoint2                                          HeightExtents;         // 18?
			TESLandTexture*                                   pDefQuadTexture[4];    // 20?
			TESLandTexture**                                  pQuadTextureArray[4];  // 30?
			float**                                           ppPercentArrays[4];    // 40?
			hkpMoppCode*                                      pMoppCode;             // 50?
			NiTPointerMap<std::uint32_t, TESGrassAreaParam**> pmGrassMap[4];         // 54?
			NiPointer<bhkRigidBody>                           spLandRB;              // 94?
			std::int32_t                                      iCellX;                // 98?
			std::int32_t                                      iCellY;                // 9C?
			float                                             fBaseHeight;           // A0?
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kLAND_ID };

		// override (TESForm)
		virtual ~TESObjectLAND() = default;                                                                                  // 04
		virtual bool Load(TESFile* apFile) override;                                                                         // 08
		virtual void Save() override;                                                                                        // 0B
		virtual bool SavesBefore(FORM* apGroupFORM) override;                                                                // 0E
		virtual bool SavesBefore(TESForm* apForm) override;                                                                  // 0F
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap) override;  // 10
		virtual void SetAltered(bool abAltered) override;                                                                    // 32
		virtual void Copy(TESForm* apCopy) override;                                                                         // 42
		virtual bool BelongsInGroup(FORM* apGroupFORM, bool abAllowParentGroups, bool abCurrentOnly) override;               // 44
		virtual void CreateGroupData(FORM* apOutGroupFORM, FORM_GROUP* apParentGroup) override;                              // 45

		bool HasVertices()
		{
			using func_t = decltype(&TESObjectLAND::HasVertices);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::HasVertices };
			return func(this);
		}

		TESObjectLAND* ctor()
		{
			using func_t = TESObjectLAND*(__thiscall*)(TESObjectLAND*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::ctor };
			return func(this);
		}

		static void InitializeStatics()
		{
			using func_t = decltype(&TESObjectLAND::InitializeStatics);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::InitializeStatics };
			func();
		}

		std::int32_t GetCellX()
		{
			using func_t = decltype(&TESObjectLAND::GetCellX);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetCellX };
			return func(this);
		}

		std::int32_t GetCellY()
		{
			using func_t = decltype(&TESObjectLAND::GetCellY);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetCellY };
			return func(this);
		}

		float GetWorldCellX()
		{
			using func_t = decltype(&TESObjectLAND::GetWorldCellX);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetWorldCellX };
			return func(this);
		}

		float GetWorldCellY()
		{
			using func_t = decltype(&TESObjectLAND::GetWorldCellY);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetWorldCellY };
			return func(this);
		}

		void SetCell(TESObjectCELL* apCell)
		{
			using func_t = decltype(&TESObjectLAND::SetCell);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::SetCell };
			func(this, apCell);
		}

		bool GetLandRemapped()
		{
			using func_t = decltype(&TESObjectLAND::GetLandRemapped);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetLandRemapped };
			return func(this);
		}

		static TESLandTexture* GetDefaultTexture()
		{
			using func_t = decltype(&TESObjectLAND::GetDefaultTexture);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetDefaultTexture };
			return func();
		}

		NiNode* GetQuadLandNode(std::int32_t aiBlock)
		{
			using func_t = decltype(&TESObjectLAND::GetQuadLandNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetQuadLandNode };
			return func(this, aiBlock);
		}

		NiPoint3 GetWorldOffsetForBlock(std::int32_t result)
		{
			using func_t = decltype(&TESObjectLAND::GetWorldOffsetForBlock);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetWorldOffsetForBlock };
			return func(this, result);
		}

		bool LoadVertices(bool abLoad3D)
		{
			using func_t = decltype(&TESObjectLAND::LoadVertices);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::LoadVertices };
			return func(this, abLoad3D);
		}

		bool LoadVerticesIntoArrays()
		{
			using func_t = decltype(&TESObjectLAND::LoadVerticesIntoArrays);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::LoadVerticesIntoArrays };
			return func(this);
		}

		bool UnLoadVertices()
		{
			using func_t = decltype(&TESObjectLAND::UnLoadVertices);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::UnLoadVertices };
			return func(this);
		}

		void Attach3D()
		{
			using func_t = decltype(&TESObjectLAND::Attach3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::Attach3D };
			func(this);
		}

		bool ReadMoppCodeFromBuffer(char* apBuffer, std::uint32_t aiBufferSize, hkpMoppCode** apOutCode)
		{
			using func_t = decltype(&TESObjectLAND::ReadMoppCodeFromBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::ReadMoppCodeFromBuffer };
			return func(this, apBuffer, aiBufferSize, apOutCode);
		}

		bool IsLoaded()
		{
			using func_t = decltype(&TESObjectLAND::IsLoaded);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::IsLoaded };
			return func(this);
		}

		void MarkLoaded(bool loaded)
		{
			using func_t = decltype(&TESObjectLAND::MarkLoaded);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::MarkLoaded };
			func(this, loaded);
		}

		bool CreateLandscape()
		{
			using func_t = decltype(&TESObjectLAND::CreateLandscape);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::CreateLandscape };
			return func(this);
		}

		void UpdateMesh(bool updatescene, LANDS8* pL8)
		{
			using func_t = decltype(&TESObjectLAND::UpdateMesh);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::UpdateMesh };
			func(this, updatescene, pL8);
		}

		float GetDefaultWorldHeight()
		{
			using func_t = decltype(&TESObjectLAND::GetDefaultWorldHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetDefaultWorldHeight };
			return func(this);
		}

		TESLandTexture* GetMainTexture(NiPoint3 const& aCoord)
		{
			using func_t = TESLandTexture* (TESObjectLAND::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetMainTexture };
			return func(this, aCoord);
		}

		TESLandTexture* GetMainTexture(std::uint8_t acBlock, std::uint16_t asVertIndex)
		{
			using func_t = TESLandTexture* (TESObjectLAND::*)(std::uint8_t, std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetMainTexture_1 };
			return func(this, acBlock, asVertIndex);
		}

		TESLandTexture* GetTexture(std::uint8_t acBlock, std::uint16_t asTexIndex)
		{
			using func_t = decltype(&TESObjectLAND::GetTexture);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetTexture };
			return func(this, acBlock, asTexIndex);
		}

		float GetTexturePercent(std::uint8_t acBlock, std::uint16_t asVertIndex, std::uint16_t asTexIndex)
		{
			using func_t = decltype(&TESObjectLAND::GetTexturePercent);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetTexturePercent };
			return func(this, acBlock, asVertIndex, asTexIndex);
		}

		void AdjustTextureArrays()
		{
			using func_t = decltype(&TESObjectLAND::AdjustTextureArrays);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::AdjustTextureArrays };
			func(this);
		}

		float GetTextureUsePercent(std::uint8_t acBlock, std::uint16_t asTexIndex)
		{
			using func_t = decltype(&TESObjectLAND::GetTextureUsePercent);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetTextureUsePercent };
			return func(this, acBlock, asTexIndex);
		}

		void MergeSameFileTextures()
		{
			using func_t = decltype(&TESObjectLAND::MergeSameFileTextures);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::MergeSameFileTextures };
			func(this);
		}

		NiPoint3 GetVertexLocation(std::uint8_t result, std::uint16_t acBlock, std::int32_t* asVertIndex, std::int32_t* apCellX)
		{
			using func_t = decltype(&TESObjectLAND::GetVertexLocation);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetVertexLocation };
			return func(this, result, acBlock, asVertIndex, apCellX);
		}

		bool GetCoordData(COORD_DATA* cdata, NiPoint3 const& coord, bool forcetovertex)
		{
			using func_t = decltype(&TESObjectLAND::GetCoordData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetCoordData };
			return func(this, cdata, coord, forcetovertex);
		}

		bool CalculateGrasParams()
		{
			using func_t = decltype(&TESObjectLAND::CalculateGrasParams);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::CalculateGrasParams };
			return func(this);
		}

		bool GetLandNormal(COORD_DATA const& cdata, NiPoint3& aNormal, NiPoint3& aFaceNormal)
		{
			using func_t = decltype(&TESObjectLAND::GetLandNormal);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetLandNormal };
			return func(this, cdata, aNormal, aFaceNormal);
		}

		NiGeometry* GetGeometry(NiPoint3 const& coord)
		{
			using func_t = decltype(&TESObjectLAND::GetGeometry);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetGeometry };
			return func(this, coord);
		}

		bool GetLandHeight(NiPoint3 const& coord, float& height)
		{
			using func_t = decltype(&TESObjectLAND::GetLandHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetLandHeight };
			return func(this, coord, height);
		}

		NiPoint2 GetMinMaxBlockHeight(std::int32_t result)
		{
			using func_t = decltype(&TESObjectLAND::GetMinMaxBlockHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetMinMaxBlockHeight };
			return func(this, result);
		}

		NiPoint2 GetMinMaxLandHeight()
		{
			using func_t = decltype(&TESObjectLAND::GetMinMaxLandHeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetMinMaxLandHeight };
			return func(this);
		}

		bool GetLandColor(NiPoint3 const& aCoord, NiColorA& aColor)
		{
			using func_t = decltype(&TESObjectLAND::GetLandColor);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetLandColor };
			return func(this, aCoord, aColor);
		}

		void DrawLandBorder(bool bShow)
		{
			using func_t = decltype(&TESObjectLAND::DrawLandBorder);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::DrawLandBorder };
			func(this, bShow);
		}

		void InitDistantTextureBlending()
		{
			using func_t = decltype(&TESObjectLAND::InitDistantTextureBlending);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::InitDistantTextureBlending };
			func(this);
		}

	protected:
		void GetVertex(std::int32_t iblock, std::int32_t index, NiPoint3& vert)
		{
			using func_t = decltype(&TESObjectLAND::GetVertex);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetVertex };
			func(this, iblock, index, vert);
		}

		void GetNormal(std::int32_t iblock, std::int32_t index, NiPoint3& norm)
		{
			using func_t = decltype(&TESObjectLAND::GetNormal);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetNormal };
			func(this, iblock, index, norm);
		}

		void GetColorA(std::int32_t iblock, std::int32_t index, NiColorA& color)
		{
			using func_t = decltype(&TESObjectLAND::GetColorA);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::GetColorA };
			func(this, iblock, index, color);
		}

		NiTriStrips* MakeLandTriStrips(std::uint8_t aiBlock)
		{
			using func_t = decltype(&TESObjectLAND::MakeLandTriStrips);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::MakeLandTriStrips };
			return func(this, aiBlock);
		}

		bool InitLandscape()
		{
			using func_t = decltype(&TESObjectLAND::InitLandscape);
			static REL::Relocation<func_t> func{ Offsets::TESObjectLAND::InitLandscape };
			return func(this);
		}

	public:
		// members
		OBJ_LAND                       Data;              // 1C
		TESObjectCELL*                 pParentCell;       // 20
		NiPointer<QueuedFile>          spQueuedTextures;  // 24
		TESObjectLAND::LoadedLandData* pLoadedData;       // 28
	};
	static_assert(sizeof(TESObjectLAND) == 0x2C);
}
