#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkKdTreeBundleCastCollector.h"
#include "RE/H/hkpShapeRayBundleCastInput.h"

namespace RE
{
	class hkKdTreeRayCastBundleCommand;
	class hkVector4Comparison;
	class hkpCollisionFilter;
	class hkpWorldRayCastInput;

	class alignas(16) hkKdTreeCpuBroadphaseBundleCastCollector :
		public hkKdTreeBundleCastCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkKdTreeCpuBroadphaseBundleCastCollector };
		static constexpr auto VTABLE{ VTABLE::hkKdTreeCpuBroadphaseBundleCastCollector };

		// override (hkKdTreeBundleCastCollector)
		virtual ~hkKdTreeCpuBroadphaseBundleCastCollector() = default;                                  // 00
		virtual void addMidPhaseHit(std::uint32_t a_arg1, const hkVector4Comparison* a_arg2) override;  // 01

		hkKdTreeCpuBroadphaseBundleCastCollector* ctor()
		{
			using func_t = hkKdTreeCpuBroadphaseBundleCastCollector*(__thiscall*)(hkKdTreeCpuBroadphaseBundleCastCollector*);
			static REL::Relocation<func_t> func{ Offsets::hkKdTreeCpuBroadphaseBundleCastCollector::ctor };
			return func(this);
		}

	public:
		// members
		const hkpCollisionFilter*     m_filter;         // 04?
		const hkpWorldRayCastInput*   m_originalInput;  // 08?
		hkKdTreeRayCastBundleCommand* m_command;        // 0C?
		hkpShapeRayBundleCastInput    m_workInput;      // 10?
		std::int32_t                  m_numHits[4];     // 80?
	};
}
