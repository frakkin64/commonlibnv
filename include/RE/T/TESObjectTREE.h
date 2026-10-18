#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/N/NiPoint2.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPrimitiveArray.h"
#include "RE/O/OBJ_TREE.h"
#include "RE/T/TESBoundTreeObject.h"
#include "RE/T/TESIconTree.h"
#include "RE/T/TESModelTree.h"

namespace RE
{
	class NiNode;
	class NiPoint3;
	class NiTriShapeData;
	class TESFile;
	class TESForm;

	class TESObjectTREE :
		public TESBoundTreeObject,  // 00
		public TESModelTree,  // 30
		public TESIconTree,  // 48
		public BGSDestructibleObjectForm  // 54
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectTREE };
		static constexpr auto VTABLE{ VTABLE::TESObjectTREE };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kTREE_ID };

		// override (TESBoundTreeObject)
		virtual ~TESObjectTREE() = default;              // 04
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		// add
		virtual std::uint8_t GetIndexForSeed(std::uint32_t aiSeed);                                                                                                                                                                 // 61
		virtual std::uint32_t GetSeedAtIndex(std::uint8_t aiIndex);                                                                                                                                                                 // 62
		virtual OBJ_TREE* GetData();                                                                                                                                                                                                // 63
		virtual std::uint32_t GetRandomSeed() const;                                                                                                                                                                                // 64
		virtual void SetCurveScalar(float afCurveScalar);                                                                                                                                                                           // 65
		virtual float GetMinimumLeafAngle();                                                                                                                                                                                        // 66
		virtual void SetMinimumLeafAngle(float afAngle);                                                                                                                                                                            // 67
		virtual float GetMaximumLeafAngle();                                                                                                                                                                                        // 68
		virtual void SetMaximumLeafAngle(float afAngle);                                                                                                                                                                            // 69
		virtual float GetBranchDimming();                                                                                                                                                                                           // 6A
		virtual void SetBranchDimming(float afDimming);                                                                                                                                                                             // 6B
		virtual float GetLeafDimming();                                                                                                                                                                                             // 6C
		virtual void SetLeafDimming(float afDimming);                                                                                                                                                                               // 6D
		virtual float GetShadowRadius();                                                                                                                                                                                            // 6E
		virtual void SetShadowRadius(float aiRadius);                                                                                                                                                                               // 6F
		virtual float GetRockSpeed();                                                                                                                                                                                               // 70
		virtual void SetRockSpeed(float afRockSpeed);                                                                                                                                                                               // 71
		virtual float GetRustleSpeed();                                                                                                                                                                                             // 72
		virtual void SetRustleSpeed(float afRustleSpeed);                                                                                                                                                                           // 73
		virtual void Unk_74();                                                                                                                                                                                                      // 74
		virtual void CreateDistant3D(NiPoint3* apLocArray, NiPoint3* apRotArray, float* apColorArray, std::uint32_t aiArraySize, std::uint32_t aiCellChunk, std::uint32_t aiCellKey, NiNode* apInstancedNode, NiNode* apFullNode);  // 75

		TESObjectTREE* ctor()
		{
			using func_t = TESObjectTREE*(__thiscall*)(TESObjectTREE*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectTREE::ctor };
			return func(this);
		}

		void GetBillboardTextureFilename(char* apOutString)
		{
			using func_t = decltype(&TESObjectTREE::GetBillboardTextureFilename);
			static REL::Relocation<func_t> func{ Offsets::TESObjectTREE::GetBillboardTextureFilename };
			func(this, apOutString);
		}

		void CreateBillboardGeomData(bool abZUp, NiPointer<NiTriShapeData>& aspTriShapeData)
		{
			using func_t = decltype(&TESObjectTREE::CreateBillboardGeomData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectTREE::CreateBillboardGeomData };
			func(this, abZUp, aspTriShapeData);
		}

		NiNode* BuildDistant3D(bool abZUp)
		{
			using func_t = decltype(&TESObjectTREE::BuildDistant3D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectTREE::BuildDistant3D };
			return func(this, abZUp);
		}

	public:
		// members
		NiTPrimitiveArray<std::uint32_t> SeedArray;      // 5C
		OBJ_TREE                         Data;           // 6C
		NiPoint2                         BillboardSize;  // 8C
	};
	static_assert(sizeof(TESObjectTREE) == 0x94);
}
