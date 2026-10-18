#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBvTreeShape.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiCloningProcess;
	class NiObject;
	class NiStream;
	class bhkSerializable;
	class hkSerializableCinfo;
	class hkTriSampledHeightFieldBvTreeShapeCinfo;

	class bhkTriSampledHeightFieldBvTreeShape :
		public bhkBvTreeShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkTriSampledHeightFieldBvTreeShape };
		static constexpr auto VTABLE{ VTABLE::bhkTriSampledHeightFieldBvTreeShape };

		// override (bhkBvTreeShape)
		virtual ~bhkTriSampledHeightFieldBvTreeShape() = default;                                   // 00
		virtual NiObject* CreateClone(NiCloningProcess& arCloneData) override;                      // 12
		virtual void LoadBinary(NiStream& arStream) override;                                       // 13
		virtual void SaveBinary(NiStream& arStream) override;                                       // 16
		virtual void GetViewerStrings(NiTPrimitiveArray<char*>* apStrings) override;                // 18
		virtual void KillCinfo(bool abCreated) override;                                            // 29
		virtual void Init(const hkSerializableCinfo* a_arg1) override;                              // 2C
		virtual hkSerializableCinfo* CreateCinfo(bool* a_arg1) override;                            // 2D
		virtual void CopyMembers(bhkSerializable* apDest, NiCloningProcess& arCloneData) override;  // 31

		bhkTriSampledHeightFieldBvTreeShape* ctor(hkTriSampledHeightFieldBvTreeShapeCinfo const& arInfo)
		{
			using func_t = bhkTriSampledHeightFieldBvTreeShape*(__thiscall*)(bhkTriSampledHeightFieldBvTreeShape*, hkTriSampledHeightFieldBvTreeShapeCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::bhkTriSampledHeightFieldBvTreeShape::ctor };
			return func(this, arInfo);
		}
	};
	static_assert(sizeof(bhkTriSampledHeightFieldBvTreeShape) == 0x14);
}
