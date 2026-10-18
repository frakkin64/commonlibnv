#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMatrix4.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpRigidBody;
	class hkxMesh;

	class alignas(16) hkpDisplayBindingData_RigidBody :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDisplayBindingData_RigidBody };
		static constexpr auto VTABLE{ VTABLE::hkpDisplayBindingData_RigidBody };

		// override (hkReferencedObject)
		virtual ~hkpDisplayBindingData_RigidBody() = default;  // 00

		// members
		hkRefPtr<hkpRigidBody> m_rigidBody;                            // 08?
		hkRefPtr<hkxMesh>      m_displayObject;                        // 0C?
		hkMatrix4              m_rigidBodyFromDisplayObjectTransform;  // 10?
	};
}
