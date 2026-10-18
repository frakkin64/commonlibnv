#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkWorldObject.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiStream;

	class bhkEntity :
		public bhkWorldObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkEntity };
		static constexpr auto VTABLE{ VTABLE::bhkEntity };

		// override (bhkWorldObject)
		virtual ~bhkEntity() = default;                                               // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual bool Remove() override;                                               // 28
		virtual void Kill() override;                                                 // 2E
		virtual void UpdateCFilter() override;                                        // 31
	};
	static_assert(sizeof(bhkEntity) == 0x14);
}
