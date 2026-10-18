#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpProcessCollisionData_ToiInfo.h"
#include "RE/H/hkpProcessCollisionOutput_PotentialInfo.h"

namespace RE
{
	class hkpCdBody;
	class hkpContactMgr;
	class hkpProcessCdPoint;
	class hkpProcessCollisionOutput;

	class alignas(16) hkpProcessCollisionOutputBackup
	{
	public:
		void rollbackOutput(hkpCdBody const& bodyA, hkpCdBody const& output, hkpProcessCollisionOutput& mgr, hkpContactMgr* a_arg4)
		{
			using func_t = decltype(&hkpProcessCollisionOutputBackup::rollbackOutput);
			static REL::Relocation<func_t> func{ Offsets::hkpProcessCollisionOutputBackup::rollbackOutput };
			func(this, bodyA, output, mgr, a_arg4);
		}

		hkpProcessCollisionOutputBackup* ctor(hkpProcessCollisionOutput const& output)
		{
			using func_t = hkpProcessCollisionOutputBackup*(__thiscall*)(hkpProcessCollisionOutputBackup*, hkpProcessCollisionOutput const&);
			static REL::Relocation<func_t> func{ Offsets::hkpProcessCollisionOutputBackup::ctor };
			return func(this, output);
		}

	public:
		// members
		hkpProcessCdPoint*                      m_firstPoint;          // 00
		hkpProcessCollisionOutput_PotentialInfo m_weldingInformation;  // 04
		std::uint32_t                           pad100C;               // 100C
		hkpProcessCollisionData_ToiInfo         m_toi;                 // 1010
	};
}
