#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkCharacterPointCollector.h"
#include "RE/B/bhkSerializable.h"

namespace RE
{
	class NiPoint3;
	class hkVector4;

	class alignas(16) bhkCharacterProxy :
		public bhkSerializable  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterProxy };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterProxy };

		hkVector4 const& GethkPosition() const
		{
			using func_t = decltype(&bhkCharacterProxy::GethkPosition);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterProxy::GethkPosition };
			return func(this);
		}

		void GetLinearVelocity(NiPoint3& arVel) const
		{
			using func_t = decltype(&bhkCharacterProxy::GetLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterProxy::GetLinearVelocity };
			func(this, arVel);
		}

		hkVector4 const& GethkLinearVelocity() const
		{
			using func_t = decltype(&bhkCharacterProxy::GethkLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterProxy::GethkLinearVelocity };
			return func(this);
		}

		void SetLinearVelocity(hkVector4 const& arVel)
		{
			using func_t = decltype(&bhkCharacterProxy::SetLinearVelocity);
			static REL::Relocation<func_t> func{ Offsets::bhkCharacterProxy::SetLinearVelocity };
			func(this, arVel);
		}

	public:
		// members
		bhkCharacterPointCollector m_ignoredCollisionStartCollector;  // 10
	};
	static_assert(sizeof(bhkCharacterProxy) == 0x3E0);
}
