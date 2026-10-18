#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiColor;
	class NiNode;
	class NiObject;
	class NiStream;
	class bhkSerializable;
	class bhkShapeCollection;

	class bhkBvTreeShape :
		public bhkShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkBvTreeShape };
		static constexpr auto VTABLE{ VTABLE::bhkBvTreeShape };

		// override (bhkShape)
		virtual ~bhkBvTreeShape() = default;                                                        // 00
		virtual void LoadBinary(NiStream& arStream) override;                                       // 13
		virtual void LinkObject(NiStream& arStream) override;                                       // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                              // 15
		virtual void SaveBinary(NiStream& arStream) override;                                       // 16
		virtual bool IsEqual(NiObject* apObject) override;                                          // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void Link(bool abAttach) override;                                                  // 24
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31
		virtual bhkShapeCollection* FindShapeCollection() override;                                 // 33
		virtual void BuildDisplayGeometry(NiNode* __formal, NiColor const& __formal) override;      // 35
		virtual void DestroyDisplayGeometry() override;                                             // 36

		bhkShapeCollection* GetShapeCollection() const
		{
			using func_t = decltype(&bhkBvTreeShape::GetShapeCollection);
			static REL::Relocation<func_t> func{ Offsets::bhkBvTreeShape::GetShapeCollection };
			return func(this);
		}
	};
	static_assert(sizeof(bhkBvTreeShape) == 0x14);
}
