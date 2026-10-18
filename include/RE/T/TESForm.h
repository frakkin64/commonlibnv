#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class FORM;
	class FORM_GROUP;
	class NiColor;
	class TESBoundObject;
	class TESFile;
	class TESObjectREFR;

	class TESForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESForm };
		static constexpr auto VTABLE{ VTABLE::TESForm };

		// As<T>() returns this form as T when the class of the form is T or derives from T (see RE/T/TESFormUtil.h), nullptr otherwise
		template <class T>
		[[nodiscard]] T* As() noexcept;

		template <class T>
		[[nodiscard]] const T* As() const noexcept;

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kNO_FORM };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual ~TESForm() = default;                                                                                                                           // 04
		virtual void ClearData();                                                                                                                               // 05
		virtual bool ProcessBeforeSave();                                                                                                                       // 06
		virtual void Unk_07();                                                                                                                                  // 07
		virtual bool Load(TESFile* apFile);                                                                                                                     // 08
		virtual bool LoadPartial(TESFile* apFile);                                                                                                              // 09
		virtual void Save();                                                                                                                                    // 0B (reversed overload group)
		virtual bool Save(TESFile* apFile);                                                                                                                     // 0A (reversed overload group)
		virtual bool LoadEdit(TESFile* apFile);                                                                                                                 // 0C
		virtual bool SaveEdit(TESFile* apFile);                                                                                                                 // 0D
		virtual bool SavesBefore(TESForm* apForm);                                                                                                              // 0F (reversed overload group)
		virtual bool SavesBefore(FORM* apGroupFORM);                                                                                                            // 0E (reversed overload group)
		virtual TESForm* CreateDuplicateForm(bool abCreateEditorID, NiTPointerMap<TESForm*, TESForm*>* apCopyMap);                                              // 10
		virtual void PostDuplicateProcess(NiTPointerMap<TESForm*, TESForm*>* apCopyMap);                                                                        // 11
		virtual void AddChange(std::int32_t aiChangeFlags);                                                                                                     // 12
		virtual void RemoveChange(std::int32_t aiChangeFlags);                                                                                                  // 13
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags);                                                                                               // 14
		virtual void SaveGame(std::uint32_t aiFlags);                                                                                                           // 16 (reversed overload group)
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer);                                                                                             // 15 (reversed overload group)
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags);                                                                             // 18 (reversed overload group)
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                                                                                             // 17 (reversed overload group)
		virtual void InitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags);                                                                             // 1A (reversed overload group)
		virtual void InitLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                                                                                         // 19 (reversed overload group)
		virtual void FinishInitLoadGame(std::uint32_t aiFlags, std::uint32_t aiOldFlags);                                                                       // 1B
		virtual void Revert(std::uint32_t aiFlags);                                                                                                             // 1D (reversed overload group)
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer);                                                                                               // 1C (reversed overload group)
		virtual void LoadQueuedFormData(std::uint16_t aiSize);                                                                                                  // 1E
		virtual bool FindInFileFast(TESFile* apFile);                                                                                                           // 1F
		virtual void CheckSaveGame(BGSSaveFormBuffer* apSaveGameBuffer);                                                                                        // 20
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer);                                                                                       // 21
		virtual void InitItem();                                                                                                                                // 22
		virtual ENUM_FORM_ID GetSavedFormType();                                                                                                                // 23
		virtual void GetFormDetailedString(BSStringT<char>& aString);                                                                                           // 24
		virtual bool GetQuestObject() const;                                                                                                                    // 25
		virtual bool GetHasSpokenFlag() const;                                                                                                                  // 26
		virtual bool GetHavokDeath();                                                                                                                           // 27
		virtual bool GetRandomAnim() const;                                                                                                                     // 28
		virtual bool GetNeedtoChangeProcess();                                                                                                                  // 29
		virtual bool GetDangerous() const;                                                                                                                      // 2A
		virtual bool GetHasPLSpecTex() const;                                                                                                                   // 2B
		virtual bool GetObstacle() const;                                                                                                                       // 2C
		virtual bool GetContinuousBroadcast() const;                                                                                                            // 2D
		virtual bool GetOnLocalMap();                                                                                                                           // 2E
		virtual void SetOnLocalMap(bool abVal);                                                                                                                 // 2F
		virtual NiColor* GetEmittanceColor();                                                                                                                   // 30
		virtual void SetDelete(bool abDeleted);                                                                                                                 // 31
		virtual void SetAltered(bool abAltered);                                                                                                                // 32
		virtual void SetQuestObject(bool abQuest);                                                                                                              // 33
		virtual void SetHasSpokenFlag(bool abSpoke);                                                                                                            // 34
		virtual void SetHavokDeath(bool abDeath);                                                                                                               // 35
		virtual void SetNeedToChangeProcess(bool abChange);                                                                                                     // 36
		virtual void LoadObjectBound(TESFile* apFile);                                                                                                          // 37
		virtual bool IsBoundObject();                                                                                                                           // 38
		virtual void Unk_39();                                                                                                                                  // 39
		virtual bool IsObject();                                                                                                                                // 3A
		virtual bool IsMagicItem();                                                                                                                             // 3B
		virtual bool IsReference();                                                                                                                             // 3C
		virtual bool IsArmorAddon();                                                                                                                            // 3D
		virtual bool IsActorBase();                                                                                                                             // 3E
		virtual bool IsMobileObject();                                                                                                                          // 3F
		virtual bool IsActor();                                                                                                                                 // 40
		virtual std::uint32_t GetRefCount();                                                                                                                    // 41
		virtual void Copy(TESForm* apCopy);                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy);                                                                                                                  // 43
		virtual bool BelongsInGroup(FORM* apGroupFORM, bool abAllowParentGroups, bool abCurrentOnly);                                                           // 44
		virtual void CreateGroupData(FORM* apOutGroupFORM, FORM_GROUP* apParentGroup);                                                                          // 45
		virtual char const* GetFormEditorID();                                                                                                                  // 46
		virtual bool IsParentFormTree();                                                                                                                        // 47
		virtual bool IsFormTypeChild(std::uint8_t aeType);                                                                                                      // 48
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount);  // 49
		virtual void SetFormID(std::uint32_t aiID, bool abUpdateFile);                                                                                          // 4A
		virtual char* GetObjectTypeName();                                                                                                                      // 4B
		virtual void Unk_4C();                                                                                                                                  // 4C
		virtual void Unk_4D();                                                                                                                                  // 4D

		ENUM_FORM_ID GetFormType() const
		{
			using func_t = decltype(&TESForm::GetFormType);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormType };
			return func(this);
		}

		bool GetInitialized() const
		{
			using func_t = decltype(&TESForm::GetInitialized);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetInitialized };
			return func(this);
		}

		static bool QEndianSwapOnSave()
		{
			using func_t = decltype(&TESForm::QEndianSwapOnSave);
			static REL::Relocation<func_t> func{ Offsets::TESForm::QEndianSwapOnSave };
			return func();
		}

		bool GetTemporary() const
		{
			using func_t = decltype(&TESForm::GetTemporary);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetTemporary };
			return func(this);
		}

		bool GetDisabledOrDeleted() const
		{
			using func_t = decltype(&TESForm::GetDisabledOrDeleted);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetDisabledOrDeleted };
			return func(this);
		}

		bool GetDelete() const
		{
			using func_t = decltype(&TESForm::GetDelete);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetDelete };
			return func(this);
		}

		bool GetDisabled() const
		{
			using func_t = decltype(&TESForm::GetDisabled);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetDisabled };
			return func(this);
		}

		char* GetFormTypeString() const
		{
			using func_t = char* (TESForm::*)() const;
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormTypeString };
			return func(this);
		}

		bool GetFireOff() const
		{
			using func_t = decltype(&TESForm::GetFireOff);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFireOff };
			return func(this);
		}

		bool GetDestructible() const
		{
			using func_t = decltype(&TESForm::GetDestructible);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetDestructible };
			return func(this);
		}

		bool GetAltered() const
		{
			using func_t = decltype(&TESForm::GetAltered);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetAltered };
			return func(this);
		}

		static char const* GetFormTypeString(std::uint8_t aiFormType)
		{
			using func_t = char const*(__cdecl*)(std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormTypeString_1 };
			return func(aiFormType);
		}

		void SetStillLoading(bool abVal)
		{
			using func_t = decltype(&TESForm::SetStillLoading);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetStillLoading };
			func(this, abVal);
		}

		void* GetFormBuffer()
		{
			using func_t = decltype(&TESForm::GetFormBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormBuffer };
			return func(this);
		}

		std::uint32_t GetFormBufferSize()
		{
			using func_t = decltype(&TESForm::GetFormBufferSize);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormBufferSize };
			return func(this);
		}

		std::uint32_t GetFormEditorIDLength()
		{
			using func_t = decltype(&TESForm::GetFormEditorIDLength);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormEditorIDLength };
			return func(this);
		}

		bool GetDestroyed() const
		{
			using func_t = decltype(&TESForm::GetDestroyed);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetDestroyed };
			return func(this);
		}

		TESForm* ctor()
		{
			using func_t = TESForm*(__thiscall*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESForm::ctor };
			return func(this);
		}

		static TESForm* GetFormByNumericID(std::uint32_t aiSearchID)
		{
			using func_t = decltype(&TESForm::GetFormByNumericID);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormByNumericID };
			return func(aiSearchID);
		}

		static TESForm* GetFormByEditorID(char const* apSearchID)
		{
			using func_t = decltype(&TESForm::GetFormByEditorID);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormByEditorID };
			return func(apSearchID);
		}

		void RemoveFromDataStructures()
		{
			using func_t = decltype(&TESForm::RemoveFromDataStructures);
			static REL::Relocation<func_t> func{ Offsets::TESForm::RemoveFromDataStructures };
			func(this);
		}

		static void CompressSaveBuffer()
		{
			using func_t = decltype(&TESForm::CompressSaveBuffer);
			static REL::Relocation<func_t> func{ Offsets::TESForm::CompressSaveBuffer };
			func();
		}

		void SetTemporary()
		{
			using func_t = decltype(&TESForm::SetTemporary);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetTemporary };
			func(this);
		}

		void SetEmpty(bool abEmpty)
		{
			using func_t = decltype(&TESForm::SetEmpty);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetEmpty };
			func(this, abEmpty);
		}

		void SetDestroyed(bool abVal)
		{
			using func_t = decltype(&TESForm::SetDestroyed);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetDestroyed };
			func(this, abVal);
		}

		void SetDestructible(bool abVal)
		{
			using func_t = decltype(&TESForm::SetDestructible);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetDestructible };
			func(this, abVal);
		}

		void SetFireOff(bool abVal)
		{
			using func_t = decltype(&TESForm::SetFireOff);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetFireOff };
			func(this, abVal);
		}

		void SetInitialized(bool abInit)
		{
			using func_t = decltype(&TESForm::SetInitialized);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetInitialized };
			func(this, abInit);
		}

		void SetDisabled(bool abDisabled)
		{
			using func_t = decltype(&TESForm::SetDisabled);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetDisabled };
			func(this, abDisabled);
		}

		static bool IsDefaultForm(std::uint32_t aiID)
		{
			using func_t = bool(__cdecl*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::IsDefaultForm };
			return func(aiID);
		}

		void ForceChange(std::int32_t aiChangeFlags)
		{
			using func_t = decltype(&TESForm::ForceChange);
			static REL::Relocation<func_t> func{ Offsets::TESForm::ForceChange };
			func(this, aiChangeFlags);
		}

		void SaveGameDataOLD(void* apData, std::int32_t aiSize)
		{
			using func_t = decltype(&TESForm::SaveGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SaveGameDataOLD };
			func(this, apData, aiSize);
		}

		void LoadGameDataOLD(void* apData, std::int32_t aiSize)
		{
			using func_t = decltype(&TESForm::LoadGameDataOLD);
			static REL::Relocation<func_t> func{ Offsets::TESForm::LoadGameDataOLD };
			func(this, apData, aiSize);
		}

		void SaveNumericID(std::uint32_t* apNumericID, std::int32_t aiSize)
		{
			using func_t = decltype(&TESForm::SaveNumericID);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SaveNumericID };
			func(this, apNumericID, aiSize);
		}

		void LoadNumericID(std::uint32_t* apNumericID, std::int32_t aiSize)
		{
			using func_t = decltype(&TESForm::LoadNumericID);
			static REL::Relocation<func_t> func{ Offsets::TESForm::LoadNumericID };
			func(this, apNumericID, aiSize);
		}

		bool IsDefaultForm() const
		{
			using func_t = bool (TESForm::*)() const;
			static REL::Relocation<func_t> func{ Offsets::TESForm::IsDefaultForm_1 };
			return func(this);
		}

		TESFile* GetFile(std::int32_t aiIndex)
		{
			using func_t = decltype(&TESForm::GetFile);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFile };
			return func(this, aiIndex);
		}

		void LoadForm(TESFile* apFile)
		{
			using func_t = decltype(&TESForm::LoadForm);
			static REL::Relocation<func_t> func{ Offsets::TESForm::LoadForm };
			func(this, apFile);
		}

		void CopyAllComponents(TESForm* apCopy)
		{
			using func_t = decltype(&TESForm::CopyAllComponents);
			static REL::Relocation<func_t> func{ Offsets::TESForm::CopyAllComponents };
			func(this, apCopy);
		}

		bool CompareAllComponents(TESForm* apCompare)
		{
			using func_t = decltype(&TESForm::CompareAllComponents);
			static REL::Relocation<func_t> func{ Offsets::TESForm::CompareAllComponents };
			return func(this, apCompare);
		}

		void StartForm()
		{
			using func_t = decltype(&TESForm::StartForm);
			static REL::Relocation<func_t> func{ Offsets::TESForm::StartForm };
			func(this);
		}

		void CloseForm()
		{
			using func_t = decltype(&TESForm::CloseForm);
			static REL::Relocation<func_t> func{ Offsets::TESForm::CloseForm };
			func(this);
		}

		static void AddChunk(CHUNK_ID aeChunkID)
		{
			using func_t = void(__cdecl*)(CHUNK_ID);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunk };
			func(aeChunkID);
		}

		static void AddChunkArray(CHUNK_ID aeChunkID, char const* apData, std::uint32_t aiSize)
		{
			using func_t = void(__cdecl*)(CHUNK_ID, char const*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunkArray };
			func(aeChunkID, apData, aiSize);
		}

		static void AddChunkArray(CHUNK_ID aeChunkID, std::uint32_t const* apData, std::uint32_t aiCount)
		{
			using func_t = void(__cdecl*)(CHUNK_ID, std::uint32_t const*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunkArray_1 };
			func(aeChunkID, apData, aiCount);
		}

		static void AddChunk(CHUNK_ID aeChunkID, std::uint8_t aiData)
		{
			using func_t = void(__cdecl*)(CHUNK_ID, std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunk_1 };
			func(aeChunkID, aiData);
		}

		static void AddChunk(CHUNK_ID aeChunkID, std::uint32_t aiData)
		{
			using func_t = void(__cdecl*)(CHUNK_ID, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunk_2 };
			func(aeChunkID, aiData);
		}

		static void AddChunk(CHUNK_ID aeChunkID, std::uint16_t aiData)
		{
			using func_t = void(__cdecl*)(CHUNK_ID, std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunk_3 };
			func(aeChunkID, aiData);
		}

		static void __AddChunkData(CHUNK_ID aeChunkID, void const* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESForm::__AddChunkData);
			static REL::Relocation<func_t> func{ Offsets::TESForm::__AddChunkData };
			func(aeChunkID, apData, aiSize);
		}

		std::uint32_t GetFormIDAsSaved()
		{
			using func_t = decltype(&TESForm::GetFormIDAsSaved);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormIDAsSaved };
			return func(this);
		}

		bool FormIDMatchesWithoutIndex(std::uint32_t aiID) const
		{
			using func_t = decltype(&TESForm::FormIDMatchesWithoutIndex);
			static REL::Relocation<func_t> func{ Offsets::TESForm::FormIDMatchesWithoutIndex };
			return func(this, aiID);
		}

		static void AddCompileIndex(std::uint32_t& aiID, TESFile* apFile)
		{
			using func_t = decltype(&TESForm::AddCompileIndex);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddCompileIndex };
			func(aiID, apFile);
		}

		void SaveData()
		{
			using func_t = decltype(&TESForm::SaveData);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SaveData };
			func(this);
		}

		void __SaveData(void* apData, std::uint32_t aiSize)
		{
			using func_t = decltype(&TESForm::__SaveData);
			static REL::Relocation<func_t> func{ Offsets::TESForm::__SaveData };
			func(this, apData, aiSize);
		}

		void LoadData(TESFile* apFile, void* apData, std::uint16_t asSize)
		{
			using func_t = decltype(&TESForm::LoadData);
			static REL::Relocation<func_t> func{ Offsets::TESForm::LoadData };
			func(this, apFile, apData, asSize);
		}

		std::uint32_t GetDataSizeAdded()
		{
			using func_t = decltype(&TESForm::GetDataSizeAdded);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetDataSizeAdded };
			return func(this);
		}

		static ENUM_FORM_ID GetFormTypeFromFormString(std::uint32_t aiFormString)
		{
			using func_t = decltype(&TESForm::GetFormTypeFromFormString);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormTypeFromFormString };
			return func(aiFormString);
		}

		bool GetNoCollision() const
		{
			using func_t = decltype(&TESForm::GetNoCollision);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetNoCollision };
			return func(this);
		}

		std::uint32_t GetFileCount()
		{
			using func_t = decltype(&TESForm::GetFileCount);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFileCount };
			return func(this);
		}

		void SetDisableFade(bool abVal)
		{
			using func_t = decltype(&TESForm::SetDisableFade);
			static REL::Relocation<func_t> func{ Offsets::TESForm::SetDisableFade };
			func(this, abVal);
		}

		bool IsStillLoading() const
		{
			using func_t = decltype(&TESForm::IsStillLoading);
			static REL::Relocation<func_t> func{ Offsets::TESForm::IsStillLoading };
			return func(this);
		}

		std::uint32_t GetFormID() const
		{
			using func_t = decltype(&TESForm::GetFormID);
			static REL::Relocation<func_t> func{ Offsets::TESForm::GetFormID };
			return func(this);
		}

	private:
		static void AddChunkArray32(CHUNK_ID aeChunkID, void const* apData, std::uint32_t aiCount)
		{
			using func_t = decltype(&TESForm::AddChunkArray32);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunkArray32 };
			func(aeChunkID, apData, aiCount);
		}

		static void AddChunkArray16(CHUNK_ID aeChunkID, void const* apData, std::uint32_t aiCount)
		{
			using func_t = decltype(&TESForm::AddChunkArray16);
			static REL::Relocation<func_t> func{ Offsets::TESForm::AddChunkArray16 };
			func(aeChunkID, apData, aiCount);
		}

	public:
		// members
		// not placed: cFormEditorID(absent), iVersionControl(absent), cVCVersion(absent)
		std::uint8_t           cFormType;     // 04
		std::uint8_t           pad05[0x3];    // 05
		std::uint32_t          iFormFlags;    // 08
		std::uint32_t          iFormID;       // 0C
		BSSimpleList<TESFile*> pSourceFiles;  // 10
	};
	static_assert(sizeof(TESForm) == 0x18);
}
