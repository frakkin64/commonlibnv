#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSFadeNode;
	class BSMultiBoundNode;
	class BSResizableTriShape;
	class BSSegmentedTriShape;
	class NiGeometry;
	class NiLines;
	class NiNode;
	class NiParticles;
	class NiRTTI;
	class NiTriBasedGeom;
	class NiTriShape;
	class NiTriStrips;
	class bhkBlendCollisionObject;
	class bhkLimitedHingeConstraint;
	class bhkNiCollisionObject;
	class bhkRigidBody;

	class BSFaceGenMorphData :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFaceGenMorphData };
		static constexpr auto VTABLE{ VTABLE::BSFaceGenMorphData };

		// override (NiRefObject)
		virtual ~BSFaceGenMorphData() = default;  // 00

		// add
		virtual const NiRTTI* GetRTTI() const;                             // 02
		virtual NiNode* IsNode();                                          // 03
		virtual BSFadeNode* IsFadeNode();                                  // 04
		virtual BSMultiBoundNode* IsMultiBoundNode();                      // 05
		virtual NiGeometry* IsGeometry();                                  // 06
		virtual NiTriBasedGeom* IsTriBasedGeom();                          // 07
		virtual NiTriStrips* IsTriStrips();                                // 08
		virtual NiTriShape* IsTriShape();                                  // 09
		virtual BSSegmentedTriShape* IsSegmentedTriShape();                // 0A
		virtual BSResizableTriShape* IsResizableTriShape();                // 0B
		virtual NiParticles* IsParticlesGeom();                            // 0C
		virtual NiLines* IsLinesGeom();                                    // 0D
		virtual bhkNiCollisionObject* IsBhkNiCollisionObject();            // 0E
		virtual bhkBlendCollisionObject* IsBhkBlendCollisionObject();      // 0F
		virtual bhkRigidBody* IsBhkRigidBody();                            // 10
		virtual bhkLimitedHingeConstraint* IsBhkLimitedHingeConstraint();  // 11

		BSFaceGenMorphData* ctor()
		{
			using func_t = BSFaceGenMorphData*(__thiscall*)(BSFaceGenMorphData*);
			static REL::Relocation<func_t> func{ Offsets::BSFaceGenMorphData::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BSFaceGenMorphData) == 0x8);
}
