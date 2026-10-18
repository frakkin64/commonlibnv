#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/F/FILE_HEADER.h"
#include "RE/F/FORM.h"
#include "RE/N/NiFile_OpenMode.h"
#include "RE/N/NiTPointerMap.h"
#include "RE/T/TES_RETURN_CODE.h"

namespace RE
{
	class BSFile;
	class FORM_GROUP;
	class TESBitArrayFile;
	class TESForm;
	class TESObjectCELL;

	class TESFile
	{
	public:
		std::uint32_t GetChunkSize()
		{
			using func_t = decltype(&TESFile::GetChunkSize);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetChunkSize };
			return func(this);
		}

		FORM* GetFormData()
		{
			using func_t = decltype(&TESFile::GetFormData);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetFormData };
			return func(this);
		}

		BSSimpleList<char*>* GetMasterList()
		{
			using func_t = decltype(&TESFile::GetMasterList);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetMasterList };
			return func(this);
		}

		std::uint32_t GetOffset()
		{
			using func_t = decltype(&TESFile::GetOffset);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetOffset };
			return func(this);
		}

		float GetFileVersion()
		{
			using func_t = decltype(&TESFile::GetFileVersion);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetFileVersion };
			return func(this);
		}

		TESFile* ctor(char const* ppath, char const* pfilename, NiFile_OpenMode accessmode)
		{
			using func_t = TESFile*(__thiscall*)(TESFile*, char const*, char const*, NiFile_OpenMode);
			static REL::Relocation<func_t> func{ Offsets::TESFile::ctor };
			return func(this, ppath, pfilename, accessmode);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESFile*);
			static REL::Relocation<func_t> func{ Offsets::TESFile::dtor };
			func(this);
		}

		bool OpenTES(NiFile_OpenMode accessmode, bool lock)
		{
			using func_t = bool (TESFile::*)(NiFile_OpenMode, bool);
			static REL::Relocation<func_t> func{ Offsets::TESFile::OpenTES };
			return func(this, accessmode, lock);
		}

		bool OpenTES(char const* ppath, char const* pfilename, NiFile_OpenMode accessmode, bool lock)
		{
			using func_t = bool (TESFile::*)(char const*, char const*, NiFile_OpenMode, bool);
			static REL::Relocation<func_t> func{ Offsets::TESFile::OpenTES_1 };
			return func(this, ppath, pfilename, accessmode, lock);
		}

		bool CloseTES()
		{
			using func_t = decltype(&TESFile::CloseTES);
			static REL::Relocation<func_t> func{ Offsets::TESFile::CloseTES };
			return func(this);
		}

		TES_RETURN_CODE LoadTESInfo()
		{
			using func_t = decltype(&TESFile::LoadTESInfo);
			static REL::Relocation<func_t> func{ Offsets::TESFile::LoadTESInfo };
			return func(this);
		}

		std::uint32_t GetFORMSize()
		{
			using func_t = decltype(&TESFile::GetFORMSize);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetFORMSize };
			return func(this);
		}

		bool GenIndexTable(BSSimpleList<TESFile*>* pFileList, bool showerror)
		{
			using func_t = decltype(&TESFile::GenIndexTable);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GenIndexTable };
			return func(this, pFileList, showerror);
		}

		TESFile* GetIndexFile(std::uint32_t index)
		{
			using func_t = decltype(&TESFile::GetIndexFile);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetIndexFile };
			return func(this, index);
		}

		bool GetMaster()
		{
			using func_t = decltype(&TESFile::GetMaster);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetMaster };
			return func(this);
		}

		void SetChecked(bool checked)
		{
			using func_t = decltype(&TESFile::SetChecked);
			static REL::Relocation<func_t> func{ Offsets::TESFile::SetChecked };
			func(this, checked);
		}

		bool GetActive()
		{
			using func_t = decltype(&TESFile::GetActive);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetActive };
			return func(this);
		}

		void TESRewind(bool getform)
		{
			using func_t = decltype(&TESFile::TESRewind);
			static REL::Relocation<func_t> func{ Offsets::TESFile::TESRewind };
			func(this, getform);
		}

		void TESRewindChunk()
		{
			using func_t = decltype(&TESFile::TESRewindChunk);
			static REL::Relocation<func_t> func{ Offsets::TESFile::TESRewindChunk };
			func(this);
		}

		void ClearCurrentChunk()
		{
			using func_t = decltype(&TESFile::ClearCurrentChunk);
			static REL::Relocation<func_t> func{ Offsets::TESFile::ClearCurrentChunk };
			func(this);
		}

		bool NextForm(bool abSkipIgnored)
		{
			using func_t = decltype(&TESFile::NextForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::NextForm };
			return func(this, abSkipIgnored);
		}

		bool SetOffset(std::uint32_t newoffset)
		{
			using func_t = decltype(&TESFile::SetOffset);
			static REL::Relocation<func_t> func{ Offsets::TESFile::SetOffset };
			return func(this, newoffset);
		}

		bool SetOffsetChunk(std::uint32_t newoffset)
		{
			using func_t = decltype(&TESFile::SetOffsetChunk);
			static REL::Relocation<func_t> func{ Offsets::TESFile::SetOffsetChunk };
			return func(this, newoffset);
		}

		void GetTESFormNoRet()
		{
			using func_t = decltype(&TESFile::GetTESFormNoRet);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetTESFormNoRet };
			func(this);
		}

		ENUM_FORM_ID GetTESForm()
		{
			using func_t = decltype(&TESFile::GetTESForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetTESForm };
			return func(this);
		}

		CHUNK_ID GetTESChunk()
		{
			using func_t = decltype(&TESFile::GetTESChunk);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetTESChunk };
			return func(this);
		}

		bool NextChunk()
		{
			using func_t = decltype(&TESFile::NextChunk);
			static REL::Relocation<func_t> func{ Offsets::TESFile::NextChunk };
			return func(this);
		}

		bool GetChunkData(float& apData)
		{
			using func_t = decltype(&TESFile::GetChunkData);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetChunkData };
			return func(this, apData);
		}

		TES_RETURN_CODE StartForm(TESForm* apForm)
		{
			using func_t = decltype(&TESFile::StartForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::StartForm };
			return func(this, apForm);
		}

		TES_RETURN_CODE AddTESForm(TESForm* apForm)
		{
			using func_t = decltype(&TESFile::AddTESForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::AddTESForm };
			return func(this, apForm);
		}

		std::uint8_t GetCompileIndex()
		{
			using func_t = decltype(&TESFile::GetCompileIndex);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetCompileIndex };
			return func(this);
		}

		FORM_GROUP* GetCurrentGroup()
		{
			using func_t = decltype(&TESFile::GetCurrentGroup);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetCurrentGroup };
			return func(this);
		}

		void StartGroup(FORM* apNewGroupData)
		{
			using func_t = decltype(&TESFile::StartGroup);
			static REL::Relocation<func_t> func{ Offsets::TESFile::StartGroup };
			func(this, apNewGroupData);
		}

		void EndGroup()
		{
			using func_t = decltype(&TESFile::EndGroup);
			static REL::Relocation<func_t> func{ Offsets::TESFile::EndGroup };
			func(this);
		}

		void CloseGroup()
		{
			using func_t = decltype(&TESFile::CloseGroup);
			static REL::Relocation<func_t> func{ Offsets::TESFile::CloseGroup };
			func(this);
		}

		bool FindForm(TESForm* apForm)
		{
			using func_t = decltype(&TESFile::FindForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::FindForm };
			return func(this, apForm);
		}

		bool NextGroup()
		{
			using func_t = decltype(&TESFile::NextGroup);
			static REL::Relocation<func_t> func{ Offsets::TESFile::NextGroup };
			return func(this);
		}

		void StartAndEndGroupsForForm(TESForm* apForm)
		{
			using func_t = decltype(&TESFile::StartAndEndGroupsForForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::StartAndEndGroupsForForm };
			func(this, apForm);
		}

		void CloseAllOpenGroups()
		{
			using func_t = decltype(&TESFile::CloseAllOpenGroups);
			static REL::Relocation<func_t> func{ Offsets::TESFile::CloseAllOpenGroups };
			func(this);
		}

		bool IsFileVersionTooHigh()
		{
			using func_t = decltype(&TESFile::IsFileVersionTooHigh);
			static REL::Relocation<func_t> func{ Offsets::TESFile::IsFileVersionTooHigh };
			return func(this);
		}

		TESFile* GetThreadSafeFile()
		{
			using func_t = decltype(&TESFile::GetThreadSafeFile);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetThreadSafeFile };
			return func(this);
		}

		TESFile* GetThreadSafeParent()
		{
			using func_t = decltype(&TESFile::GetThreadSafeParent);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetThreadSafeParent };
			return func(this);
		}

	protected:
		BSSimpleList<void*>* GetMasterDataList()
		{
			using func_t = decltype(&TESFile::GetMasterDataList);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetMasterDataList };
			return func(this);
		}

		void ClearMasterLists()
		{
			using func_t = decltype(&TESFile::ClearMasterLists);
			static REL::Relocation<func_t> func{ Offsets::TESFile::ClearMasterLists };
			func(this);
		}

		bool IsCurrentFormCompressed()
		{
			using func_t = decltype(&TESFile::IsCurrentFormCompressed);
			static REL::Relocation<func_t> func{ Offsets::TESFile::IsCurrentFormCompressed };
			return func(this);
		}

		bool ReadFormHeader()
		{
			using func_t = decltype(&TESFile::ReadFormHeader);
			static REL::Relocation<func_t> func{ Offsets::TESFile::ReadFormHeader };
			return func(this);
		}

		bool ReadChunkHeader()
		{
			using func_t = decltype(&TESFile::ReadChunkHeader);
			static REL::Relocation<func_t> func{ Offsets::TESFile::ReadChunkHeader };
			return func(this);
		}

		void FreeDecompressedBuffer()
		{
			using func_t = decltype(&TESFile::FreeDecompressedBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESFile::FreeDecompressedBuffer };
			func(this);
		}

		TESFile* GetThreadSafeFileForThread(std::uint32_t aiThreadID)
		{
			using func_t = decltype(&TESFile::GetThreadSafeFileForThread);
			static REL::Relocation<func_t> func{ Offsets::TESFile::GetThreadSafeFileForThread };
			return func(this, aiThreadID);
		}

		void DecompressCurrentForm()
		{
			using func_t = decltype(&TESFile::DecompressCurrentForm);
			static REL::Relocation<func_t> func{ Offsets::TESFile::DecompressCurrentForm };
			func(this);
		}

	private:
		void InitEndian()
		{
			using func_t = decltype(&TESFile::InitEndian);
			static REL::Relocation<func_t> func{ Offsets::TESFile::InitEndian };
			func(this);
		}

		TES_RETURN_CODE EasyWrite(void* ptr, std::uint32_t count)
		{
			using func_t = decltype(&TESFile::EasyWrite);
			static REL::Relocation<func_t> func{ Offsets::TESFile::EasyWrite };
			return func(this, ptr, count);
		}

	public:
		// members
		TES_RETURN_CODE                         m_lastError;                  // 00
		TESFile*                                pThreadSafeParent;            // 04
		NiTPointerMap<std::uint32_t, TESFile*>* pThreadSafeFileMap;           // 08
		BSFile*                                 m_pLockedFile;                // 0C
		BSFile*                                 m_pFile;                      // 10
		TESBitArrayFile*                        pFormUserDataBitArray;        // 14
		TESBitArrayFile*                        pFormVersionBitArray;         // 18
		TESBitArrayFile*                        pFormIDBitArray;              // 1C
		char                                    m_Filename[260];              // 20
		char                                    m_Path[260];                  // 124
		char*                                   m_pBuffer;                    // 228
		std::uint32_t                           m_uiBufferAllocSize;          // 22C
		std::uint32_t                           m_firstCellOffset;            // 230
		std::uint32_t                           m_currCellOffset;             // 234
		TESObjectCELL*                          m_pCurrCell;                  // 238
		std::uint32_t                           m_currRefOffset;              // 23C
		FORM                                    m_currentform;                // 240
		CHUNK_ID                                m_currentchunkID;             // 258
		std::uint32_t                           m_actualChunkSize;            // 25C
		std::uint32_t                           m_filesize;                   // 260
		std::uint32_t                           m_fileoffset;                 // 264
		std::uint32_t                           m_formoffset;                 // 268
		std::uint32_t                           m_chunkoffset;                // 26C
		FORM                                    m_saveform;                   // 270
		std::uint32_t                           m_saveformoffset;             // 288
		std::uint32_t                           m_savechunkoffset;            // 28C
		BSSimpleList<FORM_GROUP*>               m_grouplist;                  // 290
		bool                                    bHasGroups;                   // 298
		bool                                    bMustEndianConvert;           // 299
		bool                                    bCloseFileOverride;           // 29A
		std::uint8_t                            pad29B;                       // 29B
		_WIN32_FIND_DATAA                       m_FileInfo;                   // 29C
		FILE_HEADER                             fileHeaderInfo;               // 3DC
		std::uint32_t                           m_Flags;                      // 3E8
		BSSimpleList<char*>                     listMasters;                  // 3EC
		BSSimpleList<void*>                     listMastersData;              // 3F4
		std::uint32_t                           iMasterCount;                 // 3FC
		TESFile**                               m_pMasterPtrs;                // 400
		_FILETIME                               DeletedFormTime;              // 404
		std::uint8_t                            cCompileIndex;                // 40C
		std::uint8_t                            pad40D[0x3];                  // 40D
		BSStringT<char>                         cCreatedBy;                   // 410
		BSStringT<char>                         cSummary;                     // 418
		char*                                   pDecompressedFormBuffer;      // 420
		std::uint32_t                           iDecompressedFormBufferSize;  // 424
		bool                                    bCached;                      // 428
		bool                                    bCaching;                     // 429
		bool                                    bDLC;                         // 42A
		std::uint8_t                            pad42B;                       // 42B
	};
	static_assert(sizeof(TESFile) == 0x42C);
}
