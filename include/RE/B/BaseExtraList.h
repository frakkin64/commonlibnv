#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSExtraData;

	class __declspec(novtable) BaseExtraList
	{
	public:
		static constexpr auto RTTI{ RTTI::BaseExtraList };
		static constexpr auto VTABLE{ VTABLE::BaseExtraList };

		// add
		virtual ~BaseExtraList() = default;  // 00

		void RemoveAll(bool abDelete)
		{
			using func_t = decltype(&BaseExtraList::RemoveAll);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::RemoveAll };
			func(this, abDelete);
		}

		void RemoveAllDefault(bool abDelete)
		{
			using func_t = decltype(&BaseExtraList::RemoveAllDefault);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::RemoveAllDefault };
			func(this, abDelete);
		}

		std::uint32_t ItemsInList()
		{
			using func_t = decltype(&BaseExtraList::ItemsInList);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::ItemsInList };
			return func(this);
		}

		BSExtraData* AddExtra(BSExtraData* apExtra)
		{
			using func_t = decltype(&BaseExtraList::AddExtra);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::AddExtra };
			return func(this, apExtra);
		}

		void RemoveExtra(BSExtraData* apExtra, bool abDelete)
		{
			using func_t = void (BaseExtraList::*)(BSExtraData*, bool);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::RemoveExtra };
			func(this, apExtra, abDelete);
		}

		void RemoveExtra(std::uint8_t acType)
		{
			using func_t = void (BaseExtraList::*)(std::uint8_t);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::RemoveExtra_1 };
			func(this, acType);
		}

		BSExtraData* GetExtraData(std::uint8_t acType)
		{
			using func_t = decltype(&BaseExtraList::GetExtraData);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::GetExtraData };
			return func(this, acType);
		}

		BSExtraData* GetPrevExtraData(std::uint8_t acType)
		{
			using func_t = decltype(&BaseExtraList::GetPrevExtraData);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::GetPrevExtraData };
			return func(this, acType);
		}

		bool IsExtraListEmpty()
		{
			using func_t = decltype(&BaseExtraList::IsExtraListEmpty);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::IsExtraListEmpty };
			return func(this);
		}

	protected:
		static void ClearLastExtraAll(BaseExtraList* apList)
		{
			using func_t = decltype(&BaseExtraList::ClearLastExtraAll);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::ClearLastExtraAll };
			func(apList);
		}

		bool HasExtra(std::uint8_t acType) const
		{
			using func_t = decltype(&BaseExtraList::HasExtra);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::HasExtra };
			return func(this, acType);
		}

		void SetHasExtra(std::uint8_t acType, bool abVal)
		{
			using func_t = decltype(&BaseExtraList::SetHasExtra);
			static REL::Relocation<func_t> func{ Offsets::BaseExtraList::SetHasExtra };
			func(this, acType, abVal);
		}

	public:
		// members
		BSExtraData* pHead;       // 04
		std::uint8_t iFlags[21];  // 08
		std::uint8_t pad1D[0x3];  // 1D
	};
}
