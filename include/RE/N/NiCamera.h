#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAVObject.h"
#include "RE/N/NiFrustum.h"
#include "RE/N/NiRect.h"

namespace RE
{
	class NiPoint3;
	class NiRenderTargetGroup;

	class NiCamera :
		public NiAVObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCamera };
		static constexpr auto VTABLE{ VTABLE::NiCamera };

		NiFrustum const& GetViewFrustum() const
		{
			using func_t = decltype(&NiCamera::GetViewFrustum);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::GetViewFrustum };
			return func(this);
		}

		NiRect<float> const& GetViewPort() const
		{
			using func_t = decltype(&NiCamera::GetViewPort);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::GetViewPort };
			return func(this);
		}

		void SetMaxFarNearRatio(float fMax)
		{
			using func_t = decltype(&NiCamera::SetMaxFarNearRatio);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::SetMaxFarNearRatio };
			func(this, fMax);
		}

		void SetViewPort(NiRect<float> const& kPort)
		{
			using func_t = decltype(&NiCamera::SetViewPort);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::SetViewPort };
			func(this, kPort);
		}

		void SetMinNearPlaneDist(float fMin)
		{
			using func_t = decltype(&NiCamera::SetMinNearPlaneDist);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::SetMinNearPlaneDist };
			func(this, fMin);
		}

		void SetViewFrustum(NiFrustum const& kFrustum)
		{
			using func_t = decltype(&NiCamera::SetViewFrustum);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::SetViewFrustum };
			func(this, kFrustum);
		}

		bool WorldPtToScreenPt(NiPoint3 const& kPt, float& fBx, float& fBy, float fZeroTolerance) const
		{
			using func_t = decltype(&NiCamera::WorldPtToScreenPt);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::WorldPtToScreenPt };
			return func(this, kPt, fBx, fBy, fZeroTolerance);
		}

		bool WindowPointToRay(std::int32_t lWx, std::int32_t lWy, NiPoint3& kOrigin, NiPoint3& kDir, NiRenderTargetGroup const* pkTarget) const
		{
			using func_t = decltype(&NiCamera::WindowPointToRay);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::WindowPointToRay };
			return func(this, lWx, lWy, kOrigin, kDir, pkTarget);
		}

		NiCamera* ctor()
		{
			using func_t = NiCamera*(__thiscall*)(NiCamera*);
			static REL::Relocation<func_t> func{ Offsets::NiCamera::ctor };
			return func(this);
		}

	public:
		// members
		float         m_aafWorldToCam[4][4];  // 9C
		NiFrustum     m_kViewFrustum;         // DC
		float         m_fMinNearPlaneDist;    // F8
		float         m_fMaxFarNearRatio;     // FC
		NiRect<float> m_kPort;                // 100
		float         m_fLODAdjust;           // 110
	};
}
