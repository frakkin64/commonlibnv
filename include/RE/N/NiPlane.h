#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiPlane
	{
	public:
		std::int32_t WhichSide(NiPoint3 const& kPoint) const
		{
			using func_t = decltype(&NiPlane::WhichSide);
			static REL::Relocation<func_t> func{ Offsets::NiPlane::WhichSide };
			return func(this, kPoint);
		}

		float Distance(NiPoint3 const& kPoint) const
		{
			using func_t = decltype(&NiPlane::Distance);
			static REL::Relocation<func_t> func{ Offsets::NiPlane::Distance };
			return func(this, kPoint);
		}

		NiPlane* ctor(NiPoint3 const& kNormal, NiPoint3 const& kPoint)
		{
			using func_t = NiPlane*(__thiscall*)(NiPlane*, NiPoint3 const&, NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::NiPlane::ctor };
			return func(this, kNormal, kPoint);
		}

		char* GetViewerString(char const* pPrefix) const
		{
			using func_t = decltype(&NiPlane::GetViewerString);
			static REL::Relocation<func_t> func{ Offsets::NiPlane::GetViewerString };
			return func(this, pPrefix);
		}

	public:
		// members
		NiPoint3 m_kNormal;    // 00
		float    m_fConstant;  // 0C
	};
}
