#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkSerializable.h"
#include "RE/H/hkResult.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiColor;
	class NiNode;
	class NiObject;
	class NiStream;
	class bhkShapeCollection;
	class hkGeometry;
	class hkpMassProperties;
	class hkpShape;

	class bhkShape :
		public bhkSerializable  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkShape };
		static constexpr auto VTABLE{ VTABLE::bhkShape };

		// override (bhkSerializable)
		virtual ~bhkShape() = default;                                                // 00
		virtual void LoadBinary(NiStream& arStream) override;                         // 13
		virtual void LinkObject(NiStream& arStream) override;                         // 14
		virtual bool RegisterStreamables(NiStream& arStream) override;                // 15
		virtual void SaveBinary(NiStream& arStream) override;                         // 16
		virtual bool IsEqual(NiObject* apObject) override;                            // 17
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;  // 18
		virtual void Link(bool abAttach) override;                                    // 24

		// add
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData);                                            // 31
		virtual hkResult CalcMass(hkpMassProperties& arProp);                                                                        // 32
		virtual bhkShapeCollection* FindShapeCollection();                                                                           // 33
		virtual bool CanShare(NiCloningProcess* a_arg1) const;                                                                       // 34
		virtual void BuildDisplayGeometry(NiNode* __formal, NiColor const& __formal);                                                // 35
		virtual void DestroyDisplayGeometry();                                                                                       // 36
		virtual void BuildDisplayFromhkGeometry(NiNode* apNode, hkGeometry* apGeom, NiColor const& arDefColor, char const* apName);  // 37

		static bhkShape* Getbhk(hkpShape const* apShape)
		{
			using func_t = decltype(&bhkShape::Getbhk);
			static REL::Relocation<func_t> func{ Offsets::bhkShape::Getbhk };
			return func(apShape);
		}

		bhkShape* ctor()
		{
			using func_t = bhkShape*(__thiscall*)(bhkShape*);
			static REL::Relocation<func_t> func{ Offsets::bhkShape::ctor };
			return func(this);
		}

		MATERIAL_TYPE QMaterial() const
		{
			using func_t = decltype(&bhkShape::QMaterial);
			static REL::Relocation<func_t> func{ Offsets::bhkShape::QMaterial };
			return func(this);
		}

		MATERIAL_TYPE GetSubshapeMaterial(std::uint32_t aiKey)
		{
			using func_t = decltype(&bhkShape::GetSubshapeMaterial);
			static REL::Relocation<func_t> func{ Offsets::bhkShape::GetSubshapeMaterial };
			return func(this, aiKey);
		}

	public:
		// members
		std::uint32_t eMaterial;  // 10
	};
	static_assert(sizeof(bhkShape) == 0x14);
}
