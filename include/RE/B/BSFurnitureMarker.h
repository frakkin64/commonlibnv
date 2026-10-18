#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FurnitureMark.h"
#include "RE/N/NiExtraData.h"
#include "RE/N/NiTObjectArray.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiObjectNET;
	class NiStream;

	class BSFurnitureMarker :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFurnitureMarker };
		static constexpr auto VTABLE{ VTABLE::BSFurnitureMarker };

		// override (NiExtraData)
		virtual ~BSFurnitureMarker() = default;                                       // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;        // 12
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18

		FurnitureMark& QMark(std::uint32_t aiMark)
		{
			using func_t = decltype(&BSFurnitureMarker::QMark);
			static REL::Relocation<func_t> func{ Offsets::BSFurnitureMarker::QMark };
			return func(this, aiMark);
		}

		static BSFurnitureMarker* Find(NiObjectNET* apObject)
		{
			using func_t = decltype(&BSFurnitureMarker::Find);
			static REL::Relocation<func_t> func{ Offsets::BSFurnitureMarker::Find };
			return func(apObject);
		}

	public:
		// members
		NiTObjectArray<FurnitureMark> aMarks;  // 0C
	};
	static_assert(sizeof(BSFurnitureMarker) == 0x1C);
}
