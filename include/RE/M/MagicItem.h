#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/C/CHUNK_ID.h"
#include "RE/E/EffectItemList.h"
#include "RE/M/MagicItem_CannotCastReason.h"
#include "RE/M/MagicSystem_Range.h"
#include "RE/M/MagicSystem_SpellType.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class EffectSetting;
	class TESFile;
	class TESForm;

	class MagicItem :
		public TESFullName,  // 00
		public EffectItemList  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicItem };
		static constexpr auto VTABLE{ VTABLE::MagicItem };

		using CannotCastReason = MagicItem_CannotCastReason;

		// add
		virtual bool IsAutoCalc();                                             // 04
		virtual void SetAutoCalc(bool a_arg1);                                 // 05
		virtual MagicSystem_SpellType GetSpellType();                          // 06
		virtual bool IgnoreResistance();                                       // 07
		virtual bool GetNoAbsorbOrReflect();                                   // 08
		virtual CHUNK_ID GetChunkID();                                         // 09
		virtual void* GetData();                                               // 0A
		virtual std::uint32_t GetDataSize();                                   // 0B
		virtual bool CompareMagicItemData(MagicItem* a_arg1);                  // 0C
		virtual void CopyMagicItemData(MagicItem* a_arg1);                     // 0D
		virtual void SaveMagicItemComponents();                                // 0E
		virtual void SaveMagicItemData();                                      // 0F
		virtual void LoadMagicItemChunk(TESFile* apFile, CHUNK_ID apChunkID);  // 10

		MagicItem* ctor()
		{
			using func_t = MagicItem*(__thiscall*)(MagicItem*);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::ctor };
			return func(this);
		}

		std::uint32_t GetMagicItemFormID()
		{
			using func_t = decltype(&MagicItem::GetMagicItemFormID);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::GetMagicItemFormID };
			return func(this);
		}

		static MagicItem* GetMagicItemByNumericID(std::uint32_t aiFormID)
		{
			using func_t = decltype(&MagicItem::GetMagicItemByNumericID);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::GetMagicItemByNumericID };
			return func(aiFormID);
		}

		EffectSetting* GetAVEffect(MagicSystem_Range aeRange)
		{
			using func_t = decltype(&MagicItem::GetAVEffect);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::GetAVEffect };
			return func(this, aeRange);
		}

		void Preload(bool abNow)
		{
			using func_t = decltype(&MagicItem::Preload);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::Preload };
			func(this, abNow);
		}

		void FinishedLoading()
		{
			using func_t = decltype(&MagicItem::FinishedLoading);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::FinishedLoading };
			func(this);
		}

		bool IsLoaded()
		{
			using func_t = decltype(&MagicItem::IsLoaded);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::IsLoaded };
			return func(this);
		}

		bool IsLoadingOrLoaded()
		{
			using func_t = decltype(&MagicItem::IsLoadingOrLoaded);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::IsLoadingOrLoaded };
			return func(this);
		}

		bool IsLoading()
		{
			using func_t = decltype(&MagicItem::IsLoading);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::IsLoading };
			return func(this);
		}

		void Unload(bool abRelease)
		{
			using func_t = decltype(&MagicItem::Unload);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::Unload };
			func(this, abRelease);
		}

		BSStringT<char> GetCannotCastString(MagicItem_CannotCastReason result)
		{
			using func_t = decltype(&MagicItem::GetCannotCastString);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::GetCannotCastString };
			return func(this, result);
		}

	protected:
		void MagicItemInitItem(TESForm* apForm)
		{
			using func_t = decltype(&MagicItem::MagicItemInitItem);
			static REL::Relocation<func_t> func{ Offsets::MagicItem::MagicItemInitItem };
			func(this, apForm);
		}
	};
}
