#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CFilter.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpWorldRayCastInput.h"
#include "RE/H/hkpWorldRayCastOutput.h"

namespace RE
{
	class NiAVObject;
	class NiPoint3;
	class hkpAllRayHitCollector;
	class hkpClosestRayHitCollector;

	class alignas(16) bhkPickData :
		public hkpWorldRayCastInput,  // 00
		public hkpWorldRayCastOutput  // 30
	{
	public:
		void GetFrom(NiPoint3& arFrom)
		{
			using func_t = decltype(&bhkPickData::GetFrom);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::GetFrom };
			func(this, arFrom);
		}

		void GetTo(NiPoint3& arTo)
		{
			using func_t = decltype(&bhkPickData::GetTo);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::GetTo };
			func(this, arTo);
		}

		hkVector4 const& GethkTo()
		{
			using func_t = decltype(&bhkPickData::GethkTo);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::GethkTo };
			return func(this);
		}

		bhkPickData* ctor()
		{
			using func_t = bhkPickData*(__thiscall*)(bhkPickData*);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::ctor };
			return func(this);
		}

		void SetFrom(NiPoint3 const& arFrom)
		{
			using func_t = decltype(&bhkPickData::SetFrom);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetFrom };
			func(this, arFrom);
		}

		void SetTo(NiPoint3 const& arTo)
		{
			using func_t = void (bhkPickData::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetTo };
			func(this, arTo);
		}

		void SetTo(hkVector4 const& arTo)
		{
			using func_t = void (bhkPickData::*)(hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetTo_1 };
			func(this, arTo);
		}

		void SetFilter(CFilter aiFilter)
		{
			using func_t = decltype(&bhkPickData::SetFilter);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetFilter };
			func(this, aiFilter);
		}

		void SetLength(hkVector4 const& arLength)
		{
			using func_t = void (bhkPickData::*)(hkVector4 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetLength };
			func(this, arLength);
		}

		void SetAllCollector(hkpAllRayHitCollector* apCollector)
		{
			using func_t = decltype(&bhkPickData::SetAllCollector);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetAllCollector };
			func(this, apCollector);
		}

		void SetClosestCollector(hkpClosestRayHitCollector* apCollector)
		{
			using func_t = decltype(&bhkPickData::SetClosestCollector);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetClosestCollector };
			func(this, apCollector);
		}

		void CalcHitPoint(NiPoint3& arPoint)
		{
			using func_t = decltype(&bhkPickData::CalcHitPoint);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::CalcHitPoint };
			func(this, arPoint);
		}

		void SetLength(NiPoint3 const& arLength)
		{
			using func_t = void (bhkPickData::*)(NiPoint3 const&);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::SetLength_1 };
			func(this, arLength);
		}

		NiAVObject* GetNiAVObject()
		{
			using func_t = decltype(&bhkPickData::GetNiAVObject);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::GetNiAVObject };
			return func(this);
		}

	protected:
		void CalcTo()
		{
			using func_t = decltype(&bhkPickData::CalcTo);
			static REL::Relocation<func_t> func{ Offsets::bhkPickData::CalcTo };
			func(this);
		}

	public:
		// members
		hkVector4                  hkLength;         // 90
		char*                      pCache;           // A0
		hkpClosestRayHitCollector* pCloseCollector;  // A4
		hkpAllRayHitCollector*     pAllCollector;    // A8
		bool                       bPickFailed;      // AC
		std::uint8_t               padAD[0x3];       // AD
	};
}
