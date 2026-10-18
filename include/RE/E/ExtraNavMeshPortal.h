#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NAVMESH_PORTAL.h"

namespace RE
{
	class ExtraNavMeshPortal :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraNavMeshPortal };
		static constexpr auto VTABLE{ VTABLE::ExtraNavMeshPortal };

		// override (BSExtraData)
		virtual ~ExtraNavMeshPortal() = default;  // 00

		ExtraNavMeshPortal* ctor(NAVMESH_PORTAL apPortal)
		{
			using func_t = ExtraNavMeshPortal*(__thiscall*)(ExtraNavMeshPortal*, NAVMESH_PORTAL);
			static REL::Relocation<func_t> func{ Offsets::ExtraNavMeshPortal::ctor };
			return func(this, apPortal);
		}

	public:
		// members
		NAVMESH_PORTAL Portal;  // 0C
	};
}
