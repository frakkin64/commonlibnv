#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFaceGenModelMap_Entry.h"
#include "RE/B/BSTCaseInsensitiveStringMap.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSFaceGenModel;
	class BSFile;

	class __declspec(novtable) BSFaceGenModelMap
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenModelMap };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenModelMap };

		using Entry = BSFaceGenModelMap_Entry;

		enum class DataType : std::int32_t
		{
			kDATA_TYPE_EGM = 0x0,
			kDATA_TYPE_EGT = 0x1,
			kNUM_DATA_TYPES = 0x2,
		};

		// add
		virtual ~BSFaceGenModelMap() = default;  // 00

		BSFaceGenModelMap* ctor()
		{
			using func_t = BSFaceGenModelMap*(__thiscall*)(BSFaceGenModelMap*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::ctor };
			return func(this);
		}

		void OutputModelMapContents(BSFile* apFile)
		{
			using func_t = decltype(&BSFaceGenModelMap::OutputModelMapContents);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::OutputModelMapContents };
			func(this, apFile);
		}

		void SetAt(char const* apcKey, BSFaceGenModel* apModel)
		{
			using func_t = decltype(&BSFaceGenModelMap::SetAt);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::SetAt };
			func(this, apcKey, apModel);
		}

		bool GetAt(char const* apcKey, NiPointer<BSFaceGenModel>& aspModel)
		{
			using func_t = decltype(&BSFaceGenModelMap::GetAt);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::GetAt };
			return func(this, apcKey, aspModel);
		}

		bool LoadEGMData(BSFaceGenModel* apModel)
		{
			using func_t = decltype(&BSFaceGenModelMap::LoadEGMData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::LoadEGMData };
			return func(this, apModel);
		}

		bool LoadEGTData(BSFaceGenModel* apModel)
		{
			using func_t = decltype(&BSFaceGenModelMap::LoadEGTData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::LoadEGTData };
			return func(this, apModel);
		}

		bool KillModelTextureData(char const* apKey)
		{
			using func_t = decltype(&BSFaceGenModelMap::KillModelTextureData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::KillModelTextureData };
			return func(this, apKey);
		}

		void UnloadAllEGMAndEGTData()
		{
			using func_t = decltype(&BSFaceGenModelMap::UnloadAllEGMAndEGTData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::UnloadAllEGMAndEGTData };
			func(this);
		}

		void ClearEGTData()
		{
			using func_t = decltype(&BSFaceGenModelMap::ClearEGTData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::ClearEGTData };
			func(this);
		}

	protected:
		std::uint32_t GetTotalDataSize(BSFaceGenModelMap::DataType aDataType)
		{
			using func_t = decltype(&BSFaceGenModelMap::GetTotalDataSize);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::GetTotalDataSize };
			return func(this, aDataType);
		}

		void VerifyData(BSFaceGenModelMap_Entry* aspNewEntry)
		{
			using func_t = decltype(&BSFaceGenModelMap::VerifyData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::VerifyData };
			func(this, aspNewEntry);
		}

		void FreeLRUData(BSFaceGenModelMap::DataType aDataType, BSFaceGenModelMap_Entry* aspNewEntry)
		{
			using func_t = decltype(&BSFaceGenModelMap::FreeLRUData);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenModelMap::FreeLRUData };
			func(this, aDataType, aspNewEntry);
		}

	public:
		// members
		BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap_Entry>> Map;               // 04
		std::uint32_t                                                   uiMaxDataSize[2];  // 18
		bool                                                            bHasFaceGenData;   // 20
		std::uint8_t                                                    pad21[0x3];        // 21
	};
	static_assert(sizeof(BSFaceGenModelMap) == 0x24);
}
