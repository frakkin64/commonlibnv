#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiAVObject;
	class NiUpdateData;

	class NiCollisionObject :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiCollisionObject };
		static constexpr auto VTABLE{ VTABLE::NiCollisionObject };

		// add
		virtual void Unk_23();                                   // 23
		virtual void UpdateWorldData(NiUpdateData& UpdateData);  // 24
		virtual void Unk_25();                                   // 25
		virtual void Unk_26();                                   // 26
		virtual void Unk_27();                                   // 27

		// members
		NiAVObject* m_pkSceneObject;  // 08
	};
	static_assert(sizeof(NiCollisionObject) == 0xC);
}
