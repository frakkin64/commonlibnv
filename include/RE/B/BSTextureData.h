#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiExtraData.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class BSTextureData :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTextureData };
		static constexpr auto VTABLE{ VTABLE::BSTextureData };

		// override (NiExtraData)
		virtual ~BSTextureData() = default;                                           // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		BSTextureData* ctor()
		{
			using func_t = BSTextureData*(__thiscall*)(BSTextureData*);
			static REL::Relocation<func_t> func{ Offsets::BSTextureData::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleArray<NiAVObject*, 1024> pObjects;  // 0C
	};
	static_assert(sizeof(BSTextureData) == 0x1C);
}
