#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaFootstepAnalysisInfo :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaFootstepAnalysisInfo };
		static constexpr auto VTABLE{ VTABLE::hkaFootstepAnalysisInfo };

		// override (hkReferencedObject)
		virtual ~hkaFootstepAnalysisInfo() = default;  // 00

		hkaFootstepAnalysisInfo* ctor(std::int32_t n, float a_arg2, float a_arg3, float duration, char const* posTol, char const* velTol, char const* name, char const* nameStrike, char const* nameLift)
		{
			using func_t = hkaFootstepAnalysisInfo*(__thiscall*)(hkaFootstepAnalysisInfo*, std::int32_t, float, float, float, char const*, char const*, char const*, char const*, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkaFootstepAnalysisInfo::ctor };
			return func(this, n, a_arg2, a_arg3, duration, posTol, velTol, name, nameStrike, nameLift);
		}

	public:
		// members
		hkArray<char, hkContainerHeapAllocator>  m_name;          // 08?
		hkArray<char, hkContainerHeapAllocator>  m_nameStrike;    // 14?
		hkArray<char, hkContainerHeapAllocator>  m_nameLift;      // 20?
		hkArray<char, hkContainerHeapAllocator>  m_nameLock;      // 2C?
		hkArray<char, hkContainerHeapAllocator>  m_nameUnlock;    // 38?
		hkArray<float, hkContainerHeapAllocator> m_minPos;        // 44?
		hkArray<float, hkContainerHeapAllocator> m_maxPos;        // 50?
		hkArray<float, hkContainerHeapAllocator> m_minVel;        // 5C?
		hkArray<float, hkContainerHeapAllocator> m_maxVel;        // 68?
		hkArray<float, hkContainerHeapAllocator> m_allBonesDown;  // 74?
		hkArray<float, hkContainerHeapAllocator> m_anyBonesDown;  // 80?
		float                                    m_posTol;        // 8C?
		float                                    m_velTol;        // 90?
		float                                    m_duration;      // 94?
	};
}
