#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiObjectNET_CopyType.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiExtraData;
	class NiTimeController;

	class NiObjectNET :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiObjectNET };
		static constexpr auto VTABLE{ VTABLE::NiObjectNET };

		using CopyType = NiObjectNET_CopyType;

		NiFixedString const& GetName() const
		{
			using func_t = decltype(&NiObjectNET::GetName);
			static REL::Relocation<func_t> func{ Offsets::NiObjectNET::GetName };
			return func(this);
		}

		void SetName(NiFixedString const& strName)
		{
			using func_t = decltype(&NiObjectNET::SetName);
			static REL::Relocation<func_t> func{ Offsets::NiObjectNET::SetName };
			func(this, strName);
		}

		bool AddExtraData(NiExtraData* pkExtra)
		{
			using func_t = decltype(&NiObjectNET::AddExtraData);
			static REL::Relocation<func_t> func{ Offsets::NiObjectNET::AddExtraData };
			return func(this, pkExtra);
		}

	public:
		// members
		NiFixedString               m_kName;            // 08
		NiPointer<NiTimeController> m_spControllers;    // 0C
		NiExtraData**               m_ppkExtra;         // 10
		std::uint16_t               m_usExtraDataSize;  // 14
		std::uint16_t               m_usMaxSize;        // 16
	};
	static_assert(sizeof(NiObjectNET) == 0x18);
}
