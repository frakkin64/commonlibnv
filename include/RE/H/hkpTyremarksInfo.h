#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkVector4;
	class hkpTyremarksWheel;
	class hkpVehicleData;
	class hkpVehicleInstance;

	class hkpTyremarksInfo :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTyremarksInfo };
		static constexpr auto VTABLE{ VTABLE::hkpTyremarksInfo };

		// override (hkReferencedObject)
		virtual ~hkpTyremarksInfo() = default;  // 00

		// add
		virtual void updateTyremarksInfo(float a_arg1, hkpVehicleInstance const* a_arg2);                                      // 03
		virtual void getWheelTyremarksStrips(const hkpVehicleInstance* a_arg1, std::int32_t a_arg2, hkVector4* a_arg3) const;  // 04

		hkpTyremarksInfo* ctor(hkpVehicleData const& data, std::int32_t num_points)
		{
			using func_t = hkpTyremarksInfo*(__thiscall*)(hkpTyremarksInfo*, hkpVehicleData const&, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpTyremarksInfo::ctor };
			return func(this, data, num_points);
		}

	public:
		// members
		float                                                 m_minTyremarkEnergy;  // 08?
		float                                                 m_maxTyremarkEnergy;  // 0C?
		hkArray<hkpTyremarksWheel*, hkContainerHeapAllocator> m_tyremarksWheel;     // 10?
	};
}
