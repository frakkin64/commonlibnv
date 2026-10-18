#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiColor.h"
#include "RE/N/NiProperty.h"

namespace RE
{
	class NiMaterialProperty :
		public NiProperty  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMaterialProperty };
		static constexpr auto VTABLE{ VTABLE::NiMaterialProperty };

		static std::int32_t GetType()
		{
			using func_t = decltype(&NiMaterialProperty::GetType);
			static REL::Relocation<func_t> func{ Offsets::NiMaterialProperty::GetType };
			return func();
		}

		void SetEmittance(NiColor const& c)
		{
			using func_t = decltype(&NiMaterialProperty::SetEmittance);
			static REL::Relocation<func_t> func{ Offsets::NiMaterialProperty::SetEmittance };
			func(this, c);
		}

		void SetChanged(bool bChanged)
		{
			using func_t = decltype(&NiMaterialProperty::SetChanged);
			static REL::Relocation<func_t> func{ Offsets::NiMaterialProperty::SetChanged };
			func(this, bChanged);
		}

		void SetShineness(float c)
		{
			using func_t = decltype(&NiMaterialProperty::SetShineness);
			static REL::Relocation<func_t> func{ Offsets::NiMaterialProperty::SetShineness };
			func(this, c);
		}

		void SetAlpha(float c)
		{
			using func_t = decltype(&NiMaterialProperty::SetAlpha);
			static REL::Relocation<func_t> func{ Offsets::NiMaterialProperty::SetAlpha };
			func(this, c);
		}

	public:
		// members
		std::int32_t  m_iIndex;          // 18
		NiColor       m_spec;            // 1C
		NiColor       m_emit;            // 28
		NiColor*      m_external_emit;   // 34
		float         m_fShine;          // 38
		float         m_fAlpha;          // 3C
		float         m_fEmitMult;       // 40
		std::uint32_t m_uiRevID;         // 44
		void*         m_pvRendererData;  // 48
	};
}
