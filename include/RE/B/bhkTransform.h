#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkMatrix3.h"
#include "RE/B/bhkVector4.h"

namespace RE
{
	class NiTransform;

	class bhkTransform
	{
	public:
		void setIdentity()
		{
			using func_t = decltype(&bhkTransform::setIdentity);
			static REL::Relocation<func_t> func{ Offsets::bhkTransform::setIdentity };
			func(this);
		}

		bhkTransform* ctor()
		{
			using func_t = bhkTransform*(__thiscall*)(bhkTransform*);
			static REL::Relocation<func_t> func{ Offsets::bhkTransform::ctor };
			return func(this);
		}

		bhkTransform& NI2HK(NiTransform const& arNiTran)
		{
			using func_t = decltype(&bhkTransform::NI2HK);
			static REL::Relocation<func_t> func{ Offsets::bhkTransform::NI2HK };
			return func(this, arNiTran);
		}

	public:
		// members
		bhkMatrix3 Rot;    // 00
		bhkVector4 Trans;  // 30
	};
}
