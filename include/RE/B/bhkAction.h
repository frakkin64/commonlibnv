#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSerializable.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class bhkWorld;
	class hkpWorld;

	class bhkAction :
		public bhkSerializable  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkAction };
		static constexpr auto VTABLE{ VTABLE::bhkAction };

		// override (bhkSerializable)
		virtual ~bhkAction() = default;                                               // 00
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void Link(bool abAttach) override;                                    // 24
		virtual hkpWorld* GethkWorldRw() override;                                    // 26
		virtual bool Add(bhkWorld* __formal) override;                                // 27
		virtual bool Remove() override;                                               // 28

		// add
		virtual void Update(float __formal);  // 31
	};
	static_assert(sizeof(bhkAction) == 0x10);
}
