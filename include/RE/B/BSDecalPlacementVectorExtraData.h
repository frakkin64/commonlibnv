#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiIntegerExtraData.h"
#include "RE/N/NiTList.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class DECAL_PLACEMENT_VECTOR_GROUP_DATA;
	class NiAVObject;
	class NiCloningProcess;
	class NiObject;
	class NiStream;

	class BSDecalPlacementVectorExtraData :
		public NiIntegerExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDecalPlacementVectorExtraData };
		static constexpr auto VTABLE{ VTABLE::BSDecalPlacementVectorExtraData };

		// override (NiIntegerExtraData)
		virtual ~BSDecalPlacementVectorExtraData() = default;                         // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		BSDecalPlacementVectorExtraData* ctor(std::int32_t iValue)
		{
			using func_t = BSDecalPlacementVectorExtraData*(__thiscall*)(BSDecalPlacementVectorExtraData*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BSDecalPlacementVectorExtraData::ctor };
			return func(this, iValue);
		}

		static bool FindDecalPlacementVectorGroupRecurse(NiAVObject* apObject, NiAVObject* apRootObject)
		{
			using func_t = decltype(&BSDecalPlacementVectorExtraData::FindDecalPlacementVectorGroupRecurse);
			static REL::Relocation<func_t> func{ Offsets::BSDecalPlacementVectorExtraData::FindDecalPlacementVectorGroupRecurse };
			return func(apObject, apRootObject);
		}

	public:
		// members
		std::uint16_t                      usGroupCount;              // 10
		std::uint16_t                      pad12;                     // 12
		DECAL_PLACEMENT_VECTOR_GROUP_DATA* pDecalPlacementGroups[8];  // 14
		NiTList<NiAVObject*>               skinnedObjects;            // 34
	};
	static_assert(sizeof(BSDecalPlacementVectorExtraData) == 0x40);
}
