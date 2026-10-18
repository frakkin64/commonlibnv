#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiBound
	{
	public:
		void SetCenterAndRadius(NiPoint3 const& kCenter, float fRadius)
		{
			using func_t = decltype(&NiBound::SetCenterAndRadius);
			static REL::Relocation<func_t> func{ Offsets::NiBound::SetCenterAndRadius };
			func(this, kCenter, fRadius);
		}

		NiBound const& operator_call(NiBound const& aRhs)
		{
			using func_t = decltype(&NiBound::operator_call);
			static REL::Relocation<func_t> func{ Offsets::NiBound::operator_call };
			return func(this, aRhs);
		}

		NiBound* ctor()
		{
			using func_t = NiBound*(__thiscall*)(NiBound*);
			static REL::Relocation<func_t> func{ Offsets::NiBound::ctor };
			return func(this);
		}

		char* GetViewerString(char const* pPrefix) const
		{
			using func_t = decltype(&NiBound::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiBound::GetViewerString };
			return func(this, pPrefix);
		}

	public:
		// members
		NiPoint3 m_kCenter;  // 00
		union
		{
			float m_fRadius;
			std::int32_t m_iRadiusAsInt;
		} ___u1;  // 0C
	};
	static_assert(sizeof(NiBound) == 0x10);
}
