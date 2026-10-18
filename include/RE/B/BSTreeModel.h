#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSShaderTextureSet;
	class BSTreeNode;
	class CSpeedTreeRT;
	class NiAlphaProperty;
	class NiSourceTexture;
	class NiTriShape;
	class NiTriShapeData;
	class NiTriStripsData;
	class STLSPData;
	class SpeedTreeBranchShaderProperty;
	class SpeedTreeLeafShaderProperty;
	class TESObjectTREE;
	class bhkRigidBody;

	class BSTreeModel :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTreeModel };
		static constexpr auto VTABLE{ VTABLE::BSTreeModel };

		enum class BSTREEMODEL_TYPE : std::int32_t
		{
			kBTMT_NONE = 0x0,
			kBTMT_ORIGINAL = 0x1,
			kBTMT_INSTANCE = 0x2,
			kBTMT_COUNT = 0x3,
		};

		// override (NiRefObject)
		virtual ~BSTreeModel() = default;  // 00

		// add
		virtual void Update(BSTreeNode* apNode);                 // 02
		virtual BSTreeNode* CreateArt(float afScale);            // 03
		virtual void ApplyBaseObject(TESObjectTREE* apTreeObj);  // 04
		virtual void ClearModel();                               // 05
		virtual void CreateGeometry(TESObjectTREE* apTreeObj);   // 06

		bool IsInstance() const
		{
			using func_t = decltype(&BSTreeModel::IsInstance);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::IsInstance };
			return func(this);
		}

		std::uint16_t GetNumBranchLODLevels() const
		{
			using func_t = decltype(&BSTreeModel::GetNumBranchLODLevels);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::GetNumBranchLODLevels };
			return func(this);
		}

		std::uint16_t GetNumLeafLODLevels() const
		{
			using func_t = decltype(&BSTreeModel::GetNumLeafLODLevels);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::GetNumLeafLODLevels };
			return func(this);
		}

		bool InitAsInstance(BSTreeModel* apInstanceFrom)
		{
			using func_t = decltype(&BSTreeModel::InitAsInstance);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::InitAsInstance };
			return func(this, apInstanceFrom);
		}

		bool InitFromBase(TESObjectTREE* apTreeObj, std::uint32_t aiSeed)
		{
			using func_t = decltype(&BSTreeModel::InitFromBase);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::InitFromBase };
			return func(this, apTreeObj, aiSeed);
		}

	protected:
		void CreateBranchGeometry()
		{
			using func_t = decltype(&BSTreeModel::CreateBranchGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::CreateBranchGeometry };
			func(this);
		}

		void CreateLeafGeometry(TESObjectTREE* apTreeObj)
		{
			using func_t = decltype(&BSTreeModel::CreateLeafGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::CreateLeafGeometry };
			func(this, apTreeObj);
		}

		void CreateBillboardGeometry(TESObjectTREE* apTreeObj)
		{
			using func_t = decltype(&BSTreeModel::CreateBillboardGeometry);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::CreateBillboardGeometry };
			func(this, apTreeObj);
		}

		static NiAlphaProperty* CreateAlphaProperty()
		{
			using func_t = decltype(&BSTreeModel::CreateAlphaProperty);
			static REL::Relocation<func_t> func{ Offsets::BSTreeModel::CreateAlphaProperty };
			return func();
		}

	public:
		// members
		// not placed: fTrunkWidth(absent)
		BSTreeModel::BSTREEMODEL_TYPE             eType;                      // 08
		CSpeedTreeRT*                             pSpeedTree;                 // 0C
		NiPointer<BSTreeModel>                    spTreeParent;               // 10
		NiPointer<NiTriStripsData>*               pspBranchData;              // 14
		NiPointer<NiTriShapeData>*                pspLeafData;                // 18
		NiPointer<NiTriShape>                     spBillboard;                // 1C
		NiPointer<STLSPData>                      spLeafShaderData;           // 20
		NiPointer<SpeedTreeBranchShaderProperty>* pspBranchShaderProperties;  // 24
		NiPointer<SpeedTreeLeafShaderProperty>*   pspLeafShaderProperties;    // 28
		NiPointer<BSShaderTextureSet>             spBranchTextureSet;         // 2C
		NiPointer<NiSourceTexture>                spLeafFrondTexture;         // 30
		NiPointer<BSShaderTextureSet>             spBillboardTextureSet;      // 34
		NiPointer<bhkRigidBody>                   spRigidBody;                // 38
		float                                     fCurveScalar;               // 3C
		std::uint32_t                             iSeed;                      // 40
		bool                                      bInitialized;               // 44
		std::uint8_t                              pad45[0x7];                 // 45
		float                                     fTrunkHeight;               // 4C
	};
	static_assert(sizeof(BSTreeModel) == 0x50);
}
