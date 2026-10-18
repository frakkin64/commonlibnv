#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiExtraData.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiFixedString;
	class NiObject;
	class NiStream;

	class BSBound :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSBound };
		static constexpr auto VTABLE{ VTABLE::BSBound };

		// override (NiExtraData)
		virtual ~BSBound() = default;                                                 // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		static NiFixedString const& Tag()
		{
			using func_t = decltype(&BSBound::Tag);
			static REL::Relocation<func_t> func{ Offsets::BSBound::Tag };
			return func();
		}

	public:
		// members
		NiPoint3 Center;   // 0C
		NiPoint3 Extents;  // 18
	};
	static_assert(sizeof(BSBound) == 0x24);
}
